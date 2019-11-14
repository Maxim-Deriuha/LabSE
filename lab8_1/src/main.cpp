/**
 * @file main.cpp
 * Реализация функции main()
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

//#include "../../debug_new/src/debug_new.h"
#include "FileStorage.h"
#include "StorageInterface.h"
#include "PowerSupply.h"
#include "BaseScreen.h"
#include "Battery.h"
#include "PowerSupplyScreen.h"
#include "PowerSupplyScreenGraph.h"
#include "BatteryScreen.h"
#include "AccumulatorVector.h"
#include "AccumulatorCounter.h"

#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

/**
 * Реализация функции main()
 * @return 0
 */
int main() {

	// Новый экземпляр класса AccumulatorVector
	AccumulatorVector vector;

	// Новый экземпляр класса Battery содержит конструктор класса Battery
	Battery* firstBattery = new Battery("variable", 20, 30, "chrome", 11);

	// Добавление экземпляров в коллекцию
	vector.Add(firstBattery);

	// Новый экземпляр класса Battery содержит конструктор класса Battery
	Battery* secondBattery = new Battery("variable", 10, 40, "lithium", 12);

	// Добавление экземпляров в коллекцию
	vector.Add(secondBattery);

	// Новый экземпляр класса Battery содержит конструктор класса Battery
	Battery* thirdBattery = new Battery("constant", 10, 10, "chrome", 13);

	// Добавление экземпляров в коллекцию
	vector.Add(thirdBattery);

	// Новый экземпляр класса BaseScreen содержит конструктор класса BatteryScreen
	BaseScreen* screen = new BatteryScreen();

	// Вывод коллекции
	for (int i = 0; i < vector.GetSize(); i++)
		screen->Display(vector[i]);

	cout << "Enter index of element you want to remove ";
	int position = 0;


	cin >> position;

	// Удаление элемента по полученному индексу
	vector.Delete(position);

	cout << "Enter index of element you want to show ";

	// Получение значения индекса от пользователя
	cin >> position;

	// Обработка исключения
	try {
		// Вывод элемента коллекции по полученному индексу
		screen->Display(vector[position]);
	} catch (...) {
		// Сообщение об ошибке, в случае неудачи
		cout << endl << "Out of range exception!" << endl;
	}

	// Сборка мусора
	for (int i = 0; i < vector.GetSize(); i++)
		delete vector[i];
	delete screen;

	return 0;
}
