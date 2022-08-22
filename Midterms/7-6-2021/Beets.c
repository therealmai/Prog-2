#include <stdio.h>
#define size 2
#include<string.h>
#include <conio2.h>

    typedef struct{
        char name[30];
        char element[30];
    }information;
    
    typedef struct{
        information info;
        char weapon[20];
        int HP;
        int power;
    }character;
    
    void display(character c[]);
    void attack(character c[]);
    void main(){
         character c[size]; 
	     int num,x;
	    for(x=0 ; x<size; x++){
    	printf("Enter Character %d name: ", x+1);
    	scanf("%s", &c[x].info.name);
    	printf("\n1.Earth, 2.Fire, 3.Water, 4.Air");
    	printf("\nChoose what Element ");
    	scanf("%d", &num);
    	switch (num){
    		case 1 : strcpy(c[x].info.element, "Earth"); break;
    		case 2 : strcpy(c[x].info.element, "Fire"); break;
    		case 3 : strcpy(c[x].info.element, "Water"); break;
    		case 4 : strcpy(c[x].info.element, "Air"); break;
		}
		printf("\n1.Broadsword, 2. Ogre Axe, 3. Wizard Staff, 4. Grove Bow");
		printf("\nChoose what weapon ");
		scanf("%d", &num);
		switch (num){
			case 1 : strcpy(c[x].weapon, "Broadsword"); break;
    		case 2 : strcpy(c[x].weapon, "Ogre Axe"); break;
    		case 3 : strcpy(c[x].weapon, "Wizard Staff"); break;
    		case 4 : strcpy(c[x].weapon, "Grove Bow"); break;
		}
		printf("\nEnter HP ");
		scanf("%d", &c[x].HP);
		printf("\nEnter Power ");
		scanf("%d", &c[x].power);
		printf("\n");
		clrscr();
		}
		display(c);
		attack(c);
    }
    
    void display(character c[]){
    	textcolor(WHITE);
    	printf("Character 1\t\tCharacter2\n\n");
    	textcolor(LIGHTBLUE);
    	textcolor(WHITE);
    	printf("\t    NAME\t\n");
    	textcolor(LIGHTBLUE);
    	printf("%s \t\t\t %s\n", c[0].info.name, c[1].info.name);
    	textcolor(WHITE);
    	printf("\t    ELEMENT\t\n");
    	textcolor(LIGHTBLUE);
    	printf("%s \t\t\t %s\n", c[0].info.element, c[1].info.element);
    	textcolor(WHITE);
    	printf("\t    WEAPON\t\n");
    	textcolor(LIGHTBLUE);
    	printf("%s \t\t %s\n", c[0].weapon, c[1].weapon);
    	textcolor(WHITE);
    	printf("\t     HP\t\n");
    	textcolor(LIGHTBLUE);
    	printf("%d \t\t\t %d\n", c[0].HP, c[1].HP);
    	textcolor(WHITE);
    	printf("\t    POWER\t\n");
    	textcolor(LIGHTBLUE);
    	printf("%d \t\t\t %d\n\n", c[0].power, c[1].power);
    	textcolor(WHITE);
    	printf("Attacking Character 2....\n\n");
    	printf("Press any key to start ");
    	getch();
    	clrscr();
	}
	
	void attack(character c[]){
		int life,count=0,ctr=1;
			while(ctr != 0){
			while(c[1].HP >=0 && c[0].HP >=0){
			
			life = c[1].HP;
			textcolor(RED);
			printf("%s's power : %d",c[0].info.name, c[0].power);
			textcolor(WHITE);
			printf(" - ");
			textcolor(LIGHTBLUE);
			printf("%s's HP: %d\n", c[1].info.name, c[1].HP);
			c[1].HP = c[1].HP - c[0].power;
			getch();
			clrscr();
			textcolor(WHITE);
			printf("%s's HP now %d\n", c[1].info.name, c[1].HP);
			if(c[1].HP <= 0){
				printf("\n%s is dead", c[1].info.name);
				break;
			}else if (c[0].HP <=0){
				printf("\n%s is dead", c[1].info.name);
				break;
			}
			clrscr();
		}
	}	
}
