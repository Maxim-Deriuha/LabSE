/**
 * @file AccumulatorCounter.h
 * Объявление класса AccumulatorCounter
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "AccumulatorVector.h";
#include "Battery.h";

/**
 * Класс для подсчёта количества аккумуляторов желаемого размера.
 */
class AccumulatorCounter{

public:

	/**
	 * Пустой конструктор.
	 */
	AccumulatorCounter();

	/**
	 * Пустой деструктор.
	 */
	~AccumulatorCounter();

	/**
	 * Функция для перегрузки оператора ()
	 */
	void operator()(PowerSupply* aPowerSupply, int aSize);

	/**
	 * Возвращает все найденные комнаты
	 */
	int GetCount();

private:

	// Экземпляр класса AccumulatorVector
	AccumulatorVector iVector;
};
