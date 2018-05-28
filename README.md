# SSL
**Curso:** K2051 2018<br />
**Integrantes:**<br />
*Bieniasz Ezequiel<br />
*Godirio Martin Gabriel<br />
*González Yebra Emanuel<br />
*Lastiesas Agustin<br />
*Siksnys Nadia<br />

## Uso
### Compilación y ejecución
```
$ make run                    
./TablasDeConversion
Fahrenheit a Celsius
  0 � F = -17.8 � C
 20 � F =  -6.7 � C
 40 � F =   4.4 � C
 60 � F =  15.6 � C
 80 � F =  26.7 � C
100 � F =  37.8 � C
120 � F =  48.9 � C
140 � F =  60.0 � C
160 � F =  71.1 � C
180 � F =  82.2 � C
200 � F =  93.3 � C
220 � F = 104.4 � C
240 � F = 115.6 � C
260 � F = 126.7 � C
280 � F = 137.8 � C
300 � F = 148.9 � C


Celsius a Fahrenheit
  0 � C =  32.0 � F
 20 � C =  68.0 � F
 40 � C = 104.0 � F
 60 � C = 140.0 � F
 80 � C = 176.0 � F
100 � C = 212.0 � F
120 � C = 248.0 � F
140 � C = 284.0 � F
160 � C = 320.0 � F
180 � C = 356.0 � F
200 � C = 392.0 � F
220 � C = 428.0 � F
240 � C = 464.0 � F
260 � C = 500.0 � F
280 � C = 536.0 � F
300 � C = 572.0 � F
```

### Tests
```
$ make test
cc -std=c11 -Wall -Wmissing-prototypes   -c -o Conversion.o Conversion.c
cc -std=c11 -Wall -Wmissing-prototypes    ConversionTest.c Conversion.o   -o ConversionTest
./ConversionTest
```

### Limpieza
```
$ ls -1
Conversion.c
Conversion.h
Conversion.o
ConversionTest
ConversionTest.c
Makefile
README.md
TablasDeConversion
TablasDeConversion.c

$ make clean
rm -f Conversion.o TablasDeConversion ConversionTest

$ ls -1
Conversion.c
Conversion.h
ConversionTest.c
Makefile
README.md
TablasDeConversion.c
```
