#include<stdio.h>
	void trial(int* x);
	void main(){
		int x =5;
		trial(&x);
	}
	
	void trial(int* x){
		printf("%d", sizeof(x));
	}
