#include<stdio.h>
int main(){

int i, N, even ;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = 0 ; i < N ; i++)
{
  even = ( 2*i );
  printf("%d\n", even);
}

return 0;
}