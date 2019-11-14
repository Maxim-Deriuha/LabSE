/*
 * CAgentCount.h
 *
 *  Created on: 13 нояб. 2019 г.
 *      Author: Acer
 */

#ifndef CAGENTCOUNT_H_
#define CAGENTCOUNT_H_

#pragma once

#include "CAgent.h"
#include "CAgentVector.h"

/**
 * Класс для подсчёта количества аккумуляторов желаемого размера.
 */
class CAgentCount {

public:

	/**
	 * Пустой конструктор.
	 */
	CAgentCount();

	/**
	 * Пустой деструктор.
	 */CAgent
	~CAgentCount();

	/**
	 * Функция для перегрузки оператора ().
	 */
	void operator()(CAgent* aCAgent, int aunic_id);

	/**
	 * Функция возвращает количество аккусуляторов желаемого размера.
	 */
	int GetCount();

private:

	// Экземпляр класса AccumulatorVector
	CAgentVector iVector;
};
