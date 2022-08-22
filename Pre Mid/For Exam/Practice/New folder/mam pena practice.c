#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

	int detectType(char arr[]);
	void main(){
		char arr[] ="g&14^ A@";
		detectType(arr);
	}
	int detectType(char arr[]){
		int x;
		int* newArr;
		newArr = (int*) calloc(4,sizeof(int));
		
		for(x=0; arr[x] != '\0'; x++){
			if(isalpha(arr[x])!= 0){
				newArr[0]++;
			}else if(isdigit(arr[x]) != 0){
				newArr[1]++;
			}else if(ispunct(arr[x]) !=0 ){
				newArr[2]++;
			}else{
				newArr[3]++;
			}
		}
		
		return newArr;
	}
