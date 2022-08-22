#include<stdio.h>
void displayUniqueArr(int arr[],int size);
void main(){
    int arr[]={1,1,2,3,4,4};
    int size=6;
    displayUniqueArr(arr,size);
}

void displayUniqueArr(int arr[],int size){
int a,b,count=0;
    for(a=0,b=0;a<size;b++){
if(b==size){
if(count>1||b==size){
                printf("%d",arr[a]);
            b=0,count=0,a++;
        }
        if(arr[a]==arr[b])
        count++;
    }
}
