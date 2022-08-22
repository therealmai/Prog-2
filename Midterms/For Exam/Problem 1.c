#include <stdio.h>
#define Max 60

	typedef struct Addr{
		int Housenum;
		char StreetName[20];
		char Barrio[20];
		char City[15];
		int Zipcode;
	}Address;
	
	typedef struct name{
		char Lname[16];
		char Fname[24];
		char MI;
	}Nametype;
	
	typedef struct stud{
		char ID[10];
		Nametype pName;
		int age;
		char gender; /*'F' or 'M'*/
		Address Addr;
		float salary;
	}PersonRec;
	
	typedef struct{
		PersonRec people[Max];
		int ctr; /*Holds the actual student count*/
	}personList;
	
	typedef{
	char ndxID[10];
	int ndxPos;
	}indexRecord;
	
	personList getMale(personList stud){
		int x,y;
		personList newRec;
		newRec.ctr = 0
		for(x=0,y=0; x<ctr; x++){
			if(stud.people[x].gender == 'M' && stud.people[x].salary <= 45500){
				newRec.people[newRec.ctr] = stud.people[x];
				newRec.ctr++; 	
			}
		}
		return newRec;
	}
