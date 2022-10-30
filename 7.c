#include<stdio.h>
int main(){

int i, N, even ;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = N ; i >= 0; i--)
{
  even = ( 2*i );
  printf(" reverse order %d\n", even);
}

return 0;
}