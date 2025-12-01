#!/bin/bash

echo "Compilation de tous les fichiers .c..."
gcc *.c -o programme

if [ $? -eq 0 ]; then
    echo ""
    echo "Exécution du programme :"
    echo "--------------------------"
    ./programme
else
    echo "Erreur de compilation."
fi
