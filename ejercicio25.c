#include <stdio.h>

int main(){
	
	int year=0;
	
	printf("Introduzca un a�o: ");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=0 || year%400==0){
		
		
		printf("El a�o introducido es bisiesto.");
	}
	else{
		printf("El a�o introducido no es bisiesto");
	}
}
