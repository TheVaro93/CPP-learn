# La syntaxe  
>Le C++ est un language connu pour sa syntaxe proche de celle du C, elle même reputée pour etre assez complexe. Si elle est si complexe, c'est grace ou à cause de sa proximité avec la machine.  

## **Les bases**  

-> Les inclusions : quand on code en c++, on utilise `#include<nom>` pour donner acces au compilateur a des outils basiques. par exemple `#include<iostream>`.  

-> Le point virgule : en c++, quand on ajoute une varibale, fonction ou quoi que ce soit, la ligne doit se terminer par un `;`. le point virgule permet d'indiquer que l'instruction/la ligne est terminée. c'est la regle de base, et si on l'oublie le compilateur pense que la ligne suivante/l'instruction suivante est la même, et crash.  

-> Le point de départ : la fonction `main()`. quand on code un programme, l'ordinateur va directement aller chercher une ligne nommée `int main() {}` et l'executer (donc le programme qui est entre les accolades). si elle n'y est pas, le programme ne se lance pas.  

-> Le signal de fin : `return 0;`. a la fin du main, juste avant l'avant l'accolade de fin précisé au dessus, on écrit `return 0;` qui envoie le chiffre 0 au systeme d'exploitation pour lui dire que le programme s'est executé et fermé sans erreur.  