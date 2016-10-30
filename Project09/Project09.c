/*

Name: Program09

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 10-26-16

*/

#include <stdio.h>


int findstring();
int insertstring();

int main()
{

	//Part 1 calls findstring
	findstring(); 
	//Part 2 calls insertstring
	insertstring(); 


	return 0;
}


int findstring()
{
	char str[] = "a chatterbox";	//string 1
	char sub[] = "hat";				//string 2

	char *a, *b, *c;				//pointers for variables
	int i = 0, j = 0, id = 0;		//intializing variables

	a = str;						//setting pointer one to first string
	b = sub;						//setting pointer two to second string

	for (i = 0; i<12; i++)			//loop to kick off check
	{
		if (*a == *b)
		{
			c = a;
			for (j = 0; j<3; j++)
			{
				if (*c == *b)
				{
					c++; b++;
				}
				else
					break;
			}
			b = sub;
			if (j == 3)
			{
				id = 1;
				printf("\nPart1:");
				printf("\nSubstring found at index : %d\n\n", i);
			}
		}
		a++;
	}
	if (id == 0)
	{
		return -1;
	}
}

int insertstring()
{
	char *str1 = "the wrong son";
	char *str2 = "per";
	char  str3[50];
	int x = 10;
	
	strncpy(str3, str1, x);
	str3[x] = '\0';
	strcat(str3, str2);
	strcat(str3, str1 + x);
	printf("\nPart 2:\n");
	printf("%s\n\n", str3);
}

