//Écrire une fonction qui retourne le nombre de nombres pairs dans un tableau.
#include <stdio.h>

int taille() {
    int n;
    do {
        printf("donner la taille du tableau : ");
        scanf("%d", &n);
    } while (n > 0 && n > 50);
    return n;
}

void remplir(int T[50], int n) {
    int i;
    printf("donner les %d valeurs du tableau : \n", n);
    for (i = 0; i < n; i++) {
        printf("donner T[%d] = ", i);
        scanf("%d", &T[i]);
    }
}

int paire(int T[50], int n) {
    int i, p = 0;
    for (i = 0; i < n; i++) {
        if (T[i] % 2 == 0)
            p+=1;
    }
    return p;
}

void affichage(int p) {
    printf("le nombre de nombres pairs dans le tableau est : %d\n", p);
}

int main() {
    int n, T[50], p;
    n = taille();
    remplir(T, n);
    p = paire(T, n);
    affichage(p);
    return 0;
}