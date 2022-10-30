#include<stdio.h>
int main(){

int i, N, odd ;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = 0 ; i < N; i++)
{
  odd = (2*i + 1);
  printf("%d\n", odd);
}

return 0;
}