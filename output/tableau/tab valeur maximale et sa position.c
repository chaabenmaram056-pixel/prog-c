#include<stdio.h>
int main(){
int i,N;
int T[50];
printf("Donner la dimension du tableau : ");
        scanf("%d", &N);
 printf("Entrer les %d valeurs du tableau:\n", N);
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int max=T[0];
    int pos=0;
    for(i=1;i<N;i++){
        if (max<T[i])
        {
            max=T[i];
            pos=i;
        }
        
    }
printf("la valeur max=%d et sa position=%d",max,pos);
}
