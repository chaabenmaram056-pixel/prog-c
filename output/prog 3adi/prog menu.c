#include<stdio.h>
int menu(int n){
    
printf("****Menu****\n");    
printf("~Taper 1 pour calculer la somme\n");
printf("~Taper 2 pour calculer la  soustraction\n");
printf("~Taper 3 pour calculer la division\n");
printf("~Taper 4 pour calculer la multiplication\n");
printf("votre choix:\n");
scanf("%d",&n);
return n;
}
int somme(int a,int b){
return a+b;
}
int diff(int a,int b){
return a-b;
}
int divv(int a,int b){
return a/b;
}
int mul(int a,int b){
return a*b;
}
int main(){
    int n;
    int a,b;
    printf("entrer le premier entier: \n");
    scanf("%d",&a);
    printf("entrer le deuxieme entier: \n");
    scanf("%d",&b);
n=menu(n);
    if(n==1)
    {
      printf("somme=%d\n",somme(a,b));
    }
   else if (n==2)
    {
       printf("la difference=%d\n",diff(a,b));
    }
   else if (n==3)
    {
   if(b!=0)
       printf("le reste=%d\n",divv(a,b));
    else 
    printf("erreur division par zero\n");
}
   else if (n==4)
    {
       printf("multiplication=%d\n",mul(a,b));
    
   return 0;
}
}