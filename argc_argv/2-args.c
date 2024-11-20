#include <stdio.h>

/**
 * main - Imprime todos los argumentos pasados al programa
 * @argc: El num de argumentos pasados al programa
 * @argv: Un arreglo de cadenas de caracteres que contiene los argumentos
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
