#include <stdio.h>
int op(int a){
	int b;
	b=(a*a)-(a*2);
	return b;
}
int main() {
	int a;
		printf("ingrese un numero\n");
		scanf("%d",&a);
		printf("resultado:%d\n",op(a));
	return 0;
}

