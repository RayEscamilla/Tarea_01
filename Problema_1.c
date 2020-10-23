#include <stdio.h>

int main(){
	int a,b;
	printf("Inserte dos valores: \n");scanf("%i %i",&a,&b);
	if(a>b){
		printf("El numero %i es mayor que %i",a,b);
	}
		else{
			printf("El numero %i es mayor que %i",b,a);	
		}
		return 0;
	}
