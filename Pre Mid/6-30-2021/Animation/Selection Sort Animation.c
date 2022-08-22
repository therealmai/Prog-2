#include<stdio.h>
#include<conio2.h>
    void selectionSort(int arr[],int size);
    void main(){
        int lives=1,x,y,num;
    		textcolor(GREEN);
            printf("Selection Sort\n");
            int arr[6] = {5,4,2,3,1,6};
            textcolor(BLUE);
            printf("\nUnsorted Array\n");
            for(x=0; x<6; x++){
                printf("%d  ", arr[x]);
            }
            printf("\n\n");
            getch();
            clrscr();
            selectionSort(arr, 6);    
    }
    
    void selectionSort(int arr[],int size){
    		textcolor(LIGHTBLUE);
    		int x,y,min,z,temp,n,ctr ,swap =0,c;
			for(y=0,ctr=0; y<size-1;y++,ctr++){
				min = y;
				n=min;
			    printf("Iteration No. %d  Swaps: %d\n", ctr+1, swap);
				for(x=y+1; x<size; x++){
			
				for(z=0; z<size;z++){
					if(z == min){
					textcolor(RED);
					printf("%d  " ,arr[min]);
					textcolor(LIGHTBLUE);
					}else if(z == x){
					textcolor(GREEN);
					printf("%d  ", arr[x]);
					textcolor(LIGHTBLUE);
					}else if(z==y){
						textcolor(YELLOW);
						printf("%d  ", arr[z]);
					}else{
						textcolor(LIGHTBLUE);
						printf("%d  ", arr[z]);
					}		
				}
					
					if(arr[x] < arr[min]){
						min = x;
					}	
					
				printf("\n");	
				}
				textcolor(WHITE);
					printf("\nLEGEND:\n");
					textcolor(YELLOW);
					printf("INDEX ITERATION\n");
					textcolor(GREEN);
					printf("TRAVERSAL\n");
					textcolor(RED);
					printf("MINIMUM VALUE FOUND\n");
					textcolor(LIGHTBLUE);
				if(min != y){
					temp = arr[y];
					arr[y] = arr[min];
					arr[min] = temp;
					swap++;
				}
				
				getch();
				clrscr();
			}
			textcolor(RED);
			printf("Unsorted Array\n");
			printf("5  4  2  3  1  6\n\n");
			textcolor(LIGHTBLUE);
			printf("Sorted Array\n");
			for(x=0; x<size; x++){
				printf("%d  ", arr[x]);
				
			}
			textcolor(YELLOW);
			printf("  TOTAL SWAPS: %d", swap);
			textcolor(WHITE);
			
	}
