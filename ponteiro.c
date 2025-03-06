# include <stdio.h>
void main(){
int *s, *p;
int a;
int b;
s=&a;
p=&b;
printf("%p\n", (void *)&a);
printf("%p\n", (void *)&b);
}

