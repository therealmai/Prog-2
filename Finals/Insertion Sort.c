#include<stdio.h>
	void main(){
		int x,y,temp;
		 char arr[] = {'c','C','2','3'};  /*Change*/
		for(x=1; x<4;x++){ /*Change*/
			temp= arr[x];
			y= x-1;
			
			while((temp<arr[y]) &&(y>=0)){
				arr[y+1] = arr[y];
				y-=1;
			}
			arr[y+1] = temp;
		}
		for(x=0; x<4; x++){
			printf("%c", arr[x]);
		}
	}
