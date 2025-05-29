// ArbolG3_01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

/* ArbolG3_01.c++
Programa: Variante de la creacion de un arbol de grado 3
Compilo y/o Transcribio: Pérez Nava Yael Mauricio
Fecha de Compilacion: 29/05/25

*/

#include <stdio.h>
#include <cstdlib>
#include <iostream> // Añadido para std::cin

struct NODO
{
	int DATO;
	struct NODO* IZQ;
	struct NODO* CENTRO;
	struct NODO* DCHO;
};

int aux;
struct NODO* PADRE, * N = NULL, * HIJOI = NULL, * HIJOC = NULL, * HIJOD = NULL;

int main()
{
	N = new(NODO);
	printf("Dame le valor del nodo Padre: \n ");
	while (!(std::cin >> aux)) {
		std::cout << "Entrada no válida. Intenta de nuevo: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	N->DATO = aux;
	N->IZQ = NULL;
	N->CENTRO = NULL;
	N->DCHO = NULL;
	PADRE = N;

	//Nodo hijo izquierdo
	N = new(NODO);
	printf("Dame el valor del nodo hijo izquierdo: \n ");
	while (!(std::cin >> aux)) {
		std::cout << "Entrada no válida. Intenta de nuevo: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	N->DATO = aux;
	N->IZQ = NULL;
	N->CENTRO = NULL;
	N->DCHO = NULL;
	PADRE->IZQ = N;
	HIJOI = N;

	//Nodo hijo centro
	N = new(NODO);
	printf("Dame el valor del nodo hijo centro: \n ");
	while (!(std::cin >> aux)) {
		std::cout << "Entrada no válida. Intenta de nuevo: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	N->DATO = aux;
	N->IZQ = NULL;
	N->CENTRO = NULL;
	N->DCHO = NULL;
	PADRE->CENTRO = N;
	HIJOC = N;

	//Nodo hijo derecho
	N = new(NODO);
	printf("Dame el valor del nodo hijo derecho: \n ");
	while (!(std::cin >> aux)) {
		std::cout << "Entrada no válida. Intenta de nuevo: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	N->DATO = aux;
	N->IZQ = NULL;
	N->CENTRO = NULL;
	N->DCHO = NULL;
	PADRE->DCHO = N;
	HIJOD = N;

	printf("El nodo padre tiene el valor: %d\n", PADRE->DATO);
	printf("El nodo hijo izquierdo tiene el valor: %d\n", HIJOI->DATO);
	printf("El nodo hijo centro tiene el valor: %d\n", HIJOC->DATO);
	printf("El nodo hijo derecho tiene el valor: %d\n", HIJOD->DATO);

	printf("\n\t\t\t %d\n", PADRE->DATO);
	printf("\n\t\t %d", HIJOI->DATO);
	printf("\t %d", HIJOC->DATO);
	printf("\t %d\n", HIJOD->DATO);
	system("pause");

	delete PADRE;
	delete N;
	delete HIJOI;
	delete HIJOC;
	delete HIJOD;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
