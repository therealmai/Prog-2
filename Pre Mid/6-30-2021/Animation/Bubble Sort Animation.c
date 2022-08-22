#include<stdio.h>
#include<conio2.h>
    void bubbleSort(int arr[],int size);
    void main(){
        int lives=1,x,y,num;
    		textcolor(GREEN);
            printf("Bubble Sort\n");
            int arr[6] = {6,5,4,3,2,1};
            textcolor(BLUE);
            printf("\nUnsorted Array\n");
            for(x=0; x<6; x++){
                printf("%d  ", arr[x]);
            }
            printf("\n\n");
            getch();
            clrscr();
            bubbleSort(arr, 6);    
    }
    
    void bubbleSort(int arr[], int size){
    	textcolor(LIGHTBLUE);
          int x, y,z,swap=1,i,temp;
        for(x=0; x<size-1; x++){
        	printf("Current Arrangement\n");
        	for(i=0;i<size;i++){
          	printf("%d  ", arr[i]);
		  }
        	textcolor(LIGHTBLUE);
        	printf("\n\nIteration no. %d\n", x+1);
            for(y=0;y<size-1; y++){
                if(arr[y] > arr[y+1]){
                	
                   temp = arr[y];
                   arr[y] = arr[y+1];
                   arr[y+1] = temp;
                   
                   textcolor(LIGHTBLUE);
                   for(z=0; z<6; z++){
                   	if(z == y){
                   		textcolor(RED);
                   		printf("%d  ", arr[z]);
                   		
					   }else if(z-1 == y){
					   	printf("%d  ", arr[z]);
					   }else{
					   	textcolor(LIGHTBLUE);
					   	printf("%d  ", arr[z]);
					   }
				   }
				   
				   textcolor(GREEN);
				   printf("Swap no.%d", swap++);
				   textcolor(LIGHTBLUE);
				   printf("\n");
				   getch();
				   clrscr();
					
                }
                
            }  
        }
        printf("Unsorted Array\n");
        printf("6  5  4  3  2  1\n\n");
        textcolor(RED);
        printf("The Sorted Array\n");
        for(x=0; x<6; x++){
                printf("%d  ", arr[x]);
            }
            textcolor(GREEN);
        printf("Total swaps: %d", swap-1);
        textcolor(WHITE);
    }
  
