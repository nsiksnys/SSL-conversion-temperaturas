#include <stdio.h>
#include "Conversion.h"

int main(void) {
	const int	MIN = 0, // límite mínimo tabla
				MAX = 300, // límite máximo
				ESC = 20; // escala salto
	
	int fahr, cel;
	
	printf("Fahrenheit a Celsius\n");
	for (fahr = MIN; fahr <= MAX; fahr = fahr + ESC){
		printf("%3d %c F =%6.1f %c C\n", fahr, 248, celsius(fahr), 248);
	}
	
	printf("\n\nCelsius a Fahrenheit\n");
	for (cel = MIN; cel <= MAX; cel = cel + ESC){
		printf("%3d %c C =%6.1f %c F\n", cel, 248, fahrenheit(cel), 248);
	}
}
