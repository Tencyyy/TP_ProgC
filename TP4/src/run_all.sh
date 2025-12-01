#!/bin/bash
# run_all.sh
# Compile et exécute tous les exercices du TP4

echo "Compilation des fichiers pour TP4..."
gcc -o tp4 main.c operator.c fichier.c liste.c

if [ $? -eq 0 ]; then
    echo "Compilation réussie !"
    echo "Exécution du programme..."
    ./tp4
else
    echo "Erreur de compilation."
fi
