#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int findChar(char msg[]);
    void main(){
        char msg[]="H/l49 6Gor-ing";
        int * catcher;
        int x;
        catcher=findChar(msg);
        for(x=0; x<4; x++){
            printf("%d ", catcher[x]);
        }
    }
    
        int findChar(char msg[]){
            int x;
            int* arr;
            arr = (int *) calloc(4,sizeof(int));
            for(x=0; msg[x]!= '\0'; x++){
                if(isalpha(msg[x]) !=0 ){
                    arr[0]++;
                }else if(isdigit(msg[x]) != 0 ){
                    arr[1]++;
                }else if(ispunct(msg[x]) != 0){
                    arr[2]++;
                }else{
                  arr[3]++;
            } 
        }
        return arr;
      }
