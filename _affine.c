#include "main.h"

/**
 * affine - a function that encript a message using encryption affine
 * @gap: the gap
 * @_str: the message
 * @a: args for ax + b
 * @alphabet: alphabet array
 *
 * Return: a pointer to the new message
 */

char *affine(unsigned int gap, int a, char *_str, char *alphabet)
{
	char *newstr;
	char *encode;
	unsigned int i = 0, j = 0;

	newstr = malloc(sizeof(char) * strlen(_str) + 1);
	encode = encode_alpha_a(gap, a, alphabet);

	if (newstr == NULL || encode == NULL)
		return (NULL);
	while (i < strlen(_str))
	{
		if (!isalpha(_str[i]))
			newstr[i] = _str[i];
		else
		{
			j = 0;
			while (j < 26)
			{
				if (_str[i] == alphabet[j])
				{
					newstr[i] = encode[j];
					break;
				}
				if (tolower(_str[i]) == alphabet[j])
				{
					newstr[i] = toupper(encode[j]);
					break;
				}
				j++;	
			}
		}
		i++;
	}
	newstr[i] = '\0';
	free(encode);
	return (newstr);

}

/**
 * main - entry point
 *
 * Return: Nothing void tyoe function
 */

void main(void)
{
	unsigned int gap;
	int a;
	size_t size = 0, size_d = 0;
	char *str = NULL, *str_dec = NULL;
	char *new, *new_dec;
	
	printf("Entrez une valeur comprise entre 0 et 25 : ");
	scanf("%u", &gap);
	
	do
	{
		printf("Entrez la valeur de a; a doit etre premier avec 26 : ");
		scanf("%d", &a);
	} while (is_prime_number(a) == 0);
	
	getchar();
	if (gap > 25)
	{
		printf("Entrez une valeur comprise entre 0 et 25\n");
		return;
	}
	printf("Entrez la chaine à crypter : ");
	size = getline(&str, &size, stdin);
	str[strcspn(str, "\n")] = '\0';

	new = affine(gap, a, str, "abcdefghijklmnopqrstuvwxyz");
	printf("votre nouvelle chaine est : %s\n", new );

	printf("Entrez la chaine à décrypter : ");
	size_d = getline(&str_dec, &size_d, stdin);
	str_dec[strcspn(str_dec, "\n")] = '\0';

	new_dec = affine_decode(gap, a, str_dec, "abcdefghijklmnopqrstuvwxyz");
	printf("Le resultats du décryptage est : %s\n", new_dec);
	 
	free(str_dec);
	free(new_dec);
	free(str);
	free(new);

}
