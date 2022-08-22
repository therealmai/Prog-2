#include<stdio.h>

	void compute(int *A, int B);
	void main(){
		int A= 7;
		compute(&A, 3);
	}
	
	void compute(int *A, int B){
		*A = (*A > B) ? *A * B : *A + B;
		
		printf("%d", *A);
	}
