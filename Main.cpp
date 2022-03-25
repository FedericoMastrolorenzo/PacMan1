#include <iostream>  //Librerias
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int main() {

	//TABLERO DE JUEGO
			// F 	C	//0   1	  2	  3	  4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23																				//23
	string Arr[21][24]={{"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"},
				/*1*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*2*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*3*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*4*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*5*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*6*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*7*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*8*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*9*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*10*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*11*/	{"#"," "," "," "," "," "," "," "," "," "," ","O"," "," "," "," "," "," "," "," "," "," "," ","#"}, //Jugador inicia en pos 11 - 11
				/*12*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*13*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*14*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*15*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*16*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*17*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*18*/	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"},
				/*19*/	{"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"}};
	
	
	
	//imprime tablero primera vez
	int a, b;

	int PosJugadorX=11,PosJugadorY=11;  //Variables de posicion actuales del jugador
	int PosJugadorXAnt = 11, PosJugadorYAnt = 11;	//Variables de posicion anteriores del jugador
	char Movimiento; //Variable de lectura del teclado
	int Puntos = 0;
	while (true) {  //Ejecutar en bucle
		Movimiento = _getch();
		 
		if (Movimiento == 'w') {		//Analisis de movimiento con letra W
			PosJugadorY--;
			if (PosJugadorY >= 0) {
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorYAnt][PosJugadorX] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorYAnt = PosJugadorY;
			}
			if (PosJugadorY < 0) {	//Analisis de teletransporte
				PosJugadorY = 19;
				PosJugadorYAnt = 0;
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorYAnt][PosJugadorX] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorYAnt = PosJugadorY;
			}
		}
		if (Movimiento == 's') {			//Analisis de movimiento con letra S
			PosJugadorY++;
			if (PosJugadorY <= 19) {
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorYAnt][PosJugadorX] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorYAnt = PosJugadorY;
			}
			if (PosJugadorY > 19) {      //Analisis de teletransporte
				PosJugadorY =  0;
				PosJugadorYAnt = 19;
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorYAnt][PosJugadorX] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorYAnt = PosJugadorY;
			}
		}
		if (Movimiento == 'a') {					//Analisis de movimiento con letra A
			PosJugadorX--;
			if (PosJugadorX >= 0) {
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorY][PosJugadorXAnt] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorXAnt = PosJugadorX;
			}
			if (PosJugadorX < 0) {  //Analisis de teletransporte
				PosJugadorX = 23;
				PosJugadorXAnt = 0;
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorY][PosJugadorXAnt] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorXAnt = PosJugadorX;

			}
		}
		if (Movimiento == 'd') {					//Analisis de movimiento con letra D
			PosJugadorX++;
			if (PosJugadorX <= 23) {	
				if (Arr[PosJugadorY][PosJugadorX] == "#") { //Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorY][PosJugadorXAnt] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorXAnt = PosJugadorX;
			}
			if (PosJugadorX > 23) {  //Analisis de teletransporte
				PosJugadorX = 0;
				PosJugadorXAnt = 23;
				if (Arr[PosJugadorY][PosJugadorX] == "#") {//Analisis de puntos
					Puntos++;
				}
				Arr[PosJugadorY][PosJugadorXAnt] = " ";
				Arr[PosJugadorY][PosJugadorX] = "O";
				PosJugadorXAnt = PosJugadorX;
			}
		}
		//IMPRIMIR TABLERO
		system("cls");
		for (a = 0; a <= 19; a++) {
			for (b = 0; b <= 23; b++) {
				cout << Arr[a][b] << " ";
			}
			cout << endl;
		}
		if (Puntos == 84) {				//Al recoger todos los puntos se gana la partida
			cout << "¡¡¡¡¡¡PARTIDA GANADA!!!!!!";
			Sleep(3);
			exit(0);
		}
		cout << PosJugadorX << " " << PosJugadorY <<endl;   //Muestreo de ejes X e Y de la grilla
		cout << "Puntos:" << Puntos;  //Contador de Puntos

	}

}