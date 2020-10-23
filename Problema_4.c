#include <stdio.h>
#include <math.h>

int main(){
	float x1,x2,z,x;
	int a,b,c;
	printf("Introduce el valor de a\n");
	scanf("%i",&a);
		printf("Introduce el valor de b\n");
	scanf("%i",&b);
		printf("Introduce el valor de c\n");
	scanf("%i",&c);
	z=b*b-4*a*c;
	if(z==0){
		x=(-b+(sqrt(z)))/(2*a);
		printf("El resultado de la formula es %i",x);
	}
	else if(z<0){
		printf("No es posible hacer una raiz negativa");
	}
	else{
		x1=(-b+(sqrt(z)))/(2*a);
		x2=(-b-(sqrt(z)))/(2*a);
		printf("\nx1= %f\nx2= %f",x1,x2);
	}
	return 0;
	}
	
