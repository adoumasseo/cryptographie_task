<h2>Exercice de Chiffrement de César par ADOUMASSE Dona Ortniel</h2>
<h3>L'exercice est fait avec le langage C.</h3>
Ce projet en langage C propose une implémentation du chiffrement de César. Il est composé de plusieurs fichiers .

## Contenu du Répertoire
**main.h:** Fichier d'en-tête contenant les prototypes de toutes les fonctions utilisées dans le projet.<br>
**encode_alpha.c:** Contient la fonction `encode_alpha` qui génère l'alphabet décalé.<br>
**cesar_encode.c:** Contient la fonction `encode` pour l'encodage du message et une fonction `main` pour l'interaction avec l'utilisateur.<br>
**cesar_decode.c:** Contient la fonction `decode` pour le décodage du message et une fonction `main` pour l'interaction avec l'utilisateur.<br>
## Compilation

- Pour compiler le programme d'encodage, utilisez la commande : `gcc cesar_encode.c  encode_alpha.c -o a`; Un exécutable a est produit et quand on le lance on peut essager le programme
- Pour compiler le programme de décodage, utilisez la commande : `gcc cesar_decode.c  encode_alpha.c -o b`; Un exécutable a est produit et quand on le lance on peut essager le programme
## Utilisation

**Encodage :**
 - Exécutez `a`.
 - Suivez les instructions pour fournir les informations nécessaires.
 - Le programme affichera le message encodé.

**Décodage :**
 - Exécutez `b`.
 - Suivez les instructions pour fournir les informations nécessaires.
 - Le programme affichera le message décodé.
