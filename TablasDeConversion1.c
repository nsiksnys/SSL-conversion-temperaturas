#include <stdio.h>
#include "Conversion.h"
#include "Conversion.c"

void PrintTablas(int a,int b,int c){

     	PrintTablaFahrenheit(a,b,c);
     	PrintTablaCelsius(a,b,c);
}

void PrintTablaCelsius(int a,int b,int c){

			int Num;
          	printf("Fahrenheit a Celsius\n");
			PrintFilas(a,b,c,Num);
          	
}

void PrintTablaFahrenheit(int a,int b,int c){

			int Num;
	      	printf("\n\nCelsius a Fahrenheit\n");
	      	PrintFilas(a,b,c,Num);
	      	
}	

void PrintFilas(int a,int b,int c, int Num){

			for (Num = a; Num <= b; Num = Num + c){
          	PrintFila(Num);
}
}


void PrintFila(int d,funcion(d)){

           		printf("%3d F° =%6.1f C°\n", a, funcion(a));
}

 
int main(void) {
	const int	MIN = 0, // límite mínimo tabla
				MAX = 300, // límite máximo
				ESC = 20; // escala salto
	
	PrintTablas ();
	  
}


