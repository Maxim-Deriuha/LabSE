

#pragma once

#include "Battery.h"
#include "AccumulatorVector.h"

/**
 * Класс для подсчёта количества аккумуляторов желаемого размера.
 */
class AccumulatorCounter {

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
	 * Функция для перегрузки оператора ().
	 */
	void operator()(PowerSupply* aPowerSupply, int aSize);

	/**
	 * Функция возвращает количество аккусуляторов желаемого размера.
	 */
	int GetCount();

private:

	// Экземпляр класса AccumulatorVector
	AccumulatorVector iVector;
};
