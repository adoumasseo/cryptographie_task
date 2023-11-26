<h2>Exercice de Chiffrement de César par ADOUMASSE Dona Ortniel</h2>
<h3>L'exercice est fait avec le langage C.</h3>
On retrouve sur le repertoire 4 fichiers
*[main.h](https://github.com/adoumasseo/cryptographie_task/blob/master/main.h) : C'est le fichier d'entête qui contient le prototype de toutes les fonctions utilisés dans l'exercice
*[encode_alpha.c](https://github.com/adoumasseo/cryptographie_task/blob/master/encode_alpha.c): Ce fichier contient la fonction *encode_alpha* qui permet d'obtenir l'alphabet correspond à un décalage donné à l'aide de l'alphabet normal
*[cesar_encode.c](https://github.com/adoumasseo/cryptographie_task/blob/master/cesar_encode.c): Ce fichier contient :
  - Une fonction *encode* qui se charge d'encoder le message entré par l'utilisateur
  - Une fonction *main* qui demande toutes les informations nécessaires aux pour l'encryptage à l'utilisateur et lui affiche les résultats.
*[cesar_decode.c](https://github.com/adoumasseo/cryptographie_task/blob/master/cesar_decode.c): Ce fichier contient :
 - Une fonction *decode* qui se charge de décoder le message entré par l'utilisateur
 - Une fonction *main* qui demande toutes les informations nécessaires aux pour l'encryptage.
*Pour encrypter un message il faut entrer la commande **gcc cesar_encode.c  encode_alpha.c -o a**. Un exécutable a est produit et quand on le lance on peut essager le programme
*Pour décrypter un message if faut entrer la commande **gcc cesar_decode.c  encode_alpha.c -o b**. Un exécutable est produit et si on le lance on peut essayer le programme
