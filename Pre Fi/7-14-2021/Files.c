#include<stdio.h>
#define max 2
	typedef struct name{
		char Fname[24];
		char MI;
		char Lname[16];
	}Nametype;
	
Nametype getName();
void displayName(Nametype N);	

void main(){
	FILE* fp;
	int x;
	Nametype names[max];
	char filename[20];
	gets(filename);
	fp = fopen(filename,"a+");
	if(fp != NULL){
		for(x=0;x<max;x++){
		 	 names[x]=getName();
		}
		
		for(x=0; x<max; x++){
			displayName(names[x]);
		}
		fwrite(names,sizeof(Nametype),max,fp);
	}
	fclose(fp); 
}

void displayName(Nametype N){
	printf("\n%s, %s %c ",N.Lname,N.Fname,N.MI);
}

Nametype getName(){
	Nametype name; 
	
	printf("\nEnter First name: ");		fflush(stdin);      scanf("%[^\n]",name.Fname); 
	printf("\nEnter Last name: ");		fflush(stdin);      scanf("%[^\n]",name.Lname);
	printf("\nEnter Middle Initial: "); fflush(stdin); 		scanf(" %c",&name.MI);
	return name;
}
	
