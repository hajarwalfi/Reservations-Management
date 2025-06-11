<div align="center">

# Système de Gestion des Réservations 
### *Un système complet de gestion des réservations médicales*

![C](https://img.shields.io/badge/C-FFE4E1?style=for-the-badge&logo=c&logoColor=FF69B4&labelColor=FFF0F5) 

</div>

## 📋 À Propos du Projet

Ce projet est un **système de gestion des réservations** développé en langage C, conçu pour gérer efficacement les rendez-vous médicaux ou tout autre type de réservation. Le système offre une interface console intuitive avec des fonctionnalités complètes de CRUD (Create, Read, Update, Delete).

## ✨ Fonctionnalités Principales

### 🔧 Gestion des Réservations
- ➕ **Ajouter** une nouvelle réservation
- 👀 **Afficher** toutes les réservations
- ✏️ **Modifier** une réservation existante
- 🗑️ **Supprimer** une réservation
- 🔍 **Rechercher** par référence ou nom
- 📊 **Trier** par nom ou statut

### 📈 Fonctionnalités Avancées
- 📱 **Génération automatique** de références uniques
- 📊 **Statistiques détaillées** (âge moyen, tranches d'âge)
- 🎯 **États de réservation** : Valide, Reporté, Annulé, Traité
- 💾 **Données pré-chargées** pour démonstration

## 🛠️ Technologies Utilisées

<div align="justify">

![C Language](https://img.shields.io/badge/C_Language-FFE4E1?style=for-the-badge&logo=c&logoColor=FF69B4&labelColor=FFF0F5)
![Standard Libraries](https://img.shields.io/badge/Standard_Libraries-E6E6FA?style=for-the-badge&logo=c&logoColor=9370DB&labelColor=F8F8FF)
![Console Interface](https://img.shields.io/badge/Console_Interface-FFFACD?style=for-the-badge&logo=terminal&logoColor=FFB6C1&labelColor=FFFFF0)

</div>

**Bibliothèques utilisées :**
- `stdio.h` - Entrées/sorties standard
- `stdlib.h` - Fonctions utilitaires 
- `string.h` - Manipulation de chaînes

## 🚀 Installation et Compilation

### Prérequis
- Compilateur C (GCC recommandé)
- Système d'exploitation Windows/Linux/MacOS

### Étapes d'installation

```bash
# 1. Cloner le repository
git clone https://github.com/hajarwalfi/Reservations-Management.git

# 2. Naviguer dans le dossier
cd Reservations-Management

# 3. Compiler le programme
gcc -o reservations main.c

# 4. Exécuter le programme
./reservations
```

### Compilation alternative
```bash
# Avec optimisations
gcc -O2 -o reservations main.c

# Avec debugging
gcc -g -o reservations main.c
```

## 📖 Guide d'Utilisation

### Menu Principal
```
===========================
           Menu
===========================

1. Ajouter une reservation
2. Afficher les reservations
3. Modifier une reservation
4. Supprimer une reservation
5. Rechercher une reservation
6. Trier les reservations
7. Statistiques
0. Quitter le programme
```

### Structure des Données
Chaque réservation contient :
- **Nom** (50 caractères max)
- **Prénom** (50 caractères max) 
- **Téléphone** (13 caractères max)
- **Âge** (entier)
- **Statut** (valide/reporté/annulé/traité)
- **Référence** (générée automatiquement)
- **Date** (format j/m/a)

### Exemples d'Utilisation

#### Ajouter une Réservation
```
Entrez votre nom: Dupont
Entrez votre prenom: Marie
Entrez votre numero de telephone: 0123456789
Entrez votre age: 25
Entrez le status: 1 (Valide)
Entrez une date: 15/12/2024
```

#### Rechercher une Réservation
- Par **référence** : Recherche exacte par numéro
- Par **nom** : Recherche par nom de famille

## 📊 Fonctionnalités Statistiques

Le système génère automatiquement :
- 📈 **Nombre total** de réservations
- 🎂 **Âge moyen** des patients
- 👶 **Tranches d'âge** : 0-18, 19-35, 36+ ans
- 📋 **Répartition par statut** : valide, reporté, annulé, traité


### Architecture du Code
- `typedef struct reservation` - Structure des données
- `void menu()` - Interface utilisateur
- `void ajouter()` - Ajout de réservations
- `void afficher()` - Affichage des données
- `void modifier()` - Modification
- `void supprimer()` - Suppression
- `void rechercher()` - Recherche
- `void trier()` - Tri des données
- `void statistiques()` - Génération de stats
