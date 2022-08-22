#include<stdio.h>
#define max 60
	typedef struct name{
		char Fname[24];
		char MI;
		char Lname[16];
	}Nametype;
	
	Nametype displayName();
	void main(){
		displayName();
	}
	
	Nametype displayName(Nametype N){
		 FILE* fp;
		fp = fopen("File","rb");
		 if(fp != NULL){
		 	while(fread(&N,sizeof(Nametype),1,fp) != 0){
		 		printf("%s ", N.Lname);
			 }
		 
		 }
		 fclose(fp); 
	}
