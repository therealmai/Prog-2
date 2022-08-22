#include<stdio.h>
#include<string.h>

    void main(){
   char str1[32]="HELLO GOODMORNING";
  char str2[32]="HELLO goodMORNING";
  strrev(str1);
  printf("%s", str1);
  return 0;
}

