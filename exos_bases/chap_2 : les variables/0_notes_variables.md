# Les variables  
>Ce sont des "etiquettes" qu'on met au debut d'une ligne pour dire quel genre de donnée on va stocker dans la ram en bits.  

## **Les regles**  
-> pour ecrire correctement au compilateur et qu'il comprenne, une variable s'ecrit de deux facons :  
`int niveau = 1;`, qui est la version "classique" et `int niveau{1}`, qui est la nouvelle facon d'ecrire.

## Les types

**La version sans virgule**

-> int : le type de variables par défaut pour les nombres entiers. il fais 32 bits=4 octets=-2 milliards à +2 milliards il prends en charge les nombres positifs et négatifs. ex: `int temperature = 46;`

**La version avec virgule**

-> float : il sert a stocker les petits nombres a virgule. il a une précision moyenne : environ 7 chifres au total. il fais la meme taille qu'un int et gere les nombres positifs et negatifs .  
ex: `float argent = -6.7;`

-> double : sert a stocker les nombres a vrigules tres precis. il a environ 15 chiffres de precision, et fais 64 bits et gere les nombres positifs et negatifs. ex: `double gps = 43.70313;`  

**La version avec des caractères**  

-> char : sert a stocker un seul charactere positif ou negatif. il fait 8 bits, la plus petite taille disponible.  
ex: `char dollar = '$';`  
  
-> string : sert a stocker plusieurs characteres entre guillements. il a pas de taille ficxe en bits, il s'adapte auto à ce qu'on mets dedans : dans un string, il y a pour chaque caractère un char (qui fait 8 bits) et plus il y a de caracteres plus l ataille augmente en ajoutant des char.  
ex: `string larper_phrase = "mambo mambo omachimi mambo (true larp)";`.  cet exemple fait 304 bits  

**La version avec des interrupteurs**  

-> bool : un choix binaire qui contient juste true ou false. il prends aussi 8 bits, malgré en qu'en pratique il n'en demande qu'un seul (1 pour dire vrai, 0 pour dire faux). ex: `bool g_lache_la_sauce = false;` ou `bool taiko_est_trop_frais = true;`  

**Les modificateurs**  

* ce sont des mots cles que l'on rajout en debut de ligne d'une variable juste avant son type pour changer les regles de sa case memoire.  

-> signed : c'est celui ecrit par default si aucun autre n'est precise. il signifie que le nombre entier peut etre positif ou negatif. ex : `signed int vitesse = 2;`

-> unsigned : il signifie que le nombre est positif ou egal a 0 quoiqu'il arrive. cela permet de liberer de la place car l'ordinateur ne stocke pas le signe moins et la taille maximale de la variable double.  
ex: `unsigned int resultat = 4724173561;`  

-> const : elle sert a verrouiller la variable, ce qui permet qu'elle ne puisse plus etre modifiee dans la suite du code. utile pour des valeurs qui ne bougent pas. ex: `const char parenthese = '(';`  
