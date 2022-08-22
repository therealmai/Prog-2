#include<stdio.h>
#include<conio2.h>

	void insertionSort(int arr[], int size);	
	void main(){
		int arr[6] = {6,5,4,3,2,1};
		int x;
		printf("INSERTION SORT\n\n");
		for(x=0; x<6; x++){
			printf("%d  ", arr[x]);
		}
		getch();
		clrscr();
		insertionSort(arr,6);
	}
	
	void insertionSort(int arr[], int size){
		int x,y,z,temp,iteration=1, value=0;
		
		for(x=1; x<size;x++,iteration++){
			textcolor(LIGHTBLUE);
			printf("Iteration No.%d\n", iteration);
			
			temp= arr[x];
			y= x-1;
			while((temp<arr[y]) &&(y>=0)){
				arr[y+1] = arr[y];
				y-=1;
				value++;
			printf("\n");		
			arr[y+1] = temp;
			
			for(z=0; z<size; z++){
				textcolor(LIGHTBLUE);
				printf("%d  ", arr[z]);	
			}
			textcolor(YELLOW);
			printf("Swap: %d", value);
				}	
			getch();
			clrscr();
		}
		textcolor(RED);
		printf("UNSORTED ARRAY\n");
		printf("6  5  4  3  2  1\n\n");
		textcolor(LIGHTBLUE);
		printf("SORTED ARRAY\n");
		for(x=0; x<size; x++){
			printf("%d  ", arr[x]);
		} 
		textcolor(YELLOW);
		printf("SWAPS : %d", value);
		textcolor(WHITE);
		
	}
