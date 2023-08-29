#include <stdio.h>
#include <stdlib.h>
void piramide(int n){
	int i,k;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Ingresar el numero de pisos de la piramide\n");
	scanf("%d",&n);
	piramide(n);
	return 0;
}

