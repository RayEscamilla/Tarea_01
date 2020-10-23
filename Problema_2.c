#include <stdio.h>

int main(){
	int n1,v;
	printf("Ingresa un numero: \n");scanf("%i",&n1);
	v=n1%2;
	if(v==0){
		printf("\nEl numero %i es PAR",n1);
	}
	else{
		printf("\nEl numero %i es IMPAR",n1);
	}
	return 0;	
}
