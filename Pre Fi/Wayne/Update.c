#include<stdio.h>

typedef struct{
	char Lname[16];
	char Fname[24];
	char MI;
}nametype;

void updateList();
void main(){	
	updateList();
}

void updateList(){
	FILE* fp;
	fp = fopen("try.txt", "r+");
	nametype name;
	int ctr=0;
	
	if(fp != NULL){
		while( fread(&name, sizeof(nametype),1,fp) != 0){
			if(name.MI == 'L'){
				name.MI = 'M';
				fseek(fp,ctr*sizeof(nametype), SEEK_SET);
				fwrite(&name,sizeof(nametype),1,fp);
				fseek(fp,(ctr+1)*sizeof(nametype), SEEK_SET);
			}
			ctr++;
		}
	}
}
