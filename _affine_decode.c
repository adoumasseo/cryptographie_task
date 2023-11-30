#include "main.h"

char *affine_decode(unsigned int gap, int a, char *_str, char *alphabet)
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
                                if (_str[i] == encode[j])
                                {
                                        newstr[i] = alphabet[j];
                                        break;
                                }
                                if (tolower(_str[i]) == encode[j])
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
        free(encode);
        return (newstr);

}
