#include <stdio.h>
#include <conio2.h>
#include <conio.h>
	
	void bubbleSort(int arr[], int size);
	void main(){
		int life=1,z=5,j=43;
		while(life != 0){
		gotoxy(50,1);
		int arr[6], x;
		textbackground(GREEN);
		printf("BUBBLE SORT\n\n");
		gotoxy(43,3);
		printf("Enter 6 integers to sort\n\n");
		for(x=0; x<6; x++){
			gotoxy(50,z++);
			printf("Number %d: ", x+1);
			scanf("%d", &arr[x]);
		}
		textbackground(BLACK);
		clrscr();
		
		textbackground(BLUE);
		printf("Unsorted Array\n");
		for(x=0;x<6; x++){
			gotoxy(j+1, 2);
			printf("%d ", arr[x]);
		}
		bubbleSort(arr, 6);
		textbackground(RED);
		printf("\n\nSorted Array\n");
		for(x=0; x<6;x++){
			printf("%d ", arr[x]);
		}
		textbackground(WHITE);
		textcolor(BLACK);
		cprintf("\n\nPress 1 to try again or 0 to exit\n");
		scanf("%d", &life);
		textbackground(BLACK);
		z=5;
		textcolor(WHITE);
		clrscr();
	}
	}
	
	void bubbleSort(int arr[], int size){
        int x, y, temp;
        for(x=0; x<size-1; x++){
            for(y=0;y<size-1; y++){
                if(arr[y] > arr[y+1]){
                    temp = arr[y];
                    arr[y] =arr[y+1];
                    arr[y+1] = temp;
                }
            }
        }
    }	
