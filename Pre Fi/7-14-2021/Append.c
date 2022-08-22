#include<stdio.h>
#define max 5
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
	Nametype n;
	char filename[16];
	
	printf("\nEnter name of File: ");
	gets(filename);
	
	fp = fopen(filename,"ab");
	if(fp != NULL){
		n=getName();
		displayName(n);
		fwrite(&n,sizeof(Nametype),1,fp);
	}
	fclose(fp); 
}

void displayName(Nametype N){
	printf("\n%-16s",N.Fname);
	printf("%-16s",N.Lname);
	printf("%-5c",N.MI);
}

Nametype getName(){
	Nametype name; 
	
	printf("\nEnter First name: ");		fflush(stdin);      scanf("%[^\n]",name.Fname); 
	printf("\nEnter Last name: ");		fflush(stdin);      scanf("%[^\n]",name.Lname);
	printf("\nEnter Middle Initial: "); fflush(stdin); 		scanf(" %c",&name.MI);
	return name;
}
	
