#include "crypt.h"
#include <string.h>
#include <unistd.h>
void display();

int main ()
{
	int MAX = 100;
	char *ptr;
	ptr = (char*)malloc(sizeof(char)*(MAX*5));
	display();
	int repeat = 1;
	while (repeat!=0)
	{
		printf("\n\n\tCommands:\n\t\t1: Encrypt String\n\t\t2: Decrypt String\n\t\t0: Exit\n\t\tEnter command: ", &repeat);
		scanf("%d", &repeat);
		getchar();
		int sp;
		switch (repeat)
		{
			case 1:
				printf("\t\tEnter string: ");
				fgets(ptr, MAX*2, stdin);
				//printf("sp is %d\n", sp);
			/*	if(spchar(ptr)==1)
				{
					printf("\t\tPlease do not use special characters!\n'");
					continue;
				}
			*/	
		//		printf("length is: %d\n", strlen(ptr));
				if (strlen(ptr)>MAX)
				{
		//			printf("Check");
					int length = strlen(ptr);
					int dlen = MAX*2-length;
					printf("\t\tToo many characters! Max is %d.\n", MAX);
					continue;
				}
				rnewline(ptr);
				encrypt(ptr);
				printf("\t\tEncrypted string is: %s\n", ptr);
				break; 
			
			case 2:
				printf("\t\tEnter string: ");
				fgets(ptr, MAX*5, stdin);
				rnewline(ptr);
				decrypt(ptr);
				int ver = tamper(ptr);
				/*if (!ver)
				{
					printf("\t\tString is tampered! Make sure to not add a space when copying the string!\n");
					continue;
				}
				*/
				
				printf("\t\tDecrypted string is: \n\t\t%s\n", ptr);
				
				
		}
		if (!repeat)
		{
			return 0;
		}
		
	}
}

void display ()
{
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t---------------------------------------------------------------\n");
	printf("\t\t\t\t T-REX ENCRYPTION ALGORITHM\n");
	printf("\t\t---------------------------------------------------------------\n");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\tLoading: ");
	for (int i=0; i<53; i++)
	{
		for (int j=0; j<100000000; j++)
		{
			continue;
		}
		printf("%c", 250);
	}
	printf("\n\n\t\t\t\t\t\t\t\t\t\t(c) Rufelle Pactol, 2022\n\n\n");
}
