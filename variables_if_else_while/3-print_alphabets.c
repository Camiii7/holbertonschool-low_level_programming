#include <stdio.h>
/**
 * main - abcdario en minuscula y mayuscula
 * Return: 0
 */

int main(void)
{
	int az, AZ;

	for (az = 'a'; az <= 'z' ; az++)
	{
	putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z' ; AZ++)
	{
	putchar(AZ);
	}
	putchar('\n');
	return (0);
}
