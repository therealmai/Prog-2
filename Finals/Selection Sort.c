#include<stdio.h>
		void main(){
			char arr[] = {'c','C','2','3'};  /*Change*/
			int x,y,min, temp;
			
			for(y=0; y<4;y++){	/*Change*/
				min = y;
				for(x=y+1; x<4; x++){	/*Change*/
					if(arr[x] < arr[min]){
						min = x;
					}
				}
				if(min != y){
					temp = arr[y];
					arr[y] = arr[min];
					arr[min] = temp;
				}
			}
			
			
			for(x=0; x< 4; x++){	/*Change Print*/
			printf("%c", arr[x]);	
			}
			
		}
