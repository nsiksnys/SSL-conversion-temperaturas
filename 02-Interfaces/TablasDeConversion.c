#include <stdio.h>
#include "Conversion.h"

int main(void) {
	const int	MIN = 0, // límite mínimo tabla
				MAX = 300, // límite máximo
				ESC = 20; // escala salto
	
	int fahr, cel;
	
	printf("Fahrenheit a Celsius\n");
	for (fahr = MIN; fahr <= MAX; fahr = fahr + ESC){
		printf("%3d F° =%6.1f C°\n", fahr, Celsius(fahr));
	}
	
	printf("\n\nCelsius a Fahrenheit\n");
	for (cel = MIN; cel <= MAX; cel = cel + ESC){
		printf("%3d C° =%6.1f F°\n", cel, Fahrenheit(cel));
	}
}
