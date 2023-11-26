#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    printf("Saisissez une ligne : ");
    read = getline(&line, &len, stdin);

    if (read != -1) {
        printf("Vous avez saisi : %s", line);
    } else {
        printf("Erreur lors de la lecture de la ligne.\n");
    }

    free(line);  // N'oubliez pas de libérer la mémoire allouée par getline.

    return 0;
}
