Pas de problème, on recadre tout avec un contexte concret pour que tu puisses visualiser l'arborescence des données.

Imagine que tu développes le code d'un **système de contrôle d'accès physique** (comme un badgeur de porte pour une salle serveurs). Le programme a besoin de charger 4 informations de configuration basiques en mémoire vive avant de lancer ses vérifications.

---

### 💻 Contexte : Configuration d'un Badgeur de Porte

Tu dois créer 4 cases mémoires distinctes. Chaque case correspond à un élément précis de la machine :

1. **La durée d'ouverture de la porte :** La machine doit savoir combien de secondes (un nombre entier) la porte reste déverrouillée avant de se refermer.
2. **La tension électrique du système :** Pour surveiller le matériel, le système stocke le voltage exact (un nombre à virgule très précis, par exemple `12.34` volts) envoyé au verrou magnétique.
3. **L'identifiant de la zone :** Chaque porte appartient à une zone spécifique désignée par une seule lettre de l'alphabet (par exemple la zone `'A'`).
4. **Le coupe-circuit d'urgence :** Un paramètre de sécurité (un interrupteur vrai ou faux) qui indique si le système doit forcer le verrouillage ou non en cas d'alerte.

---

### 🛠️ Ta Mission

Écris le fichier de manière à ce qu'il se déroule en deux étapes logiques :

* **Étape 1 : Le Stockage.** Tu crées ces 4 informations sous forme de variables en utilisant l'initialisation moderne avec les accolades (sans le signe `=`).
* **Étape 2 : L'Affichage.** Tu ordonnes à l'ordinateur de cracher ces 4 valeurs dans le terminal, les unes en dessous des autres, pour vérifier qu'elles sont correctement lues.

Toutes les notions requises (`int`, `double`, `char`, `bool`, `std::cout`, `std::endl` et `{}`) sont textuellement dans tes notes. Aucun outil extérieur n'est nécessaire.

Prends ton temps, construis la structure proprement, et dis-moi ce que donne la compilation !