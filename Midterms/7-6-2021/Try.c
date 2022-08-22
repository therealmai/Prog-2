#include <stdio.h>

	enum boolean {
		false = 0,
		true = 1
	}b1;
	
	enum days {
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};
	
	void main(){
		
		enum days Day;
		Day = Sunday;
		printf("Day %d\n", Day);
		printf("Size of Day %d\n", sizeof(Day));
		
		printf("%d\n", sizeof(b1));
		b1=1;
		printf("%d", b1);
		
	}
