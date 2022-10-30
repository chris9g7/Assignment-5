#include<stdio.h>
int main(){

int i, N, cube;

printf("enter the number N\n");
scanf("%d", &N);

for ( i = 1 ; i <= N; i++)
{
  cube =  i*i*i;
  printf("%d\n", cube);
}

return 0;
}