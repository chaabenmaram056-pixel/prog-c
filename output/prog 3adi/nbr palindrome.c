#include<stdio.h>
#include<string.h>
int main(){
    int n,i,m;
    char ch[20];
    printf("donne un entier : ");
    scanf("%d",&n); 
    snprintf(ch,sizeof(ch),"%d",n);
    if (ch[0]=="-")
    { 
        
        for ( i =strlen(ch-1); i>=1; i--)
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
  m=atoi(ch[i]);
if (m==n)
{
   printf("le nombre %d est palindrome",n);
}
else{
  printf("le nombre %d n'est pa palindrome",n);
} 
return 0;
}
