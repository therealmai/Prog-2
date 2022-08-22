#include<stdio.h>

	char findChar(char msg[]);
	void main(){
		char msg[]="Hel49 6Gorning";
		
		findChar(msg);
	}
	
		char findChar(char msg[]){
			int x,y, size,punct=0,letters=0,digits=0,others=0;
			int* array;
			array = (int *) calloc(4,sizeof(int));
			size = strlen(msg);
			for(x=0; msg[x]!= '\0'; x++){
				if(isalpha(msg[x]) !=0 ){
					arr[0]++;
				}else if(isdigit(msg[x]) != 0 ){
					arr[1]++;
				}else if(ispunct(msg[x] != 0)){
					arr[2]punct++;
				}else{
					arr[3]++;
				}
			}
			return array;	
		}
