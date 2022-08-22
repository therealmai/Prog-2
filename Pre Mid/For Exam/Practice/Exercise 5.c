#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
	void main(){
		char arr[]="HELLO";
		char arr1[] = "GOOD DAY";
		strcpy(arr+2, arr1+5);
		printf("%s", arr);
	}
