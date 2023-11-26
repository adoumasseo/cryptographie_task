#include "main.h"

/**
 * encode_alpha - a fct that return a alphabet base on gap
 * @gap: the gap to create th new alphabet
 * @alphabet: the actual alphabet
 *
 * Return: A pointer to the newest alphabet
 */

char *encode_alpha(unsigned int gap, char *alphabet)
{
        unsigned int i = 0;
        char *new_alpha;
        new_alpha = malloc(sizeof(char) * 26);
        if (new_alpha == NULL)
                return (NULL);
        while (i < 26)
        {
                new_alpha[i] = alphabet[(i + gap) % 26];
                i++;
        }
        return (new_alpha);
}

/**
 * encode_alpha_a - a fct that return a alphabet base on gap and encryption affine
 * @a: in ax +b
 * @gap: b
 * @alphabet: normal alphabet
 *
 * Return: A pointer to the new alphabet
 */

char *encode_alpha_a(unsigned int gap, int a, char *alphabet)
{
	unsigned int i = 0;
	char *new_alpha;
	new_alpha = malloc(sizeof(char) * 26);
	if (new_alpha == NULL)
		return (NULL);
	while (i < 26)
	{
		new_alpha[i] = alphabet[((i * a) + gap) % 26];
		i++;
	}
	return (new_alpha);
}
