/**
 * @file BaseScreen.h
 * Объявление класса BaseScreen
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "PowerSupply.h"

/**
 * Базовый класс отображения данных.
 */
class BaseScreen {

public:

	/**
	 * Пустой конструктор.
	 */
	BaseScreen();

	/**
	 * Пустой деструктор.
	 */
	virtual ~BaseScreen();

	/**
	 * Функция для вывода данных на экран.
	 * @param aPowerSupply - Экземпляр класса
	 */
	virtual void Display(PowerSupply* aPowerSupply);

protected:

	/**
	 * Функция для отображения хедера.
	 */
	virtual void ShowHeader() = 0;

	/**
	 * Функция для отображения основного контента.
	 * @param aPowerSupply - Экземпляр класса
	 */
	virtual void ShowContent(PowerSupply* aPowerSupply) = 0;

	/**
	 * Функция для отображения футера.
	 */
	virtual void ShowFooter() = 0;
};
