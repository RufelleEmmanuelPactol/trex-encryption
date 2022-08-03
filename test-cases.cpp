#include "crypt.h"


void tamperTest(char * string, int repeat)
{
	printf("\n\nTESTING FOR THE TAMPER() FUNCTION:\n\n");
	int length = strlen(string);
	char MOD[length];
	strcpy(MOD, string);
	encrypt(string);
	length = strlen(string);
	float pass, fail;
	pass = 0;
	fail = 0;
//	printf("Length of string is %d and the string is %s", length, string);
	for (int i=0; i<length-1; i++)
	{
		char testString[length];
		strcpy(testString, string);
		testString[i] = testString[i] + (rand()%4)+1;
		int res	= tamper(testString);
		if (i<9)
		{
		printf("Test case for tamper #0%d: ", i+1);	
		}
		else
		{
		printf("Test case for tamper #%d: ", i+1);
		}
		if (res == 1)
		{
			printf("FAILED\n");
			fail++;
		}
		else
		{
			printf("PASSED\n");
			pass++;
		}
	}
	printf("TEST RESULT:\nPassed %.02f%% of the time. ", (pass/(length-1))*100);
	if (repeat > -1000)
	{
		printf("Finishing process.\n\n");
		return;		
	}
	if (pass!=length-1)
	{
		printf("Repeating process.\n\n");
//		printf("repeat is now: %d\n", repeat);
		tamperTest(MOD, repeat-1);
	}
	else
	{
		printf("Finishing process.\n\n");
		return;	
	}
}


void consistency (char * string, int repeats)
{
	printf("TESTING FOR THE ACCURACY OF THE DECRYPT() FUNCTION:\n\n");
	char same[1000];
	strcpy(same, string);
	float pass;
	for (int i=1; i<=repeats; i++)
	{
		printf("Test case for consistency #%d: ", i);
		encrypt(same);
		decrypt(same);
		if (strcmp(same, string)==0)
		{
			printf("PASSED\n");
			pass++;
		}
		else
		{
			printf("FAILED\n");
		}
	}
	printf("TEST RESULT:\nPassed %.02f%% of the time. Finishing process.\n\n", (pass/(repeats))*100);
	
}


int main ()
{
	char string[100];
	printf("Input string to test: ");
	fgets(string, 100, stdin);
	rnewline(string);
	tamperTest(string, 3);
	consistency (string, 3);
	main();
}

