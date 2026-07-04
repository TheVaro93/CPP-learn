Reçu ! On change d'approche. Je te pose un vrai contexte technique et opérationnel, comme si on configurait le système embarqué d'un vrai appareil. On va appeler ça la "durée de vie" des composants en mémoire.

Voici la consigne recalibrée avec son scénario complet :

---

### 📁 Chapitre : Les Variables

#### 📄 Exercice : `03_duree_des_donnees.cpp`

* **Contexte :** Tu codes le micro logiciel d'un **drone sous-marin d'exploration**. Le drone a besoin de suivre des données en permanence (comme sa profondeur). Par contre, lorsqu'il traverse temporairement une *faille volcanique*, il doit activer des capteurs thermiques ultra-sensibles qui consomment énormément d'énergie. Une fois sorti de la faille, ces capteurs sont physiquement coupés pour préserver la batterie, et leurs données temporaires doivent être instantanément détruites de la RAM pour éviter la surchauffe des composants.
* **Outils autorisés :** `int`, `std::cout`, `std::endl`, et l'utilisation d'un bloc d'accolades `{ }` isolé au milieu du code.

---

**Consigne :**

1. **La donnée permanente :** Dans ton `main`, crée une variable entière pour stocker la **profondeur globale** du drone (ex: 250 mètres). Elle doit être disponible tout au long du programme.
2. **L'entrée dans la faille :** Juste en dessous, ouvre un bloc d'accolades isolé `{ }` pour simuler le moment exact où le drone pénètre dans la zone critique de la faille volcanique.
3. **La donnée temporaire :** À l'intérieur de ces accolades, crée une variable entière pour la **température de la faille** (ex: 85 degrés). Affiche cette température avec `cout` depuis l'intérieur des accolades.
4. **La sortie de la faille :** Après la fermeture de l'accolade du bloc, tente d'afficher à nouveau la **température de la faille** avec `cout` pour voir ce qui se passe maintenant que le drone est sorti de la zone.
5. **Le test :** Lance la compilation avec tes flags de sécurité habituels (`-Wall -Wextra -Werror`).

---

Écris ton fichier, lance le compilateur et dis-moi ce que ton terminal te renvoie ! (Si tu bloques, tu as juste à écrire "Indice 1").