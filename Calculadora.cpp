#include <iostream> 
#include <stdlib.h>   

using namespace std;

void suma(float x, float y);
void resta(float x, float y);
void multiplicacion(float x, float y);
void division(float x, float y);
void datos();
float num1, num2;
int main() {

	int opcion;
	do {
		cout << "\n                                                     * Menu de opciones * \n" << endl;
		cout << "1. suma" << endl;
		cout << "2. resta " << endl;
		cout << "3. multiplicacion" << endl;
		cout << "4. division " << endl;
		cout << "5. Salir\n" << endl;
		cout << "Ingresa una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1: datos();
			suma(num1, num2);
			system("pause");
			break;
		case 2:datos();
			resta(num1, num2);
			system("pause");
			break;
		case 3:datos();
			multiplicacion(num1, num2);
			system("pause");
			break;
		case 4:datos();
			division(num1, num2);
			system("pause");
			break;
		case 5:
		default:
			cout << "Opcion no valida, verifique su opcion en el menu" << endl;
			system("pause");
			break;
		}
		system("cls");
	} while (opcion <= 5);
}
void datos() {
	cout << "Ingresa primer numero:";
	cin >> num1;
	cout << "Ingresa segundo numero:";
	cin >> num2;
}

void suma(float x, float y) {
	float suma = x + y;
	cout << "El resultado es: " << suma << endl;
}
void resta(float x, float y) {
	float resta = x - y;
	cout << "El resultado es: " << resta << endl;
}
	void multiplicacion(float x, float y) {
		float multiplicacion = x * y;
		cout << "El resultado es: " << multiplicacion << endl;
	}
	void division(float x, float y) {
		if (y == 0) {
			cout << "No se puede dividir" << endl;
		}
		else {
			float division = x / y;
			cout << "El resultado es: " << division << endl;
		}
	}