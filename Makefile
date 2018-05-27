CFLAGS = -std=c11 -Wall -Wmissing-prototypes
BIN = TablasDeConversion
SRC = TablasDeConversion.c Conversion.c Conversion.h
OBJ = TablasDeConversion.o TablasDeConversion.o Conversion.o
RM = rm -f

.PHONY: all clean run test
all: $(BIN)
run: $(BIN)
	 ./$(BIN)
clean: 
	$(RM) $(OBJ) $(BIN)

$(BIN): Conversion.o
Conversion.o: Conversion.h
