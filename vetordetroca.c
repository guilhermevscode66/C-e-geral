#include <stdio.h>
int main()
{
#define max 5
int vetor[max], vetor2[max], copia[max*2];
int i;
for(i=0; i<max; i++)
{
copia[i]=vetor[i];
copia[i]=vetor2[i];

}
printf("%d", vetor[i]);
printf("\n");
printf("%d", vetor2[i]);
printf("\n");
printf("%d", copia[i]);
printf("\n");
}
