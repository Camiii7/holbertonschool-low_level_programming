#include <stdio.h>

/**
 * main - Imprime el num de argumentos pasados al programa
 * @argc: Num de argumentos pasados al programa
 * @argv: Arreglo de cadenas de caracteres que contiene los argumentos
 * Return: 0
 **/

int  main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc -1);
	return (0);
}
