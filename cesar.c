#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * encode - a function that encript a message using Cesar's algorithm
 * @d: the gap
 * @_str: the message
 * @alphabet: alphabet array
 *
 * Return: a pointer to the new message
 */

char *encode(unsigned int gap, char *_str, char *alphabet)
{
	char *newstr;
	char *encode;
	unsigned int i = 0, j = 0;

	newstr = malloc(sizeof(char) * strlen(_str) + 1);
	encode = malloc(sizeof(char) * 26);

	if (newstr == NULL || encode == NULL)
		return (NULL);
	while (i < 26)
	{
		encode[i] = alphabet[(i + gap) % 26];
		i++;
	}
	i = 0;
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
				j++;	
			}
		}
		i++;
	}
	newstr[i + 1] = '\0';
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
	unsigned int gap, size;
	char *str;
	char *new;
	
	printf("Entrez une valeur comprise entre 0 et 25 : ");
	scanf("%u", &gap);

	printf("Entrez maintenant La taille de votre chaine de caractère : ");
	scanf("%u", &size);

	if (gap < 0 || size < 0)
	{
		printf("Entrez une valeur comprise entre 0 et 25\n");
		return;
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		printf("Error");
		return;
	}
	getchar();
	printf("Entrez votre chaine : ");
	fgets(str, size, stdin);
	str[strcspn(str, "\n")] = '\0';
	new = encode(gap, str, "abcdefghijklmnopqrstuvwxyz");
	printf("votre nouvelle chaine est : %s\n", new );



	free(str);
	free(new);

}
