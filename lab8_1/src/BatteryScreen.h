/**
 * @file BatteryScreen.h
 * Объявление класса BatteryScreen
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "BaseScreen.h"

#include <windows.h>
#include <threadpoolapiset.h>

/**
 * Класс для отображения данных класса Battery.
 */
class BatteryScreen: public BaseScreen {

public:

	/**
	 * Пустой конструктор.
	 */
	BatteryScreen();

	/**
	 * Пустой деструктор.
	 */
	virtual ~BatteryScreen();

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

	/**
	 * Функция для вывода сообщения о работе таймера.
	 */
	static void onTimerAction();
};
