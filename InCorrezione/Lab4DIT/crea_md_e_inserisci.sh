#!/bin/bash

# Cicla sui file con estensione .c
for file in *.c; do
    # Estrai il cognome dalla prima parte del nome del file
    cognome=$(echo "$file" | sed -E 's/(Media|Primi|Bit|Gruppi)\.c$//')

    # Nome del file markdown corrispondente
    md_file="${cognome}.md"

    # Se il file .md non esiste, crealo e aggiungi un'intestazione iniziale
    if [ ! -f "$md_file" ]; then
        echo "# File di $cognome" > "$md_file"
    fi

    # Aggiungi un'intestazione per il file corrente
    echo -e "\n## Contenuto di $file\n" >> "$md_file"
    
    # Aggiungi il contenuto del file .c al file .md
    cat "$file" >> "$md_file"
done

echo "Operazione completata. File .md creati o aggiornati con il contenuto dei file .c."
