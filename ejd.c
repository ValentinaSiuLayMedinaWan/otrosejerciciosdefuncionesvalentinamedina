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
	n=5;
	piramide(n);
	return 0;
}

