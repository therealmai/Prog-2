#include<stdio.h>
#include<ctype.h>
#include<string.h>

	void textFilter(char str[]);
	void main(){
	char str[]="Hi! my Name is Jomar35leanogmail 09yeah baby to the 8";
	
	textFilter(str);
	}
	
	void textFilter(char str[]){
		char ch,x;
		for(x=0; str[x] != '\0'; x++){
			ch = str[x];
			if(isdigit(ch) != 0 || ispunct(ch) !=0){
				str[x] = ' ';
			}else{
				str[x] = tolower(ch);
			}
		}
	}
