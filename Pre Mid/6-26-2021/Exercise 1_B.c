#include <stdio.h>

	int countConsonants(char str1[]);
	void main(){
		char str1[] = "Jomar";
		printf("%d", countConsonants(str1));
	}
	
		int countConsonants(char str1[]){
			int x =0;
			int cons =0;
			for(x=0; x != '\0' ; x++){
				if(str1[x] >= 'A' && str1[x] <= 'Z' || str1[x] >= 'a' && str1[x] <= 'z'){
					if(str1[x] != 'A' && str1[x] != 'a' && str1[x] != 'E' && str1[x] != 'e' && str1[x] != 'I' && str1[x] != 'i' && str1[x] != 'O' &&
					 str1[x] != 'o' && str1[x] != 'U' && str1[x] != 'u'){
					 	cons++;
					 }
				}
			}
			return cons;
		}
		
		void jomar(){}
		
