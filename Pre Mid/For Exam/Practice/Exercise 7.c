#include<stdio.h>

	int getNumFromStr(char num[]);
	void main(){
		int x;
		char num[]= "2A50!0";
		x = getNumFromStr(num);
		printf("%d", x);
	}
	
	int getNumFromStr(char num[]){
		int retval=0, x;
		char ch;
		
		for(x=0; num[x] != '\0'; x++){
			if(isdigit(num[x]) !=0 ){
				ch = num[x];
				retval = retval * 10 + (ch - '0');
			}
		}
		return retval;
	}
