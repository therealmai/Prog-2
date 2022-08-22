#include <stdio.h>

 	int findEven(int num[], int size, int X);
	void main(){
		int num[] = {1,2,3,4,5,6,7,8};
		int size = 8;
		int x = 10;
		printf("%d",findEven(num, size, x));
	}
	
	int findEven(int num[], int size, int X){
		int x, even = 0;
		for(x=0; x<size; x++){
			if(num[x] == X){
				break;
			}
		}
		if(x != size){
			return x;
		}else{
		return -1;
	}
}
