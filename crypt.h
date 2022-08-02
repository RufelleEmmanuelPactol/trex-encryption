#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void gotoxy(short a, short b) //Custom gotoxy() function
{
    COORD coordinates; //Data type of co-ordinates
    coordinates.X = a; //Assign value to X- Co-ordinate
    coordinates.Y = b; //Assign value to Y Co-ordinate
 
SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 
}

/*
function guide for crpyt.h :
crypt.h is a header file made specifically for ELECTION program created by Rufelle Pactol, 2022.
as of version 1.0, crypt.h has four functions:

- void rnewline (char*)
	loops through a string and removes new line characters and turns them into "eoS" i.e.,'\0'

- int tamper(char*)
	it is a function for checking possible tampering with encrypted strings. It can detect if a string is a legitimate string encrypted using
	crypt.h or not. It returns 1 if the string is safe.

- void encrypt(char*)
	it is an encryption alogrithm, with variating results every time it is used. This is to limit security breaches.
	
	
- void decrypt(char*)
	it is a decryption algorithm and utilizes tamper() to check if a string is a legitimate string or not. 


as of version 1.0, these are the current weaknesses of crypt.h:
- does not encrypt special character properly
- it has a security vulnerability concerning the "string corrupted" if the hacker can time

*/




void rnewline (char * string)
{
	int length = strlen(string);
	for (int i=0; i<length; i++)
	{
		if (string[i]=='\n')
		{
			string[i] = '\0';
		//	printf("Removed newline\n");
		}
	}
}


int spchar (char * string)
{
	int length = strlen(string);
	length = length - 1;
//	printf("\t\tbroken at index %d\n", length);	
	for (int i=0; i<length; i++)
	{
		switch(*(string+i))
		{
		//	printf("\t\tbroken at index %d\n", i);	
			case '1':
				break;
				
			case '2':
				break;
				
			case '3':
				break;
				
			case '4':
				break;
				
			case '5':
				break;
				
			case '6':
				break;
				
			case '7':
				break;
				
			case '8':
				break;
				
			case '9':
				break;
				
			case '0':
				break;
				
			case 'a':
				break;
				
			case 'A':
				break;
				
			case 'b':
				break;
				
			case 'B':
				break;
				
			case 'c':
				break;
				
			case 'C':
				break;
				
			case 'd':
				break;
				
			case 'D':
				break;
				
			case 'e':
				break;
				
			case 'E':
				break;
				
			case 'f':
				break;
				
			case 'F':
				break;
				
			case 'g':
				break;
				
			case 'G':
				break;
				
			case 'h':
				break;
				
			case 'H':
				break;
				
			case 'i':
				break;
				
			case 'I':
				break;
				
			case 'j':
				break;
				
			case 'J':
				break;
				
			case 'k':
				break;
				
			case 'K':
				break;
				
			case 'l':
				break;
				
			case 'L':
				break;
				
			case 'm':
				break;
				
			case 'M':
				break;
				
			case 'n':
				break;
				
			case 'N':
				break;
				
			case 'o':
				break;
				
			case 'O':
				break;
				
			case 'p':
				break;
			
			case 'P':
				break;
			
			case 'q':
				break;
				
			case 'Q':
				break;
				
			case 'r':
				break;
				
			case 'R':
				break;
				
			case 's':
				break;
				
			case 'S':
				break;
				
			case 't':
				break;
				
			case 'T':
				break;
				
			case 'u':
				break;
				
			case 'U':
				break;
				
			case 'v':
				break;
				
			case 'V':
				break;
				
			case 'w':
				break;
				
			case 'W':
				break;
				
			case 'x':
				break;
				
			case 'X':
				break;
				
			case 'y':
				break;
				
			case 'Y':
				break;
				
			case 'z':
				break;
				
			case 'Z':
				break;
				
			case ' ':
				break;
				
			case '.':
				break;
				
			case 'ñ':
				break;
				
			case 'Ñ':
				break;
				
			case '\0':
				break;
			
			case '\n':
				break;
			return 1;
		}
		
	}
}











char random [] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I' ,'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int tamper(char * string);

void encrypt (char * string)
{
	srand(time(NULL));
	int length = strlen(string);
	char * tstring;
	tstring = (char*)malloc(sizeof(char)*10000);
	strcpy(tstring, string);
	int olength = (3*length)+4;
	for (int i = 0; i<olength; i++)
	{
		string[i] = random[rand()%60];
	//	printf("added %c\n", string[i]);
	}
	int fdegree, sdegree;
	do{
	string[0] = (rand()%10+66); // sets the first random structure to the first index
	string[olength - 1] = (rand()%10+70); //sets the second random structure to the last index
//	printf("index 0: %c\nindex last: %c\n", string[0], string[olength-1]);
	//printf("String in: %s\n", string);
	sdegree = string[0] - 66;
	}
	while (fdegree==sdegree||string[0]==string[olength-1]); // checks for hazards
	
	do {
	if (string[0]>string[olength-1])
	{
	//	printf("subtracting %c from %c\n", string[0], string[olength-1]);
		fdegree = string[0]-string[olength-1];
		fdegree = fdegree % 16;	
	}
	
	else 
	{
	//	printf("subtracting %c from %c\n", string[olength-1], string[0]);
		fdegree = string[olength-1] - string[0];
		fdegree = fdegree % 16;
	}
	}
	while (fdegree==sdegree);
//		printf("\nfdegree = %d\nsdegree = %d\n", fdegree, sdegree);
	
	
	char enc = (rand()%15)+65;
//	printf("\n enc = %c\n tenc = %c\n", enc, fdegree + enc);
	string[1] = enc;
	string[2] = fdegree + enc;
	
//	printf("the fdegree = %d\nthe sdegree is equal to %d\n", fdegree, sdegree);// fdegree, first shift, sdegree, second shift
	
	int base = 0;
	for (int i=4; i<olength; i+=3)
	{
//		printf("pass\n");
		if (tstring[base]==' ')
		{
		//	printf("searching for: %c and %c\n", 68+fdegree, 64+fdegree);
		//	printf("space detect\n");
			string[i] = 68+fdegree;
			string[i+1] = 64+fdegree;
			base = base+1;
			continue;
		}
	//	printf("safe\n");
		string[i] = tstring[base]+fdegree;
		string[i+1] = tstring[base]+sdegree;
		base = base + 1;
		string[olength] = '\0';

	}
	return;
}

void decrypt (char * string)
{
	int length = strlen(string);
	char * tstring;
	tstring = (char*)malloc(sizeof(char)*10000);
	strcpy(tstring, string);
	strcpy(string, "");
//	printf("\nString reset: %s\n", string);
	int flength = length - 4;
	flength = flength/3;
//	printf("\nlength = %d\nflength = %d\n", length, flength);
	int fdegree, sdegree;
	sdegree = tstring[0]-66;
//	printf("\nchecking: \n");
	if (tstring[0]>tstring[length-1])
	{
		//printf("big first subtracting %c from %c\nthis is %d-%d\n", tstring[0], tstring[length-1]), tstring[0], tstring[length-1];
		fdegree = tstring[0] - tstring[length-1];
		fdegree = fdegree % 16;
	}
	else
	{
		//printf("big last subtracting %c from %c\n", tstring[length-1], tstring[0]);
		fdegree = tstring[length-1] - tstring[0];
	//	printf("\ncheck one fdegree: %d\n", fdegree);
		fdegree = fdegree % 16;
	}
//	printf("\nfdegree = %d\nsdegree = %d\n", fdegree, sdegree);
	int base = 0;
	char * dec;
	dec = (char*)malloc(sizeof(char)*10000);
	for (int i=4; i<length; i+=3)
	{
		if (tstring[i]==68+fdegree&&tstring[i+1]==64+fdegree)
		{
			dec[base] = ' ';
			//printf("\nspace detected at decryption, found at index point %d", base);
			base++;
			continue;
		}
		else
		{
			dec[base] = tstring[i] - fdegree;
			char checker;
			//printf("\nChange to: %c at index %d\n", dec[base], base);
			checker = tstring[i+1] - sdegree;
		/*	if (checker!=dec[base])
			{
		//		printf("\nString corrupted...\n");
				return;
			}
			*/
		if (i==length-1)
		{
			dec[base+1] = '\0';
		}
		}
	//	printf("\npass");
		//string[i] = tstring[base]+fdegree;
		//string[i+1] = tstring[base]+sdegree;
		base = base + 1;
		continue;

	}
	strcpy(string, dec);
//	printf("\nFinished string: %s\n", string);
	
	return;
}

int tamper (char * string)
{

	int length = strlen(string);
	char tstring[length];
	int flength = length - 4;
	flength = flength/3;
	int fdegree, sdegree;
	sdegree = string[0]-66;
	strcpy(tstring, string);
	//printf("\nchecking: \n");
	if (string[0]>string[length-1])
	{
//	printf("big first subtracting %c from %c\nthis is %d-%d\n", tstring[0], tstring[length-1], tstring[0], tstring[length-1]);
		fdegree = string[0] - string[length-1];
		fdegree = fdegree % 16;
	}
	else
	{
//		printf("big last subtracting %c from %c\n", tstring[length-1], tstring[0]);
		fdegree = string[length-1] - string[0];
	//	printf("\ncheck one fdegree: %d\n", fdegree);
		fdegree = fdegree % 16;
	}
//	printf("\n the fdegree is %d", fdegree);
	int enc = string[1];
	if (string[2]!=enc+fdegree)
	{
//		printf("enc+fdegree = %c where enc = %c and fdegree is %d\n", enc+fdegree, enc, fdegree);
//		printf("initiating checkenc\n");
		return 0;
	}
	for (int i=4; i<length; i+=3)
	{
//			printf("initiating check\n");
		if (string[i]-fdegree!=string[i+1]-sdegree)
		{
			if (string[i]-4!=string[i+1])
			{
			//	printf("\ntampered\n");
				return 0;
			}
			
			/*
		string[i] = tstring[base]+fdegree;
		string[i+1] = tstring[base]+sdegree;
		base = base + 1;
		string[olength] = '\0';
			
			*/
			//tstring[i]==68+fdegree&&tstring[i+1]==64+fdegree
		}
	//	printf("not tampered\n");
		return 1;
	}
	
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void gotoxy(short a, short b) //Custom gotoxy() function
{
    COORD coordinates; //Data type of co-ordinates
    coordinates.X = a; //Assign value to X- Co-ordinate
    coordinates.Y = b; //Assign value to Y Co-ordinate
 
SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 
}

/*
function guide for crpyt.h :
crypt.h is a header file made specifically for ELECTION program created by Rufelle Pactol, 2022.
as of version 1.0, crypt.h has four functions:

- void rnewline (char*)
	loops through a string and removes new line characters and turns them into "eoS" i.e.,'\0'

- int tamper(char*)
	it is a function for checking possible tampering with encrypted strings. It can detect if a string is a legitimate string encrypted using
	crypt.h or not. It returns 1 if the string is safe.

- void encrypt(char*)
	it is an encryption alogrithm, with variating results every time it is used. This is to limit security breaches.
	
	
- void decrypt(char*)
	it is a decryption algorithm and utilizes tamper() to check if a string is a legitimate string or not. 


as of version 1.0, these are the current weaknesses of crypt.h:
- does not encrypt special character properly
- it has a security vulnerability concerning the "string corrupted" if the hacker can time

*/




void rnewline (char * string)
{
	int length = strlen(string);
	for (int i=0; i<length; i++)
	{
		if (string[i]=='\n')
		{
			string[i] = '\0';
		//	printf("Removed newline\n");
		}
	}
}


int spchar (char * string)
{
	int length = strlen(string);
	length = length - 1;
//	printf("\t\tbroken at index %d\n", length);	
	for (int i=0; i<length; i++)
	{
		switch(*(string+i))
		{
		//	printf("\t\tbroken at index %d\n", i);	
			case '1':
				break;
				
			case '2':
				break;
				
			case '3':
				break;
				
			case '4':
				break;
				
			case '5':
				break;
				
			case '6':
				break;
				
			case '7':
				break;
				
			case '8':
				break;
				
			case '9':
				break;
				
			case '0':
				break;
				
			case 'a':
				break;
				
			case 'A':
				break;
				
			case 'b':
				break;
				
			case 'B':
				break;
				
			case 'c':
				break;
				
			case 'C':
				break;
				
			case 'd':
				break;
				
			case 'D':
				break;
				
			case 'e':
				break;
				
			case 'E':
				break;
				
			case 'f':
				break;
				
			case 'F':
				break;
				
			case 'g':
				break;
				
			case 'G':
				break;
				
			case 'h':
				break;
				
			case 'H':
				break;
				
			case 'i':
				break;
				
			case 'I':
				break;
				
			case 'j':
				break;
				
			case 'J':
				break;
				
			case 'k':
				break;
				
			case 'K':
				break;
				
			case 'l':
				break;
				
			case 'L':
				break;
				
			case 'm':
				break;
				
			case 'M':
				break;
				
			case 'n':
				break;
				
			case 'N':
				break;
				
			case 'o':
				break;
				
			case 'O':
				break;
				
			case 'p':
				break;
			
			case 'P':
				break;
			
			case 'q':
				break;
				
			case 'Q':
				break;
				
			case 'r':
				break;
				
			case 'R':
				break;
				
			case 's':
				break;
				
			case 'S':
				break;
				
			case 't':
				break;
				
			case 'T':
				break;
				
			case 'u':
				break;
				
			case 'U':
				break;
				
			case 'v':
				break;
				
			case 'V':
				break;
				
			case 'w':
				break;
				
			case 'W':
				break;
				
			case 'x':
				break;
				
			case 'X':
				break;
				
			case 'y':
				break;
				
			case 'Y':
				break;
				
			case 'z':
				break;
				
			case 'Z':
				break;
				
			case ' ':
				break;
				
			case '.':
				break;
				
			case 'ñ':
				break;
				
			case 'Ñ':
				break;
				
			case '\0':
				break;
			
			case '\n':
				break;
			return 1;
		}
		
	}
}











char random [] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I' ,'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int tamper(char * string);

void encrypt (char * string)
{
	srand(time(NULL));
	int length = strlen(string);
	char * tstring;
	tstring = (char*)malloc(sizeof(char)*10000);
	strcpy(tstring, string);
	int olength = (3*length)+4;
	for (int i = 0; i<olength; i++)
	{
		string[i] = random[rand()%60];
	//	printf("added %c\n", string[i]);
	}
	int fdegree, sdegree;
	do{
	string[0] = (rand()%10+66); // sets the first random structure to the first index
	string[olength - 1] = (rand()%10+70); //sets the second random structure to the last index
//	printf("index 0: %c\nindex last: %c\n", string[0], string[olength-1]);
	//printf("String in: %s\n", string);
	sdegree = string[0] - 66;
	}
	while (fdegree==sdegree||string[0]==string[olength-1]); // checks for hazards
	
	do {
	if (string[0]>string[olength-1])
	{
	//	printf("subtracting %c from %c\n", string[0], string[olength-1]);
		fdegree = string[0]-string[olength-1];
		fdegree = fdegree % 16;	
	}
	
	else 
	{
	//	printf("subtracting %c from %c\n", string[olength-1], string[0]);
		fdegree = string[olength-1] - string[0];
		fdegree = fdegree % 16;
	}
	}
	while (fdegree==sdegree);
//		printf("\nfdegree = %d\nsdegree = %d\n", fdegree, sdegree);
	
	
	char enc = (rand()%15)+65;
//	printf("\n enc = %c\n tenc = %c\n", enc, fdegree + enc);
	string[1] = enc;
	string[2] = fdegree + enc;
	
//	printf("the fdegree = %d\nthe sdegree is equal to %d\n", fdegree, sdegree);// fdegree, first shift, sdegree, second shift
	
	int base = 0;
	for (int i=4; i<olength; i+=3)
	{
//		printf("pass\n");
		if (tstring[base]==' ')
		{
		//	printf("searching for: %c and %c\n", 68+fdegree, 64+fdegree);
		//	printf("space detect\n");
			string[i] = 68+fdegree;
			string[i+1] = 64+fdegree;
			base = base+1;
			continue;
		}
	//	printf("safe\n");
		string[i] = tstring[base]+fdegree;
		string[i+1] = tstring[base]+sdegree;
		base = base + 1;
		string[olength] = '\0';

	}
	return;
}

void decrypt (char * string)
{
	int length = strlen(string);
	char * tstring;
	tstring = (char*)malloc(sizeof(char)*10000);
	strcpy(tstring, string);
	strcpy(string, "");
//	printf("\nString reset: %s\n", string);
	int flength = length - 4;
	flength = flength/3;
//	printf("\nlength = %d\nflength = %d\n", length, flength);
	int fdegree, sdegree;
	sdegree = tstring[0]-66;
//	printf("\nchecking: \n");
	if (tstring[0]>tstring[length-1])
	{
		//printf("big first subtracting %c from %c\nthis is %d-%d\n", tstring[0], tstring[length-1]), tstring[0], tstring[length-1];
		fdegree = tstring[0] - tstring[length-1];
		fdegree = fdegree % 16;
	}
	else
	{
		//printf("big last subtracting %c from %c\n", tstring[length-1], tstring[0]);
		fdegree = tstring[length-1] - tstring[0];
	//	printf("\ncheck one fdegree: %d\n", fdegree);
		fdegree = fdegree % 16;
	}
//	printf("\nfdegree = %d\nsdegree = %d\n", fdegree, sdegree);
	int base = 0;
	char * dec;
	dec = (char*)malloc(sizeof(char)*10000);
	for (int i=4; i<length; i+=3)
	{
		if (tstring[i]==68+fdegree&&tstring[i+1]==64+fdegree)
		{
			dec[base] = ' ';
			//printf("\nspace detected at decryption, found at index point %d", base);
			base++;
			continue;
		}
		else
		{
			dec[base] = tstring[i] - fdegree;
			char checker;
			//printf("\nChange to: %c at index %d\n", dec[base], base);
			checker = tstring[i+1] - sdegree;
		/*	if (checker!=dec[base])
			{
		//		printf("\nString corrupted...\n");
				return;
			}
			*/
		if (i==length-1)
		{
			dec[base+1] = '\0';
		}
		}
	//	printf("\npass");
		//string[i] = tstring[base]+fdegree;
		//string[i+1] = tstring[base]+sdegree;
		base = base + 1;
		continue;

	}
	strcpy(string, dec);
//	printf("\nFinished string: %s\n", string);
	
	return;
}

int tamper (char * string)
{

	int length = strlen(string);
	char tstring[length];
	int flength = length - 4;
	flength = flength/3;
	int fdegree, sdegree;
	sdegree = string[0]-66;
	strcpy(tstring, string);
	//printf("\nchecking: \n");
	if (string[0]>string[length-1])
	{
//	printf("big first subtracting %c from %c\nthis is %d-%d\n", tstring[0], tstring[length-1], tstring[0], tstring[length-1]);
		fdegree = string[0] - string[length-1];
		fdegree = fdegree % 16;
	}
	else
	{
//		printf("big last subtracting %c from %c\n", tstring[length-1], tstring[0]);
		fdegree = string[length-1] - string[0];
	//	printf("\ncheck one fdegree: %d\n", fdegree);
		fdegree = fdegree % 16;
	}
//	printf("\n the fdegree is %d", fdegree);
	int enc = string[1];
	if (string[2]!=enc+fdegree)
	{
//		printf("enc+fdegree = %c where enc = %c and fdegree is %d\n", enc+fdegree, enc, fdegree);
//		printf("initiating checkenc\n");
		return 0;
	}
	for (int i=4; i<length; i+=3)
	{
//			printf("initiating check\n");
		if (string[i]-fdegree!=string[i+1]-sdegree)
		{
			if (string[i]-4!=string[i+1])
			{
			//	printf("\ntampered\n");
				return 0;
			}
			
			/*
		string[i] = tstring[base]+fdegree;
		string[i+1] = tstring[base]+sdegree;
		base = base + 1;
		string[olength] = '\0';
			
			*/
			//tstring[i]==68+fdegree&&tstring[i+1]==64+fdegree
		}
	//	printf("not tampered\n");
		return 1;
	}
	
}
