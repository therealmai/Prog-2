#include <stdio.h>
	
		union{
			struct{
				int number;
				float decimal[2];
			}b;
			
			struct {
				double be[2];
				char ce;
			}c;
		}d;
	
	void main(){
	printf("%d", sizeof(d));
	}
