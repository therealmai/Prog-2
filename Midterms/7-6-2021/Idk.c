#include<stdio.h>
#include<stdlib.h>

  typedef struct adventurer{
    char *adv_id;
    char adv_name[10];
    int adv_age;
    float adv_atk;
    }ADV;

int main() {
  
  ADV a1= {"001", "Alex", 10, 98.3};
  ADV arr[] = {"A2C", "Simon", 14, 45,
               "FTW", "Martha", 12, 10,
               "LOL", "Kaloy", 19, 1000};
   printf("%d",sizeof(ADV));
  return 0;
}
