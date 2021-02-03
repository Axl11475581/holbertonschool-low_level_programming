#include <stdio.h>
/**
 * main - declaration of variables, functions and if functions.
 *Description: Print different types
 * Return: always 0.
 **/
int main(void)
{
printf("Size of a char : %1u byte(s)\n", sizeof(char));
printf("Size of a int : %1u byte(s)\n", sizeof(int));
printf("Size of long int: %1u byte(s)\n", sizeof(long int));
printf("Size of long long int: %1u byte(s)\n", sizeof(long long));
printf("Size of float : %1u byte(s)\n", sizeof(float));
return (0);
}

