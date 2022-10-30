#include<stdio.h>
int main(){

int i, N ,sqr;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = 1 ; i <= N; i++)
{
  sqr =  i*i;
  printf("%d^2 = %d \n", i,sqr);
}

return 0;
}