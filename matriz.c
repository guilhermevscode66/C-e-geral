# include <stdio.h>
#define nl 10
#define nc 8
void multiplica(int mat[nl][nc], int i, int j)
{
for(i=0; i<nl; i++)
{
for(j=0; j<nc; j++)
{
mat[i][j]=2;
mat[i][j]=mat[i][j]*2;
printf("%d", mat[i][j]);
}

}
}
int main()
{
int matriz2[nl][nc];
int i, j=0;
for(i=0; i<nl; i++){
for(j=0; j<nc; j++){
multiplica(matriz2, i, j);

printf("\n");
}}
}
