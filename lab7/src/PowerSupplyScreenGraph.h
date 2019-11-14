/**
 * @file PowerSupplyScreenGraph.h
 * Объявление класса PowerSupplyScreenGraph
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "PowerSupply.h"
#include "BaseScreen.h"

/**
 * Класс для отображения данных класса PowerSupply с псевдографикой.
 */
class PowerSupplyScreenGraph: public BaseScreen {

public:

	/**
	 * Конструктор по умолчанию.
	 */
	PowerSupplyScreenGraph();

	/**
	 * Пустой деструктор.
	 */
	virtual ~PowerSupplyScreenGraph();

protected:

	/**
	 * Функция для отображения хедера.
	 */
	virtual void ShowHeader();

	/**
	 * Функция для отображения основного контента.
	 * @param aPowerSupply - Экземпляр класса
	 */
	virtual void ShowContent(PowerSupply* aPowerSupply);

	/**
	 * Функция для отображения футера.
	 */
	virtual void ShowFooter();
};
