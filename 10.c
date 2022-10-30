#include<stdio.h>
int main(){

int i, N, table;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = 1 ; i < 11 ; i++)
{
  table =  N*i;
  printf("%d * %d = %d\n", N, i, table);
}

return 0;
}