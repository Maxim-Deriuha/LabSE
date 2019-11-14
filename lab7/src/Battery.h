/**
 * @file Battery.h
 * Объявление класса Battery
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "PowerSupply.h"

using namespace std;

/**
 * Класс объекта "Аккумулятор".
 */
class Battery: public PowerSupply {

public:

	/**
	 * Конструктор для инициализации стандартными значениями.
	 */
	Battery();

	/**
	 * Конструктор с параметрами.
	 * @param aElectricityType - тип тока
	 * @param aVoltage - напряжение
	 * @param aAmperage - сила тока
	 * @param aMaterial - материал, из которого сделан аккумулятор
	 * @param aSize - размер аккумулятора
	 */
	Battery(string aElectricityType, int aVoltage, int aAmperage,
			string aMaterial, int aSize);

	/**
	 * Пустой деструктор.
	 */
	virtual ~Battery();

	/**
	 * Функция возвращает материал, из которого сделан аккумулятор.
	 * @return material
	 */
	string GetMaterial();

	/**
	 * Функция возвращает размер аккумулятора.
	 * @return size
	 */
	int GetSize();

	/**
	 * Функция устанавливает новое значение материала.
	 * @param aMaterial
	 */
	void SetData(const string aMaterial);

	/**
	 * Функция устанавливает новое значение для материала и размера.
	 * @param aMaterial
	 * @param aSize
	 */
	void SetData(const string aMaterial, const int aSize);

	/**
	 * Функция перегрузки оператора =.
	 * @param aMaterial
	 */
	const void operator =(const string aMaterial);

	/**
	 * Интерфейсная функция записи в файл
	 * @param aStream
	 */
	void OnStore(ostream& aStream);

	/**
	 * Интерфейсная функция чтения из файла
	 * @param aStream
	 */
	void OnLoad(istream& aStream);

private:

	// материал, из которого сделан аккумулятор
	string iMaterial;

	// размер аккумулятора
	int iSize;
};
