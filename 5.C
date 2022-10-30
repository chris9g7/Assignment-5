#include<stdio.h>
int main(){

int i, N, odd ;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = N ; i > 0; i--)
{
  odd = (2*i + 1);
  printf("reverse order %d\n", odd);
}

return 0;
}