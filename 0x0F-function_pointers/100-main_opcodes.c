#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int i, s;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	if (s < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < s; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < s - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
