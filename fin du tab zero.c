#include<stdio.h>
int main(){
int i,N;
int zero;
int T[50];
printf("donner la taille du tableau: ");
scanf("%d",&N);
printf("donner les %d valeurs du tableau: ",N);
for(i=0;i<N;i++){
    printf("T[%d]= ",i);
    scanf("%d",&T[i]);
}    
    while (T[i-1]=0)   
{
    T[zero]=T[i];
    T[i]=T[i-1];

     i++;    

}

for(i=0;i<=N;i++){
   
    printf("%d|",T[i]);
}
return 0;
}
