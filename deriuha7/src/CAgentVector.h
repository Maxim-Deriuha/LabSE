/*
 * CAgentVector.h
 *
 *  Created on: 7 нояб. 2019 г.
 *      Author: Acer
 */


#define SRC_CAGENTVECTOR_H_

#pragma once

#include "CAgent.h"
#include "CAgentRob.h"
#include "StorageInterface.h"
#include "FileStorage.h"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <tchar.h>
#include <Windows.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

/**
 * Коллекция аккумуляторов.
 */
class CAgentVector: public MStorageInterface {

public:

	/**
	 * Пустой конструктор.
	 */
	CAgentVector();
	/**
	 * Пустой деструктор.
	 */
	void Display2(CAgent* agent);
	virtual ~CAgentVector();

	/**
	 * Функция возвращает количество элементов коллекции.
	 */
	int GetSize();

	/**
	 * Функция возвращает элемент по индексу.
	 * @param aPosition - индекс
	 */
	CAgent* GetElement(int aPosition);

	/**
	 * Функция добавления элемента в коллекцию.
	 * @param aPowerSupply
	 */
	void Add(CAgent* aCAgent);

	/**
	 * Функция для перегрузки оператора [], возвращает элемент по индексу.
	 * @param aPosition - индекс
	 */
	CAgent* operator[](int aPosition);

	/**
	 * Функция удаления элемента коллекции.
	 * @param aPosition - индекс
	 */
	void Delete(int aPosition);

	/**
	 * Функция удаления всех элементов коллекции.
	 */
	void DeleteAll();

	/**
	 * Функция записи массива в файл.
	 */
	void OnStore(ostream& aStream);

	/**
	 * Функция чтения массива из файла.
	 */
	void OnLoad(istream& aStream);

private:

	// Массив аккумуляторов
	CAgent** iCollection;

	// Количество элементов коллекции
	int iSize;
};
