#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    char ch[20];
    printf("donne un entier : ");
    scanf("%d",&n); 
    snprintf(ch,sizeof(ch),"%d",n);
    if (n<0)
    { printf("-"); 
       for ( i = strlen(ch)-1; i>=1; i--)
       
    {
      printf("%c",ch[i]);
       
    }
    
    }
    else{
    for ( i = strlen(ch)-1; i>=0; i--)
    {
      printf("%c",ch[i]);
       
    }
}
    
return 0;
}

