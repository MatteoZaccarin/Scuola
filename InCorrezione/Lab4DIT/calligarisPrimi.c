//Calligaris Gianluca 4'DIT
//Es2

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

 primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; 
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Inserisci almeno un numero come argomento.\n");
        return 1;
    }

    printf("Verifica numeri primi:\n");

    
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]); 
        if (primo(num)) {
            printf("%d è un numero primo.\n", num);
        } else {
            printf("%d non è un numero primo.\n", num);
        }
    }

    return 0;
}

