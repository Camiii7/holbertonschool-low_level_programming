#include <stdio.h>

/**
 * main - Imprime el nombre del programa
 * @argc: Num de argumentos pasados al programa desde la linea de comandos
 * @argv: Arreglo de cadenas de caracteres
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
