/**
 * @file main.cpp
 * Реализация функции main()

 * @version 1.0
 * @date 4.11.15
 */


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

static int ACCUMULATOR_SIZE = 12;

/**
 * Шаблонная функция, возвращающая количество аккумуляторов с желаемым размером.
 * @param aVector - экземпляр класса AccumulatorVector
 * @param aFunctor - функтор
 * @return count - количество аккумуляторов
 */
template<typename F>
int BatteriesCount(AccumulatorVector aVector, F aFunctor);

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

	// Новый экземпляр класса AccumulatorVector
	AccumulatorCounter accumulatorCounter;

	// Вывод количества подходящих аккумуляторов
	cout << "Count of accumulator with size " << ACCUMULATOR_SIZE << " --> "
			<< BatteriesCount(vector, accumulatorCounter) << endl << endl;

	// Сборка мусора
//	delete firstBattery;
//	delete secondBattery;
//	delete thirdBattery;
	delete screen;

	return 0;
}

template<typename F>
int BatteriesCount(AccumulatorVector aVector, F aFunctor) {
	for (int i = 0; i < aVector.GetSize(); i++)
		aFunctor(aVector[i], ACCUMULATOR_SIZE);
	return aFunctor.GetCount();
}
