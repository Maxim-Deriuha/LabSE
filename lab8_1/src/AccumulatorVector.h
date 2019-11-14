/**
 * @file AccumulatorVector.h
 * Объявление класса AccumulatorVector
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "PowerSupply.h"
#include "FileStorage.h"
#include "StorageInterface.h"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <tchar.h>
#include <Windows.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <cassert>

using namespace std;

/**
 * Коллекция аккумуляторов.
 */
class AccumulatorVector: public MStorageInterface {

public:

	/**
	 * Пустой конструктор.
	 */
	AccumulatorVector();
	/**
	 * Пустой деструктор.
	 */
	virtual ~AccumulatorVector();

	/**
	 * Функция возвращает количество элементов коллекции.
	 */
	int GetSize();

	/**
	 * Функция возвращает элемент по индексу.
	 * @param aPosition - индекс
	 */
	PowerSupply* GetElement(int aPosition);

	/**
	 * Функция добавления элемента в коллекцию.
	 * @param aPowerSupply
	 */
	void Add(PowerSupply* aPowerSupply);

	/**
	 * Функция для перегрузки оператора [], возвращает элемент по индексу.
	 * @param aPosition - индекс
	 */
	PowerSupply* operator[](int aPosition);

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
	PowerSupply** iCollection;

	// Количество элементов коллекции
	int iSize;
};
