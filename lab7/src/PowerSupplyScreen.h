/**
 * @file PowerSupplyScreen.h
 * Объявление класса PowerSupplyScreen
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "PowerSupply.h"
#include "BaseScreen.h"

#include <Windows.h>


/**
 * Класс для отображения данных класса PowerSupply
 */
class PowerSupplyScreen: public BaseScreen {

public:

	/**
	 * Конструктор по умолчанию
	 */
	PowerSupplyScreen();

	/**
	 * Пустой деструктор
	 */
	virtual ~PowerSupplyScreen();

	/**
	 * Функция для реализации работы таймера.
	 * @param hWnd - дескриптор окна
	 * @param nMsg - сообщение
	 * @param nIDEvent - идентификатор таймера
	 * @param dwTime - время работы одного такта таймера
	 */
	 static VOID CALLBACK TimerProc(HWND hWnd, UINT nMsg, UINT nIDEvent, DWORD dwTime);

	 /**
	 * Установить источник данных
	 */
	 static void SetPowerSupply(PowerSupply& aPowerSupply);

protected:

	/**
	 * Функция для отображения хедера
	 */
	virtual void ShowHeader();

	/**
	 * Функция для отображения основного контента
	 * @param aPowerSupply - Экземпляр класса
	 */
	virtual void ShowContent(PowerSupply* aPowerSupply);

	/**
	 * Функция для отображения футера
	 */
	virtual void ShowFooter();

private:

	static PowerSupply* POWER_SUPPLY;

	static int COUNT;
};
