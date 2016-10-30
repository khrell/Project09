/*

Name: Program09

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 10-26-16

*/

#include <stdio.h>
#include <string.h>


int findstring();
//int insertstring();

int main()
{

	findstring();
	//insertstring();


	return 0;
}


int findstring()
{
	char str[] = "a chatterbox";
	char sub[] = "hat";

	char *a, *b, *c;
	int i = 0, j = 0, id = 0;

	a = str;
	b = sub;

	for (i = 0; i<strlen(str); i++)
	{
		if (*a == *b)
		{
			c = a;
			for (j = 0; j<strlen(sub); j++)
			{
				if (*c == *b)
				{
					c++; b++;
				}
				else
					break;
			}
			b = sub;
			if (j == strlen(sub))
			{
				id = 1;
				printf("\nSubstring found at index : %d\n", i);
			}
		}
		a++;
	}
	if (id == 0)
	{
		return -1;
	}
}

/*int insertstring()
{
	char str[] = "a chatterbox";
	char sub[] = "hat";

	char *p1, *p2, *p3;
	int i = 0, j = 0, flag = 0;

	p1 = str;
	p2 = sub;

	for (i = 0; i<strlen(str); i++)
	{
		if (*p1 == *p2)
		{
			p3 = p1;
			for (j = 0; j<strlen(sub); j++)
			{
				if (*p3 == *p2)
				{
					p3++; p2++;
				}
				else
					break;
			}
			p2 = sub;
			if (j == strlen(sub))
			{
				flag = 1;
				printf("\nSubstring found at index : %d\n", i);
			}
		}
		p1++;
	}
	if (flag == 0)
	{
		printf("Substring NOT found");
	}
}*/

