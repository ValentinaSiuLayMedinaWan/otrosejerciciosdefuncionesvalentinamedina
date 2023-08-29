#include <stdio.h>
void des4(float p){
	float pd;
	pd=(p*96)/100;
	printf("precio a pagar:%.2f",pd);
}
	void des10(float p){
		float pd;
		pd=(p*90)/100;
		printf("precio a pagar:%.2f",pd);
	}	
int main() {
	int u;
	float p;
	printf("ingrese las unidades\n");
	scanf("%d",&u);
	printf("ingrese el precio\n");
	scanf("%f",&p);
	if (u>12)
		des10(p);
	else
		if (u>6)
			des4(p);
		else
			printf("precio a pagar:%f",p);
	return 0;
}

