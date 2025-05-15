# Makefile para o projeto OlaMundo
# Compilador
CC = cl

# Flags de compilação
CFLAGS = /EHsc /W4

# Nome do executável
TARGET = main.exe

# Arquivos fonte
SOURCES = main.cpp Cliente.cpp ContaBancaria.cpp

# Arquivos objeto
OBJECTS = $(SOURCES:.cpp=.obj)

# Regra principal: criar o executável
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) /Fe$(TARGET)

# Regra para compilar cada .cpp em .obj
%.obj: %.cpp
	$(CC) $(CFLAGS) /c $<

# Dependências explícitas dos arquivos .h
main.obj: main.cpp ContaBancaria.h Cliente.h
Cliente.obj: Cliente.cpp Cliente.h
ContaBancaria.obj: ContaBancaria.cpp ContaBancaria.h Cliente.h

# Regra para limpar arquivos gerados
clean:
	del *.obj *.exe

# Regra para executar o programa
run: $(TARGET)
	.\$(TARGET)