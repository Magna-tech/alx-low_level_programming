#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**                                                                                                                                     
 * _strlen - prints the length of the string                                                                                            
 * @s: the string to be checked                                                                                                         
 *                                                                                                                                      
 * Return: length of the string                                                                                                         
 */                                                                                                                                     
                                                                                                                                        
int _strlen(char *s)                                                                                                                    
{                                                                                                                                       
        int len = 0;                                                                                                                    
                                                                                                                                        
        while (s[len])                                                                                                                  
                len = len + 1;                                                                                                          
                                                                                                                                        
        return (len);                                                                                                                   
}

/**
 * main - adds positive integers and prints the result
 * @argc: argument count
 * @argv: an array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, k, sum;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < _strlen(argv[i]); j++)
		{
			if ((isdigit(argv[i][j])) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		k = atoi(argv[i]);
		sum += k;
	}
	printf("%d\n", sum);

	return (0);
}
