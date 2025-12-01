#!/bin/bash

echo "=== Compilation et exécution des exercices TP4 ==="

# Exercice 4.1 : Calcul avec opérateurs
echo -e "\nCompilation 4.1 : main.c + operator.c..."
gcc main.c operator.c -o tp4_41
echo "Exécution 4.1 :"
./tp4_41

# Exercice 4.2 : Gestion de fichiers
echo -e "\nCompilation 4.2 : main.c + fichier.c..."
gcc main.c fichier.c -o tp4_42
echo "Exécution 4.2 :"
./tp4_42

# Exercice 4.3 : Base de données étudiante
echo -e "\nCompilation 4.3 : etudiant_bd.c + fichier.c..."
gcc etudiant_bd.c fichier.c -o tp4_43
echo "Exécution 4.3 :"
./tp4_43

# Exercice 4.4 : Calculatrice ligne de commande
echo -e "\nCompilation 4.4 : calcule.c + operator.c..."
gcc calcule.c operator.c -o tp4_44
echo "Exécution 4.4 :"
./tp4_44

# Exercice 4.5 : Factorielle
echo -e "\nCompilation 4.5 : factorielle.c..."
gcc factorielle.c -o tp4_45
echo "Exécution 4.5 :"
./tp4_45

# Exercice 4.6 : Recherche de phrases dans un fichier
echo -e "\nCompilation 4.6 : chercherfichier.c..."
gcc chercherfichier.c -o tp4_46
echo "Exécution 4.6 :"
./tp4_46

# Exercice 4.7 : Liste de couleurs
echo -e "\nCompilation 4.7 : main.c + liste.c..."
gcc main.c liste.c -o tp4_47
echo "Exécution 4.7 :"
./tp4_47

echo -e "\n=== Tous les exercices TP4 ont été compilés et exécutés ==="
