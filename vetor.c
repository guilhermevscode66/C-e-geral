#include <stdio.h>
int main()
{
int vetor[5];
int i;

for(i=0; i<5; i++)

{
if(vetor[i]<=5){
vetor[i]=i+1;
}
}
printf("%d", vetor[i]);
}
