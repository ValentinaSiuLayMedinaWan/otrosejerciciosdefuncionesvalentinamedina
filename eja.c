#include <stdio.h>
int suma(int a, int b){
	int s;
	s=a+b;
	return s;
}
void resta(int a,int b){
	int r;
	r=a-b;
	printf("el resultado de la resta es:%d\n",r);
}
float divi(int a,int b){
	float d,c,e;
	c=a;
	e=b;
	d=c/e;
	return d;
}
int main() {
	int a,b,c,m;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	printf("ingrese otro numero\n");
	scanf("%d",&b);
	do{
		printf("\n0. CERRAR PROGRAMA\n");
		printf("1. SUMAR\n");
		printf("2. RESTAR\n");
		printf("3. MULTIPLICAR\n");
		printf("4. DIVIDIR\n");
		scanf("%d",&c);
		switch(c){
		case 1:
			printf("el resultado de la suma es:%d\n",suma(a,b));
			break;
		case 2:
			resta(a,b);
			break;
		case 3:
			m=a*b;
			printf("el resultado de la multiplicacion es:%d\n",m);
			break;
		case 4:
			printf("el resultado de la division es:%.2f\n",divi(a,b));
			break;
		}
	}while(c!=0);
	return 0;
}

