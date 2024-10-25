#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Punto de entrada
 * Description: Genera numero aleatorio y evalua el ultimo digito
 * Return: Always 0
 **/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0)); /* Incializa para la aleatoriedad */
	n = rand() - RAND_MAX / 2; /* Genera numero aleatorio */
	last_digit = n % 10; /* Obtiene ultimo digito */

	/* Imprime el resultado obtenido del ultimo digito */
	if (last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}

	return (0);
}
