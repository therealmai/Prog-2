#include <stdio.h>
//to use 'textcolor()'
#include <conio.h>
#include<conio2.h>


int main()
{
	// set the color of text
	textcolor(BLUE);
	// message
	cprintf("Color of text is BLUE\n\n");

	// set blinking color
	textcolor(GREEN+BLINK);
	// message
	cprintf("\nThis is BLINKING text");

	getch();
	
	return 0;
}
