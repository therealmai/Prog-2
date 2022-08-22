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
	
	
	indexRecord* newList(personList List){
		int x;
		indexRecord * retRec;
		indexRecord rec;
		indexRecord dummy = {"XXXXXX", -1};
		
		retRec = (indexRecord*) calloc(List.ctr+1,sizeof(indexRecord));
		for(x=0 ; x < List.ctr; x++){
			strcpy(rec.ndxID, List.people[x].ID);
			rec.ndxPos = x;
			retRec[x] = rec;
		}
		retRec[List.ctr] = dummmy;
		return retRec;
	}
	
	
