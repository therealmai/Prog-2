#include<stdio.h>
#include<string.h>

	void main(){
		char str[30] = "GOOD ";
		char str2[] = "  MORNING BABY";
		
		memcpy(str+4, str2+9, 5*sizeof(char));
		printf("%s", str);
	}
