
# 🧮 ** Surcharge de méthodes et constructeurs**

## 📘 Description

Ce document regroupe plusieurs projets C++ illustrant des concepts essentiels de la programmation orientée objet :

- Surcharge de constructeurs et de méthodes

- Encapsulation des données

- Utilisation de vecteurs pour la facturation

## 📂 Project Structure
````
projets
├── GestionCarnetAdresses/
│   └── contact.cpp
├── SystemeFacturation/
│   └── facture.cpp
├── Banque/
│   └── compte_bancaire.cpp
└── README.md
````


## ⚙️ Features

### **1.** Contact – Surcharge de constructeurs
Classe Conatct avec :

- Attributs privés : nom, telephone, email

Trois constructeurs :

- Nom seul

- Nom + téléphone

- Nom + téléphone + email

- Méthode afficher() pour présenter les informations


### **2.** Facturation – Vecteurs et calculs TTC
Classe Articles avec :

- Attributs publics : nom, prixUnitaire, quantite, tauxTVA

- Constructeur avec valeurs par défaut

Classe Facteur avec :

- Vecteur articles

- Trois méthodes ajouterArticle() surchargées

- Méthode afficherTotal() :

- Calcule HT et TTC

- Affiche les détails et les prix total

### **3.** Compte Bancaire – Surcharge et sécurité
Classe CompteBancaire avec :

- Attributs privés : nom, code, solde, pin

Deux constructeurs :

- Sans solde initial

- Avec solde initial

Méthodes retrait() :

- Sans code PIN

- Avec vérification du code PIN

Méthode afficherSolde() pour consulter le solde

## 🖥️ Example Execution


### Gestion d’un carnet d’adresses avec surcharge de constructeurs :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/894a210b-ece0-41ff-95e2-4248b6f1febd" />
### Système de facturation – Surcharge de méthodes :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/80128695-1e99-4901-90a0-5b5c8d993033" />
### Banque – Constructeurs surchargés et logique métier : 
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/f4c2485c-9f09-480d-b55d-d49e5b389f02" />
## 💡 Concepts Practiced

- La surcharge pour offrir plusieurs modes d’initialisation ou d’action

- L’utilisation de vecteurs pour modéliser des collections dynamiques

## 🧑‍💻 Author

- 👤 Agouram Hassan
- 🏫 Fondamentaux et Concepts Avancés de la Programmation Java – TP1
- 🎓 Instructor	Mr.LACHGAR
- 📅 25	October 2025
