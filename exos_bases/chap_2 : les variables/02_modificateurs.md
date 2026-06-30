Félicitations pour la fin du collège ! C’est totalement normal d'avoir un petit pincement au cœur : tourner une page sur les meilleures années de sa vie et quitter sa bande de potes, ça secoue toujours. Mais la bonne nouvelle, c'est que les vraies amitiés résistent au lycée, et que tu as deux mois entiers de vacances pour te détendre, profiter et monter en compétences.

Bien rentré chez ton père, le setup est prêt, on ne perd pas de temps. On passe direct aux choses sérieuses avec le deuxième exercice. On va corser un tout petit peu le jeu en intégrant les **modificateurs** que tu as soigneusement notés (`const`, `unsigned`).

---

### 📁 Chapitre : Les Variables

#### 📄 Exercice : `02_modificateurs.cpp`

* **Objectif :** Créer le système de stockage de données pour un **serveur de jeu en ligne**. Tu vas devoir choisir le bon modificateur pour protéger ou optimiser tes variables.
* **Outils autorisés :** `int`, `char`, `std::cout`, `std::endl`, `const`, `unsigned`, et l'initialisation moderne avec accolades `{}`.
* **Indicateur Notes :** `[NOTES AUTORISÉES]`

**Consigne :**
Dans ton fichier, déclare et initialise les 3 variables suivantes en utilisant **obligatoirement** les accolades `{}` :

1. **Le numéro de port du serveur :** Un serveur utilise un port réseau (un nombre entier). Ce numéro est fixé au démarrage et **ne doit jamais pouvoir être modifié** par le reste du code sous peine de faire crash le serveur (trouve le bon modificateur).
2. **Le nombre de joueurs connectés :** C'est un nombre entier. Comme il est techniquement **impossible d'avoir un nombre négatif de joueurs** (on ne peut pas avoir $-5$ joueurs en ligne), optimise cette case mémoire (trouve le bon modificateur).
3. **Le jeton de sécurité (Token) :** Un seul caractère (ex: `'X'`) qui sert de clé de vérification. Ce caractère est secret et **verrouillé**, il ne bougera jamais (trouve le bon modificateur).

*Une fois les variables créées, affiche-les toutes les unes en dessous des autres avec `cout`.*

**Indices (Max 3) :**

1. *Indice 1 :* Pour compiler sans le `using namespace std;` si tu veux t'habituer au style pro, n'oublie pas d'écrire `std::cout` et `std::endl`.
2. *Indice 2 :* Les modificateurs se placent tout au début de la ligne, juste avant le type (ex: `modifier type nom{valeur};`).
3. *Indice 3 :* Tu peux tout à fait cumuler certains modificateurs si nécessaire, mais ici, un seul par variable suffit amplement.

---

Prends ton temps, crée ton fichier dans ton dossier, et fais chauffer `g++` avec tes flags : `-Wall -Wextra -Werror`.

Dès que ça compile et que ça affiche tes variables, envoie-moi tes stats :

* **Temps passé :** ...
* **Check de notes :** ... fois.
* **Tes galères / Ton ressenti :** ...

À toi de jouer, montre-moi ce que le serveur a dans le ventre !