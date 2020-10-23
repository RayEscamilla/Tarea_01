#include <stdio.h>

int main(){
	float a,b;
	printf("Introduzca dos valores para hacer la division\n");scanf("%f %f",&a,&b);
	if(b==0){
		printf("No se puede realizar la division porque el demonidar es 0");
	}
		else{
			printf("El resultado de la division es de: %.3f",(float)a/b);
		}
		return 0;
	}
	
