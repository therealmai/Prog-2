#include<stdio.h>

	boolean retBool(numStatList* L){
		int x;
		int temp=0;
		boolean retval = FALSE;
		for(x=0; L->text[x] != '\0'; x++){
			if(isdigit(L->text[x]) != 0){
				temp++;
			for(x=0; L->text[x] != '\0' && isdigit(L->text[x])!=0; x++){}
			}
		}
		(temp == L->numCount)? retval = TRUE : L->numCount = temp;
		return retval;  
	}

	

