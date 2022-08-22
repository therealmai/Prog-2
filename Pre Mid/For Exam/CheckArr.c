#include<stdio.h>
#include<stdlib.h>
void insertArr(int *arr, int sizeArr, int num);

void main(){
	int arr[]={1,2,3,4};
	int arr2[4]={0,3,2};
	int arr3[4]={1,2,3,4};
	int a;
	/*
	int getArr = checkArr(arr, 5, 4);
	printf(" Result:%d",getArr);
	
	insertArr(arr2,sizeof(arr2),3);
	for(a=0;a<4;a++){
		printf("%d ",arr2[a]);
	}
	*/
	int b = deleteArr(arr3,4,1);
	for(a=0;a<b;a++){
		printf("%d ",arr3[a]);
	}
}

int checkArr(int arr[], int X, int num){
	int a;
	for(a=0;a<=num;a++){
	if(arr[a]==X){
				break;
			}
	}
		printf("a:%d num:%d X:%d",a,num,X);
		return (a<num)?a:-1;
}

void insertArr(int *arr, int sizeArr, int num){
	int a;
	if((num*sizeof(int))<sizeArr){
		scanf("%d",&a);
		arr[num]=a;
	}

}

int deleteArr(int *arr, int num, int X){
	int a;
	for(a=0;a<num;a++){
		if(arr[a]==X){
			while(a<num-1){
				arr[a]=arr[a+1];
				a++;
			}
			num--;
			break;
		}
	}
	return num;
}




