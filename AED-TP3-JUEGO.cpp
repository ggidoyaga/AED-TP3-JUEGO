/* AED-TP3-JUEGO
* Gustavo Gaston Idoyaga
* 20150429
*/

#include <iostream>

using namespace std;

int main () {
	cout << "Ingrese el tema por el cual usted quiere responder. Ingrese la parte numérica de las opciones.\n";
	cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	int tema; 
	cin >> tema;
	while (tema<0 or tema>3){
  		cout << "Ingrese nuevamente el tema.\n";
  		cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
  		cin >> tema;
  		if (tema==0){
			return 0;
  		}
	}
	int mat, pts;
	char hist[10], geo[10], rep;
	pts=0;
	while (tema>0 and tema<4){
		if (tema==1){
			//preg de matematicas
			while (tema==1){
				cout << endl << "Calcular 12+25.\n";
				cin >> mat;
				if (mat==37){
					cout << "Respuesta correcta.\n";
					pts=pts+2;
				} else {
					cout << "Respuesta incorrecta.\n";
					pts--;
				}
				cout << "Calcular 15-7.\n";
				cin >> mat;
				if (mat==8){
					cout << "Respuesta correcta.\n";
					pts=pts+2;
				} else {
					cout << "Respuesta incorrecta.\n";
					pts--;
				}
				cout << "Calcular 6x7.\n";
				cin >> mat;
				if (mat==42){
					cout << "Respuesta correcta.\n";
					pts=pts+2;
				} else {
					cout << "Respuesta incorrecta.\n";
					pts--;
				}
				cout << "Calcular 144/12.\n";
				cin >> mat;
				if (mat==12){
					cout << "Respuesta correcta.\n";
					pts=pts+2;
				} else {
					cout << "Respuesta incorrecta.\n";
					pts--;
				}
				cout << "Calcular 15+6x3-12/2.\n";
				cin >> mat;
				if (mat==27){
					cout << "Respuesta correcta.\n";
					pts=pts+2;
					cout << endl << "¿Quiere repetir las preguntas del mismo tema? (S/N). Para salir marque '0'.\n";
					cin >> rep;
					if (rep==0){
						return 0;
					}
					if (rep=='n' or rep=='N'){
						cout << "Su puntaje hasta ahora es: " << pts;
						while (tema<0 and tema>3){
	  						cout << "Ingrese nuevamente el tema.\n";
	  						cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	  						cin >> tema;
	  						if (tema==0){
								return 0;
	  						}
						}
					}
				} else {
					cout << "Respuesta incorrecta.\n";
					pts--;
					cout << endl << "¿Quiere repetir las preguntas del mismo tema? (S/N). Para salir marque '0'.\n";
					cin >> rep;
					if (rep==0){
						return 0;
					}
					if (rep=='n' or rep=='N'){
						cout << "Su puntaje hasta ahora es: " << pts;
						while (tema<0 and tema>3){
	  						cout << "Ingrese nuevamente el tema.\n";
	  						cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	  						cin >> tema;
	  						if (tema==0){
								return 0;
	  						}
						}
					}
				}
			}
		} else {
			if (tema==2){
				//preguntas de historia
				while (tema==2){
					cout << endl << "¿Qué año se declaró la independencia en Argentina? (1810/1816/1850).\n";
					cin >> mat;
					if (mat==1816){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Cuántos días festivos hay en España? (17/11/14).\n";
					cin >> mat;
					if (mat==14){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Cuántos edificios se derrumbaron el 11-S?.\n";
					cin >> mat;
					if (mat==2){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Quién asume la presidencia en 1946? (Peron/Duhalde/Illia).\n";
					cin >> hist;
					if (hist=="peron" or hist=="PERON"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿A qué presidente le tocó gobernar durante la primera guerra mundial? (Yrigoyen/Derqui/Frondizi).\n";
					cin >> hist;
					if (hist=="yrigoyen" or hist=="YRIGOYEN"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
						cout << endl << "¿Quiere repetir las preguntas del mismo tiema? (S/N). Para salir marque '0'.\n";
						cin >> rep;
						if (rep==0){
							return 0;
						}
						if (rep=='n' or rep=='N'){
							cout << "Su puntaje hasta ahora es: " << pts;
							while (tema<0 and tema>3){
	  							cout << "Ingrese nuevamente el tema.\n";
	  							cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	  							cin >> tema;
	  							if (tema==0){
									return 0;
	  							}
							}
						}
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
						cout << endl << "¿Quiere repetir las preguntas del mismo tiema? (S/N). Para salir marque '0'.\n";
						cin >> rep;
						if (rep==0){
							return 0;
						}
						if (rep=='n' or rep=='N'){
							cout << "Su puntaje hasta ahora es: " << pts;
							while (tema<0 and tema>3){
	  							cout << "Ingrese nuevamente el tema.\n";
	  							cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	  							cin >> tema;
	  							if (tema==0){
									return 0;
	  							}	
							}
						}
					}
				}
			} else {
				//preg de geografia
				while (tema==3){	
					cout << endl << "¿Cual es la capital de Salta?.\n";
					cin >> geo;
					if (geo=="salta" or geo=="SALTA"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Cual es la capital de Entre Ríos.\n";
					cin >> geo;
					if (geo=="parana" or geo=="PARANA"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Cual es la capital de Brasil?.\n";
					cin >> geo;
					if (geo=="brasilia" or geo=="BRASILIA"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Cual es la capital de Jamaica?.\n";
					cin >> geo;
					if (geo=="kingston" or geo=="KINGSTON"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
					}
					cout << "¿Cual es la capital de Santa Lucía?.\n";
					cin >> geo;
					if (geo=="castries" or geo=="CASTRIES"){
						cout << "Respuesta correcta.\n";
						pts=pts+2;
						cout << endl << "¿Quiere repetir las preguntas del mismo tiema? (S/N). Para salir marque '0'.\n";
						cin >> rep;
						if (rep==0){
							return 0;
						}
						if (rep=='n' or rep=='N'){
							cout << "Su puntaje hasta ahora es: " << pts;
							while (tema<0 and tema>3){
	  							cout << "Ingrese nuevamente el tema.\n";
	  							cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	  							cin >> tema;
	  							if (tema==0){
									return 0;
	  							}
							}
						}
					} else {
						cout << "Respuesta incorrecta.\n";
						pts--;
						cout << endl << "¿Quiere repetir las preguntas del mismo tiema? (S/N). Para salir marque '0'.\n";
						cin >> rep;
						if (rep==0){
							return 0;
						}
						if (rep=='n' or rep=='N'){
							cout << "Su puntaje hasta ahora es: " << pts;
							while (tema<0 and tema>3){
	  							cout << "Ingrese nuevamente el tema.\n";
	  							cout << "Temas: Matemática (1) / Historia (2) / Geografía (3) / Salir (0).\n";
	  							cin >> tema;
	  							if (tema==0){
									return 0;
	  							}
							}
						}
					}
				}
			}
		}
	}
}
