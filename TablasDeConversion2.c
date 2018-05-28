#include <stdio.h>
#include "Conversion.h"

void PrintTablas (int MIN, int MAX, int ESC);
void PrintTabalaFahrenheit(int MIN, int MAX, int ESC);
void PrintTabalaCelcius(int MIN, int MAX, int c);
void PrintFilas (int MIN,int MAX,int ESC,int a,int b,int x,double(*f)(int));
void PrintFila (int a,int b,int x, double(*f)(int));


int main(void) {
	const int	MIN = 0, // límite mínimo tabla
				MAX = 300, // límite máximo
				ESC = 20; // escala salto
	
	PrintTablas(MIN,MAX,ESC);

	return 0;
}



void PrintTablas (int MIN, int MAX, int ESC){

    printf("Fahrenheit a Celsius\n");
	PrintTabalaFahrenheit (MIN,MAX,ESC);

	printf("\n\nCelsius a Fahrenheit\n");
	PrintTabalaCelcius (MIN,MAX,ESC);

}

void PrintTabalaFahrenheit(int MIN, int MAX, int ESC){

	int fahr;
	int f=70;
	int c=67; 

	PrintFilas(MIN,MAX,ESC,c,f,fahr,&Celsius);
}

void PrintTabalaCelcius (int MIN, int MAX, int ESC){

	int cel;
	int f=70;
	int c=67;

	PrintFilas (MIN,MAX,ESC,f,c,cel,&Fahrenheit);
}

void PrintFilas (int MIN,int MAX,int ESC,int a,int b,int x,double(*f)(int)){

	for (x = MIN; x <= MAX; x = x + ESC){
		PrintFila(a,b,x,&(*f));
	}
}


void PrintFila(int a,int b,int x, double(*f)(int)){

	printf("%3d %c° =%6.1f %c°\n", x, a, (*f)(x), b);
}

