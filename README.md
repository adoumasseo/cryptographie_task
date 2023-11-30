<h2>Exercice de Chiffrement de César par ADOUMASSE Dona Ortniel</h2>
<h3>L'exercice est fait avec le langage C.</h3>
Ce projet en langage C propose une implémentation du chiffrement de César. Il est composé de plusieurs fichiers .

## Contenu du Répertoire

**main.h:** Fichier d'en-tête contenant les prototypes de toutes les fonctions utilisées dans le projet.<br>
**encode_alpha.c:** Contient la fonction `encode_alpha` qui génère l'alphabet décalé.<br>
**cesar_encode.c:** Contient la fonction `encode` pour l'encodage du message et une fonction `main` pour l'interaction avec l'utilisateur.<br>
**cesar_decode.c:** Contient la fonction `decode` pour le décodage du message et une fonction `main` pour l'interaction avec l'utilisateur.<br>
**_affine.c:** Contient la fonction `affine` pour l'encodage du message en utilisant le chifrement affine et une fonction `main` pour l'interaction avec l'utilisateur.<br>
**_affine.c:** Contient la fonction `affine_decode` pour le decodage du message en utilisant le chifrement affine.<br>
**is_prime_number.c:** Contient la fonction `is_prime_number` pour verifier si un entier est premier avec 26.<br>
**viginère.c:** Contient les fonctions `vigenereEncrypt` et `vigenereDecrypt` pour crypter et décripter un message utilisant l'agorithme de viginère.<br>

## Description des fonctions

### Chiffrement de César
#### Compilation 
- Pour compiler le programme d'encodage, utilisez la commande : `gcc cesar_encode.c  encode_alpha.c -o a`; Un exécutable `a` est produit et quand on le lance on peut essayer le programme
- Pour compiler le programme de décodage, utilisez la commande : `gcc cesar_decode.c  encode_alpha.c -o b`; Un exécutable `b` est produit et quand on le lance on peut essayer le programme

#### Utilisation

Une fois l'executable que le programme est lancé l'utilisateur est questioné sur le décalage qu'il souhaite utiliser et la chaine de caractère qu'il souhaite encoder

**Encodage :**
 - Exécutez `a`.
 - Suivez les instructions pour fournir les informations nécessaires.
 - Le programme affichera le message encodé.
##### Exemple
![encodage](https://github.com/adoumasseo/cryptographie_task/blob/master/img/Cesar_encode_show.png)

**Décodage :**
 - Exécutez `b`.
 - Suivez les instructions pour fournir les informations nécessaires.
 - Le programme affichera le message décodé.
##### Exemple
![decodage](https://github.com/adoumasseo/cryptographie_task/blob/master/img/Cesar_decode_show.png)

#### Explication
Les deux fonctions d'encodage et de décodage se basent sur la gestion des chaines des caractères. La fonction encode_alpha recoit en argument un alphabet normal et le decalage entré par l'utilisateur. Avec ces deux donnés elles crée et renvoie l'alphabet de substition de l'alphabet normal à l'aide le formule `y = (x + a)mod(26)` avec :
- `x` l'index d'un élément de l'alphabet normal,
- `y` son correspondant dans l'alphabet de substitution et
- `a` le décalage.
L'alphabet de substitution est ensuite utilisé par les fonctions d'encodage et de décodage pour changer les éléments de la chaine de caractère de l'utilisateur. <br>

### Chiffrement Affine

#### Compilation 
- Pour compiler le programme affine utilisez la commande : `gcc _affine.c _affine_decode.c is_prime_number.c encode_alpha.c -o c`; Un exécutable `a` est produit et quand on le lance on peut essayer le programme.
  
#### Utilisation

Une fois l'executable que le programme est lancé l'utilisateur est questioné sur le décalage qu'il souhaite utiliser et la chaine de caractère qu'il souhaite encoder et décoder ainsi que la valeur de `a` dans la formule `y = (ax + b)(mod26)`.Une fois toutes les informations entrés le programme produit le message encodé et le décode également. La fonction `is_prime_number` verifie si la valeur de `a` est premier avec `26` et retourne son inverse multiplicatif. Tant que l'ulilisateur n'entre pas une valeur premiere avec `26` le programme continue de lui demander.

##### Exemple
![Affine](https://github.com/adoumasseo/cryptographie_task/blob/master/img/Affine_Show.png)
##### Explication
Le principe est pareil que dans l'algorithme de César à la différence que ici la formule est un peu différente et `a` et `26` doivent être premier entre eux.La fonction `is_prime_number` se charge de faire cette verification et une variante de la fonction `encode_alpha` se charge de produire l'alphabet de substitution.
