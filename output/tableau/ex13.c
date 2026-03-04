//Écrire une fonction qui reçoit une matrice et retourne la somme de sa diagonale principale.
#include<stdio.h>
int taille(int n,int m,int T[50][50]){
    do
    {
       printf("donner le nombres de lignes :\n");
 scanf("%d",&n);
 printf("donner les nombres du colones: \n ");
 scanf("%d",m);
    } while ((n>0 && n>50) && (m>0 && m<50));
    
 
 return n ,m;   
}
void remplir(int n,int m,int T[50],[50]){
    int i,int j;
    printf("veuiller saisir les elements de matrice T\n");
    for ( i = 0; i <n; i++)
    {
       for ( j = 0; j <m; j++)
       {
        printf("donner T[%d][%d]= ",i,j);
        scanf("%d",T[i][j]);
       }
       
    }   
}
int diagonale(int n,intm,int T[50][50]){
    int s,i,j;

return s;    
}
void afichage (int s){
    printf("la somme de sa diagonale principale = %d",s);
}
int main(){
    int n,m,T[50][50];
    int s;
   n,m= taille();
    remplir(n,m,T);
    s=diagonale(n,m,T);
    afichage(s);
    return 0;
}