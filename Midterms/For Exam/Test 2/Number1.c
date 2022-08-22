#include <stdio.h>
#define Max 60

	typedef struct Addr{
		int HouseNum;
		char StreetName[20];
		char Barrio[20];
		char City[15];
		int Zipcode;
	}Address;
	
	typedef struct name{
		char Fname[24];
		char MI;
		char Lname[16];
	}Nametype;
	
	typedef struct stud{
		int ID;
		Nametype pName;
		int age;
		char gender;
		Address Addr;
		float salary;
	}PersonRec;




	void main(){
		PersonRec stud[Max];
		stud[59].pName.MI= 'M';
		printf("%c", stud[59].pName.MI);
	}
