# Notes pr le c++ car c harr  

## Utile  

-> pour compiler : g++ file.cpp -o a.out -Wall -Wextra -Werror  

-> pour executer : ./a.out
  
## Les variables  
>Ce sont des "etiquettes" qu'on met au debut d'une ligne pour dire quel genre de donnée on va stocker dans la ram en bits. on y retrouve plusieurs versions :

**La version sans virgule**

-> int : le type de variables par défaut pour les nombres entiers. il fais 32 bits=4 octets=-2 milliards à +2 milliards il prends en charge les nombres positifs et négatifs. ex: int temperature = 46;

**La version avec virgule**

-> float : il sert a stocker les petits nombres a virgule. il a une précision moyenne : environ 7 chifres au total. il fais la meme taille qu'un int et gere les nombres positifs et negatifs . ex: float argent = -6.7;

-> double : sert a stocker les nombres a vrigules tres precis. il a environ 15 chiffres de precision, et fais 64 bits et gere les nombres positifs et negatifs. ex: double gps = 43.70313;  

**La version avec des caractères**  

-> char : sert a stocker un seul charactere positif ou negatif. il fait 8 bits, la plus petite taille disponible. ex: char dollar = "$"  
  
-> string : sert a stocker plusieurs characteres entre guillements. il a pas de taille ficxe en bits, il s'adapte auto à ce qu'on mets dedans : dans un string, il y a pour chaque caractère un char (qui fait 8 bits) et plus il y a de caracteres plus l ataille augmente en ajoutant des char. ex: string larper_phrase = "mambo mambo omachimi mambo (true larp)"; cet exemple fait 304 bits  

**La version avec des interrupteurs**  

-> bool : un choix binaire qui contient juste true ou false. il prends aussi 8 bits, malgré en qu'en pratique il n'en demande qu'un seul (1 pour dire vrai, 0 pour dire faux). ex: bool g_lache_la_sauce = false; ou bool taiko_est_trop_frais = true;  
