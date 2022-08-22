#include<stdio.h>
#define max 60
	typedef struct name{
		char Fname[24];
		char MI;
		char Lname[16];
	}Nametype;
	
	Nametype getName();
	void main(){
		getName();
	}
	
	Nametype getName(){
		 FILE* fp;
		 int x;
		 Nametype names[max];
		 char name[10];
		 gets(name);
		fp = fopen(name,"wb");
		 if(fp != NULL){
		 	for(x=0;x<5;x++){
		 		printf("%d",x+1);
		 		scanf("%s",&names[x].Fname);
		 		scanf("%s",&names[x].Lname);
		 		scanf(" %c", &names[x].MI);
			 }
		 	fwrite(names,sizeof(Nametype),1,fp);
		 }
		 fclose(fp); 
	}
