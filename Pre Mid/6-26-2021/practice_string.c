#include<stdio.h>
#include<string.h>
#include<ctype.h>

	int findConsonants(char name[]);
	void main(){
		char name[]="Mee-6Jomar";

		findConsonants(name);
	}

	int findConsonants(char name[]){
		int size, x,cons=0,vowel=0;
		size = strlen(name);
		for(x=0; x<size; x++){
			if(isalpha(name[x]) != 0){
				if(name[x] != 'A' && name[x] != 'a' && name[x] != 'E' && name[x] != 'e' && name[x] != 'I' && name[x] != 'i' && name[x] != 'O' && name[x] != 'o' && name[x] != 'U' && name[x] != 'u'){
					cons++;
				}else{
					vowel++;
				}
			}
		}
	}


