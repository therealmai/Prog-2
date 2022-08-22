#include<stdio.h>
#include<ctype.h>

	void textFilter(char msg[]);
	void main(){
		char msg[]="YES, jomar35leano e-mail owner is Jomar and he is 19 years Old since june 14, 2002";
		
		textFilter(msg);
	}
	
	void textFilter(char msg[]){
		int x;
		char ch;
		
		for(x=0; msg[x] != 0; x++){
			ch = msg[x];
			if(isdigit(ch) || ispunct(ch) != 0){
				msg[x] = ' ';
			}else{
				msg[x] = tolower(ch);
			}
		}
		printf("%s", msg);
	}
