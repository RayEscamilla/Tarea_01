#include <stdio.h>

int main(){
	int r;
	float a,p;
	printf("Introduce el radio del ciculo\n");scanf("%i",&r);
	a=3.1416*(r*r);
	p=(2*3.1416)*r;
	printf("\nEl area del circulo es de: %.3f",a);
	printf("\nEl perimetro del circulo es de: %.3f",p);
	return 0;
}
	
