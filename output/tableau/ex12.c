//Écrire une procédure qui remplace les nombres négatifs par 0 dans un tableau.
#include <stdio.h>
int taille(){
    int n;
    do
    {
        printf("donner le taille du tableau: ");
        scanf("%d",&n);
}while (n>0 && n>60);
return n;
    } 
  void remplir(int T[60], int n) {
    int i;
    printf("donner les %d valeurs du tableau : \n", n);
    for (i = 0; i < n; i++) {
        printf("donner T[%d] = ", i);
        scanf("%d", &T[i]);
    }
}
  int remplace(int T[60],int n){
    int i;
    for ( i = 0; i <n; i++)
    {
       if (T[i]<0)
       {
        T[i]=0;
       }
       printf("%d|",T[i]); 
    }
   }

   
int main(){
    int n, T[60];
    n=taille();
    remplir(T,n);
    remplace(T,n);

return 0;
}