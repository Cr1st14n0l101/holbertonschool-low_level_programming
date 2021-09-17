#include <stdlib.h>
#include <stdio.h>

int f2(char *str, int len);
int f3(char *str, int len);
int f4(char *str, int len);
int f5(char *str, int len);
int f6(char *str, int len);

/**
 * main - Generates a key for the crackme5 program
 * @argc: The number of arguments that were passed
 * @argv: The arguments that were passed
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	char *username = NULL;
	char key[7] = {0};
	int uname_len = 0;
	char *tb = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (argc == 2)
	{
		username = argv[1];
		while (username[uname_len] != '\0')
			uname_len++;
		key[0] = tb[(uname_len ^ 59) & 63];
		key[1] = tb[f2(username, uname_len)];
		key[2] = tb[f3(username, uname_len)];
		key[3] = tb[f4(username, uname_len)];
		key[4] = tb[f5(username, uname_len)];
		key[5] = tb[f6(username, uname_len)];
		printf("%s\n", key);
	}
	else
	{
		printf("Usage: %s username\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
