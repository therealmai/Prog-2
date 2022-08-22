#include<stdio.h>


    void countEvenOdd(int num[],int size);
    void main(){
        int x, size;
        printf("How many integers?");
        scanf("%d", &size);
          int num[size];
        for(x=0; x<size; x++){
            printf("Enter an integer:");
            scanf("%d, &num[x]");
            printf("\n");
        }
        countEvenOdd(num,size);
    }

    void countEvenOdd(int num[], int size){
        int x, even =0, odd=0;
        for(x=0; x<size; x++){
            if(num[x] %2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        printf("Even: %d  Odd: %d", even, odd);
    }
    
  
