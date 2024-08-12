#include <stdio.h>
#include <string.h>

void center_text(int width, char *text)
{
    int txt_len = 0;
    // To split text string into two parts: first part is located at start1 position.
    // And 2nd part is located at start2 position.
    // ||-------------|------------||
    // ||      start1   start2     ||
    int start1 = 0;
    int half = width/2;
    int i;
    //int start2 = half;

    txt_len = strlen(text);
    start1 = half - (txt_len/2);
    for(i=0; i<width; i++)
        putchar('-');
    printf("\n");

    for(i=0; i<start1; i++)
        putchar(' ');
    printf("%s\n", text);
	/*
	   - write this function to complete the challenge
	   - this code won't run until the function is
	   written
	*/
}

int main()
{
	/* some sample text to center */
	char *title[] = {
	   "March Sales",
	   "My First Project",
	   "Centering output is so much fun!",
	   "This title is very long, just to see whether the code can handle such a long title"
	};
	int x;

	/* output each of the strings, centered */
	for( x=0; x<4; x++ )
	{
		/* assume the screen width to be 80 characters */
		center_text( 80, title[x] );
	}

	return(0);
}

