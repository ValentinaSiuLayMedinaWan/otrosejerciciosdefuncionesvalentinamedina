#include <stdio.h>
void dia(int a){
	switch (a){
	case 1:
		printf("mes: enero, dias: 31\n");
		break;
	case 2:
		printf("mes: febrero, dias: 28/29\n");
		break;
	case 3:
		printf("mes: marzo, dias: 31\n");
		break;
	case 4:
		printf("mes: abril, dias: 30\n");
		break;
	case 5:
		printf("mes: mayo, dias: 31\n");
		break;
	case 6:
		printf("mes: junio, dias: 30\n");
		break;
	case 7:
		printf("mes: julio, dias: 31\n");
		break;
	case 8:
		printf("mes: agosto, dias: 31\n");
		break;
	case 9:
		printf("mes: septiembre, dias: 30\n");
		break;
	case 10:
		printf("mes: octubre, dias: 31\n");
		break;
	case 11:
		printf("mes: noviembre, dias: 30\n");
		break;
	case 12:
		printf("mes: diciembre, dias: 31\n");
		break;
	}
}
int main() {
	int a;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	dia(a);
	return 0;
}

