#include "main.h"

/**
 * decode - a function that decript a message using Cesar's algorithm
 * @d: the gap
 * @_str: the message
 * @alphabet: alphabet array
 *
 * Return: a pointer to the new message
 */

char *decode(unsigned int gap, char *_str, char *alphabet)
{
	char *newstr;
	char *decode;
	unsigned int i = 0, j = 0;

	newstr = malloc(sizeof(char) * strlen(_str) + 1);
	decode = encode_alpha(gap, alphabet);

	if (newstr == NULL || decode == NULL)
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
				if (_str[i] == decode[j])
				{
					newstr[i] = alphabet[j];
					break;
				}
				if (tolower(_str[i]) == decode[j])
				{
					newstr[i] = toupper(alphabet[j]);
					break;
				}
				j++;	
			}
		}
		i++;
	}
	newstr[i] = '\0';
	free(decode);
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
	size_t size = 0;
	char *str = NULL;
	char *new;
	
	printf("Entrez une valeur comprise entre 0 et 25 : ");
	scanf("%u", &gap);
	getchar();
	if (gap > 25)
	{
		printf("Entrez une valeur comprise entre 0 et 25\n");
		return;
	}
	printf("Entrez la chaine à décoder: ");
	size = getline(&str, &size, stdin);
	str[strcspn(str, "\n")] = '\0';
	new = decode(gap, str, "abcdefghijklmnopqrstuvwxyz");
	printf("Le resultats est : %s\n", new );

	free(str);
	free(new);

}
