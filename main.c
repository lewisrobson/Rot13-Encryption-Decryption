#include<stdio.h>
#include<strings.h>

char convert(char *text)
{
//printf("inside convert function: I was passed %s \n", text);

switch(*text)
{
	case 'a':
	case 'A':
	*text = 'n';
	break;

	case 'b':
	case 'B':
	*text = 'o';
	break;

	case 'c':
	case 'C':
	*text = 'p';
	break;

	case 'd':
	case 'D':
	*text = 'q';
	break;

	case 'e':
	case 'E':
	*text = 'r';
	break;

	case 'f':
	case 'F':
	*text = 's';
	break;

	case 'g':
	case 'G':
	*text = 't';
	break;

	case 'h':
	case 'H':
	*text = 'u';
	break;

	case 'i':
	case 'I':
	*text = 'v';
	break;

	case 'j':
	case 'J':
	*text = 'w';
	break;

	case 'k':
	case 'K':
	*text = 'x';
	break;

	case 'l':
	case 'L':
	*text = 'y';
	break;

	case 'm':
	case 'M':
	*text = 'z';
	break;

	case 'n':
	case 'N':
	*text = 'a';
	break;

	case 'o':
	case 'O':
	*text = 'b';
	break;

	case 'p':
	case 'P':
	*text = 'c';
	break;

	case 'q':
	case 'Q':
	*text = 'd';
	break;

	case 'r':
	case 'R':
	*text = 'e';
	break;

	case 's':
	case 'S':
	*text = 'f';
	break;

	case 't':
	case 'T':
	*text = 'g';
	break;

	case 'u':
	case 'U':
	*text = 'h';
	break;

	case 'v':
	case 'V':
	*text = 'i';
	break;

	case 'w':
	case 'W':
	*text = 'j';
	break;

	case 'x':
	case 'X':
	*text = 'k';
	break;

	case 'y':
	case 'Y':
	*text = 'l';
	break;

	case 'z':
	case 'Z':
	*text = 'm';
	break;

}

return *text;
}



int main()
{
	char text [100];
	printf("enter text: ");
	scanf("%s", text);
	printf("your text is: %s\n", text);

	// string length
	int length = strlen(text);
	printf("string length is %d\n\n\n", length);

	// loop for each item of array
	int i;
	for (i=0; i<length; i++)
	{
	//printf("item %d is %c\n", i, text[i]); // item 0 is a
	char in = text[i];	//in = a
			//printf("before function I am %c\n", in);
	convert(&in);	//pass a to convert
			//printf("after function I am %c\n\n\n", in);
	printf("%c", in);
	}
	printf("\n");
	return 0;
}

