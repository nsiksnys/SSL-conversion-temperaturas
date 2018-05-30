#include <stdio.h>
#include "Conversion.h"

void printTablas(void);
void printTablaFahrenheit(void);
void printTablaCelcius(void);
void printFilas(int, int, double(*f)(int));
void printFila(int, int, int, double(*f)(int));

const int	MIN = 0, // limite minimo tabla
			MAX = 300, // limite maximo tabla
			ESC = 20; // escala salto

int main(void) {
	
	
	printTablas();

	return 0;
}



void printTablas(){

    printf("Fahrenheit a Celsius\n");
	printTablaFahrenheit();

	printf("\n\nCelsius a Fahrenheit\n");
	printTablaCelcius();

}

void printTablaFahrenheit(){

	
	int f=70;
	int c=67; 

	printFilas(c,f,&Celsius);
}

void printTablaCelcius(){

	
	int f=70;
	int c=67;

	printFilas(f,c,&Fahrenheit);
}

void printFilas(int a,int b,double(*f)(int)){

	int x;

	for(x = MIN; x <= MAX; x = x + ESC){
		printFila(a,b,x,&(*f));
	}
}


void printFila(int a,int b,int x, double(*f)(int)){

	printf("%3d %c° =%6.1f %c°\n", x, a,(*f)(x), b);
}

