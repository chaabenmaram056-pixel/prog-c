#include<stdio.h>

int taille(){
        int n;
do{
    printf("donner la taille du tableau: ");
    scanf("%d",&n);
    }while((0<n)&&(n>=50));
    return n;
}

void remplir(int T[50],int n){
    int i;
   printf("donner les %d valeurs du tableau\n",n);
    for(i=0;i<n;i++){
        printf("donnerT[%d]= ",i);
        scanf("%d",&T[i]);
    }
}
int trie(int T[50],int n){
    int i;
    for(i=0;i<n-1;i++){
        if(T[i]>T[i+1]){
            return 1;
        }
            else {
            return 0;
            }
        }
    }
int affichage(int T[50],int n){
    if(trie(T,n)){
    printf("le tableau est trie\n");
    }
    else {
     printf("le tableau n'est pas trie\n");
    }
    return 0;
}

int main(){
    int i,n;
    int T[50];
   n= taille();
    remplir(T,n);
    trie(T,n);
affichage(T,n);
return 0;
}