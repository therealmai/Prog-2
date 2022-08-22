#include <stdio.h>
#include<string.h>
#include <conio2.h>
#include "extraFile.c"
#include <time.h>
#include <stdlib.h>
#include <math.h>

//   typedef struct{
//   	char itemName[16];
//   	char description[30];
//   	int effect;
//   	float cost;
//   }shop;
   
    typedef struct{
    	char bagName[50];
    	char description[50];
    	float powerUp;
    	int count;
	}infoBag;
	
    typedef struct bag{
    	infoBag items;
    	struct bag* next;
	}*bag;
	
    typedef struct{
        int HP;
        int damage;
        float money;
		char name[30];
		bag backpack;	
    }hero;
    
    typedef struct chara{
    	hero player;
    	struct character* next;
	}chara;
	
    void titleScreen();
    void storyTime();
  	void displayCharacter(hero player);
    void chooseBuff(hero* player);
    void buyShop(hero* player);
    void startFight(hero* player,chara* enemy, int*life);
    int attack(hero*player, chara*enemy);
    int checkWinner(char you, char computer);
    void displayBag(hero* player);
    void useItems(hero* player, int y);
    int useFlag =0,bossFlag=0;
    
    void main(){
    	int game = 1;
    	while(game != 0){
	    int num,x,y=0;
	    char catcher;
	    int life = 1;
	    titleScreen();
	    storyTime();
	   
	    hero player = {100,40,100.00};
	    player.backpack = (bag)malloc(sizeof(struct bag));
        strcpy(player.backpack->items.bagName,"Metal Claw");
        strcpy(player.backpack->items.description,"Damage Amplified(+%%20 Damage)");
        player.backpack->items.count = 2;
        player.backpack->items.powerUp = 1.2;
        player.backpack->next = (bag)malloc(sizeof(struct bag));
        strcpy(player.backpack->next->items.bagName,"Electrolyte Drink");
        strcpy(player.backpack->next->items.description,"Healing Potion (+50 HP)");
        player.backpack->next->items.count = 2;
        player.backpack->next->items.powerUp = 50;
        player.backpack->next->next = NULL;
	    chara enemy;
	    enemy.player.damage = 60; 
		enemy.player.HP = 200;
		strcpy(enemy.player.name,"Father's Legendary Rooster'");
	    printf("Enter the name of your rooster: ");
	    scanf("%s",player.name);
	    clrscr();
	    displayCharacter(player);
	    
	    chooseBuff(&player);
		 while(life > 0){
	     startFight(&player,&enemy,&life);
	    	clrscr();
			 if(life == 0){
				break;
				bossFlag = 0;
			}else{
				bossFlag=1;
				break;
			}
		if(bossFlag == 1){
			displayVictory();
			getch();
			clrscr();
		}
		
		}
		
		displayGameOver();
		getch();
		clrscr();
		gotoxy(47,10);
    	printf("Do you want to play Again?\n");
    	gotoxy(45,11);
		printf("Press 1 to restart else Press 0 -> ");
		scanf("%d", &game);
		clrscr();
    }	
}

    
 
    void displayCharacter(hero player){
    	chickenDisplayCharacter();
    	gotoxy(52,12);
    	printf("Name->%s\n", player.name);
    	gotoxy(53,13);
    	printf("HP->%d\n", player.HP);
    	gotoxy(51,14);
    	printf("Damage->%d\n", player.damage);
    	gotoxy(44,15);
    	printf("Press any key to continue-> ");
    	getch();
    	clrscr();
	}
    
    void chooseBuff(hero *player){
    	int catcher,x=player->damage,y=player->HP;
    	printf("Pick your buff\n");
    	printf("\nPress 1 = Chick Steroids -> Damage Increase(+%%50 Damage)");
    	printf("\nPress 2 = Chick Booster -> Health Increase (+%%50 Health)\n-> ");
    	scanf("%d", &catcher);
    	switch(catcher){
    		case 1: player->damage *=1.5; printf("Damage Increase from %d -> %d", x,player->damage) ;break;
    		case 2: player->HP *=1.5; printf("Health Increase from %d -> %d", y,player->HP); break;
		}
		printf("\n\nYou also have the following items that you can only use once after every match\n");
		printf("\nMetal Claw = Damage Amplified (+20%% Damage)\n");
		printf("Electrolyte Drink = Healing Potion (+50 HP)\n");
		printf("Press any key to continue...");
		getch();
		clrscr();
	}
		
		void startFight(hero* player, chara* enemy, int* life){
		char catcher;
		float newMoney=0;
		int retval=0;
	  	while(player->HP > 0 && enemy->player.HP > 0){
	  		displayRound();
	  		versusScreen();
	  		displayEnemy();
	  		gotoxy(69,4);
	  		printf("Name-> %s",enemy->player.name);
	  		gotoxy(69,5);
	  		printf("HP-> %d",enemy->player.HP);
	  		gotoxy(69,6);
	  		printf("Damage-> %d",enemy->player.damage);
	  		chickenDisplayFight();
	  		gotoxy(20,22);
	  		printf("Name-> %s", player->name);
	  		gotoxy(20,23);
	  		printf("HP-> %d", player->HP);
	  		gotoxy(20,24);
	  		printf("Damage-> %d", player->damage);
	  		gotoxy(35,22);
	  		printf("Type A to attack\n");
	  		gotoxy(35,23);
	  		printf("Type U to use an item\n");
	  		gotoxy(35,24);
	  		printf("-> ");
	  		scanf("%c", &catcher);
	  		switch(catcher){
	  			case 'A' : retval = attack(player,enemy);break;
	  			case 'a' : retval = attack(player,enemy);break;
				case 'U' : useFlag=1; displayBag(player);break;
				case 'u' : useFlag=1; displayBag(player);break;
			  }
			  clrscr();
		  }
		  if(retval == 1){
		  	displayDaog();
			*life = 1;
			gotoxy(44,17);
		  	printf("Press any Key to Continue -> ");
		  	getch();
		  }else if (retval == -1){
		  	displayBihag();
		  	*life = 0;
		  	gotoxy(46,16);
		  	printf("Press any Key to Continue -> ");
		  	getch();
		  }
	  }



	int attack(hero* player, chara*enemy){
		int n,result,retval;
		char you, computer,catcher1, catcher2;
		char str1[40], str2[40];
		srand(time(NULL));
		
		n = rand()%100; 
		if(n<33){
			computer = 'c';
		}else if(n > 33 && n < 66){
			computer = 'p';
		}else{
			computer = 'w';
		}
		gotoxy(35,26);
		printf("Enter c for Claw, p for Peck,and w for Wing Attack-> ");
		fflush(stdin);scanf("%c",&you);
		
		catcher1= computer;
		catcher2 = you;
		switch (catcher1){
			case 'c': strcpy(str1,"Claw");break;
			case 'p': strcpy(str1,"Peck");break;
			case 'w': strcpy(str1,"Wing Attack");break;
		}
		if(catcher2 == 'c' || catcher2 == 'C'){
			strcpy(str2,"Claw");
		}else if(catcher2 == 'p' || catcher2 == 'P'){
			strcpy(str2,"Peck");
		}else{
			strcpy(str2,"Wing Attack");
		}
		
		result = checkWinner(you, computer);
		switch (result){
			case -1: gotoxy(20,28);printf("You and the enemy picked the same skill (No Damage)");break;
			case 1: gotoxy(20,28); printf("Your enemy tried to use [%s] but your skill [%s] is stronger. Enemy takes damage",str1,str2);enemy->player.HP -= (player)->damage;break;
			case 0:gotoxy(20,28); printf("You tried to use [%s] but your enemy's [%s] is stronger. You take damage",str2,str1);(player)->HP -= (enemy)->player.damage; break;
		}
		getch();
		fflush(stdin);
		if((enemy)->player.HP <= 0){
			retval = 1;
		}else if((player)->HP <= 0){
			retval = -1;
		}
		return retval;	
	}
	

	
	void displayBag(hero* player){
		clrscr();
		bag trav;
		int num=1,catcher,ctr=0;
		for(trav = player->backpack; trav != NULL; trav = trav->next){
			if(trav->items.count > 0){
			ctr++;
		    }
		}
		printf("Type %d to use %s : x%d\n", num, player->backpack->items.bagName, player->backpack->items.count);
		printf("Type %d to use %s : x%d\n", num+1, player->backpack->next->items.bagName, player->backpack->next->items.count);
		if(ctr == 0){
			printf("You have no items left\n");
		}else{
		printf("-> ");
		scanf("%d", &catcher);
		useItems(player, catcher);
		}
		printf("Press any key to continue ->");
		getch();
		clrscr();
	}
		
	
	
	void useItems(hero* player, int y){
				switch(y){
					case 1: player->damage *= player->backpack->items.powerUp;player->backpack->items.count--;break;		
					case 2: player->HP += player->backpack->next->items.powerUp;player->backpack->next->items.count--;break;
					default : printf("Wrong Input");
				}	
			
		}
	
        


	


    

