#include <stdio.h>
#define size 2
#include<string.h>
#include <conio2.h>
#include "titlescreen.c"

    typedef struct{
        char name[30];
        char element[30];
    }information;
    
    typedef struct{
    	char bagName[30];
    	char description[100];
    	int powerUp;
	}infoBag;
	
    typedef struct{
    	infoBag items[3];
    	int count;
	}bag;
	
    typedef struct{
        information info;
        char weapon[20];
		bag backpack;
        int HP;
        int power;
    }hero;
    
    typedef struct{
    	hero player[size];
	}character;
	
	
    void titleScreen();
    void storyTime();
  	void displayHero(character c);
    void chooseWeapon(character* c);
    char startGame(character c);
    void fightNow(character* c);
    void tryLang(character *c);
    void displaySprite();
    
    void main(){
         character c; 
	     int num,x;
	     char catcher;
	     titleScreen();
	     clrscr();
	     storyTime();
	     
	    for(x=0 ; x<size; x++){
    	printf("Enter Character %d name: ", x+1);
    	scanf("%s", &c.player[x].info.name);
    	printf("\n1.Samurai, 2.Viking, 3.Knight");
    	printf("\nChoose what Element ");
    	scanf("%d", &num);
    	switch (num){
    		case 1 : strcpy(c.player[x].info.element, "Earth"); break;
    		case 2 : strcpy(c.player[x].info.element, "Fire"); break;
    		case 3 : strcpy(c.player[x].info.element, "Water"); break;
    		case 4 : strcpy(c.player[x].info.element, "Air"); break;
		}
		clrscr();
		}
		c.player[0].HP = 1500;
		c.player[1].HP = 1500;
		c.player[0].power = 200;
		c.player[1].power = 200;
		chooseWeapon(&c);
		displayHero(c);
		fightNow(&c);
	
    }
    
    void chooseWeapon(character* c){
    	int x,y,num;
    	for(x=0; x<size; x++){
    		for(y=0; y<2; y++){
    			c->player[x].backpack.count = 0;
    			printf("For %s's bag\n",c->player[x].info.name);
    			printf("Choose items to store in bag\n");
    			printf("Can carry only 2 items\n");
    			printf("All of the items can be used once only\n");
    			printf("\n1.Broadsword -> Adds damage(+50 Power)\n2.Healing Salve -> Heals your hero(+150 HP)\n3.Wizard Staff -> Adds to your elemental power(+8 Percent Elemental Power)\n");
    			printf("Choose 1 at a time\n");
				scanf("%d", &num);
				switch (num){
				case 1 : strcpy(c->player[x].backpack.items[y].bagName, "Broadsword"); strcpy(c->player[x].backpack.items[y].description, "Adds damage(+50 Power)"); c->player[x].backpack.items[y].powerUp=50 ; c->player[x].backpack.count; break;
    			case 2 : strcpy(c->player[x].backpack.items[y].bagName, "Healing Salve");strcpy(c->player[x].backpack.items[y].description,"Heals your hero(+150 HP)"); c->player[x].backpack.items[y].powerUp=150; c->player[x].backpack.count;break;
    			case 3 : strcpy(c->player[x].backpack.items[y].bagName, "Wizard Staff");strcpy(c->player[x].backpack.items[y].description,"Adds to your elemental power(+5% Elemental Power)");c->player[x].backpack.items[y].powerUp=8; c->player[x].backpack.count;break;
				}
    			clrscr();
	 		}
		}
	}
	
	void displayHero(character c){
		int x,y;
		for(x=0; x<size; x++){
			textcolor(WHITE);
			printf("INFORMATION for Character: %s\n\n",c.player[x].info.name);
			printf("Name-> ");
			textcolor(LIGHTBLUE);
			printf("%s", c.player[x].info.name);
			textcolor(WHITE);
			printf("\nElement-> ");
			textcolor(LIGHTBLUE);
			printf("%s", c.player[x].info.element);
			textcolor(WHITE);
			printf("\nHP-> ");
			textcolor(LIGHTBLUE);
			printf("%d (DEFAULT)", c.player[x].HP);
			textcolor(WHITE);
			printf("\nPower-> ");
			textcolor(LIGHTBLUE);
			printf("%d (DEFAULT)", c.player[x].power);
			textcolor(WHITE);
			printf("\n\nItems in the Bag\n");
			for(y=0;y<2; y++){
				textcolor(RED);
				printf("%d.%s -> %s\n",y+1,c.player[x].backpack.items[y].bagName,c.player[x].backpack.items[y].description);
			}
			textcolor(WHITE);
			printf("\nPress any key to continue ");
			getch();
			clrscr();
		}
	}
	
	
	void fightNow(character* c){
	
	displaySprite();
		
	}
	
	void tryLang(character *c){
		printf("%d", c->player[0].HP);
	}
	
	void displaySprite(){
		
	}
	


    

