CC = g++

CFLAGS = -g -Wall

TARGET = CalculusCalculator

all: calculatorMain.o Derivative.o
	$(CC) $(CFLAGS) -o CalculusCalculator calculatorMain.o Derivative.o

window: calculatorMain.o Derivative.o
	$(CC) $(CFLAGS) -o CalculusCalculator.exe calculatorMain.o Derivative.o

calculatorMain.o: calculatorMain.cpp Derivative.h
	$(CC) $(CFLAGS) -c calculatorMain.cpp

Derivative.o: Derivative.h

clean:
	$(RM) CalculusCalculator calculatorMain.o Derivative.o 