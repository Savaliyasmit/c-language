#include<stdio.h>

void Fibo(int m)
{

static int m1=0,m2=1,m3;

if(m>0){

m3 = m1 + m2;

m1 = m2;

m2 = m3;

printf("%d" ,m3);

Fibo(m-1);

}

}

int main(){

int m;

printf("entre elements:");

scanf("%d",&m);

printf("The Fibonacci Series will be: ");

printf(" %d%d ",0,1 );

Fibo(m-2); 

return 0;

}