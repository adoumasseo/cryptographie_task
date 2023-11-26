#include <stdio.h>
#include <string.h>

// sizeof() cherche le nombre de bits sur lequel sont ecrit l'élément qu'il reçoit en arg
// Donc il vas forcément compter le caractère de fin de ligne
// Par contre strlen lui il chope juste la taille sans le caractère de fin de ligne

void main(void)
{
	char *str = "coder des messages, qu’elle drole d’idée";
	
	printf("La taille de votre chaine de caractère est : %ld\n", strlen(str) + 1);
}
