#include <stdio.h>
#include <ctype.h>

	int findCons(char str[]);
	void main(){
		char str[] = "MEE6";
		findCons(str);
	}
	
	int findCons(char str[]){
		int cons=0, x;
		for(x=0; str[x] != '\0'; x++){
			if(isalpha(str[x]) !=0){
				if(str[x] != 'A' && str[x] != 'E' && str[x] != 'I' && str[x] != 'O' && str[x] != 'U' && str[x] != 'a' && str[x] != 'e'
				&& str[x] != 'i' && str[x] != 'o' && str[x] != 'u'){
					cons++;
				}
			}
		}
		return cons;
	}
