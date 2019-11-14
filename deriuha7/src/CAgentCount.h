/*
 * CAgentCount.h
 *
 *  Created on: 13 ����. 2019 �.
 *      Author: Acer
 */

#ifndef CAGENTCOUNT_H_
#define CAGENTCOUNT_H_

#pragma once

#include "CAgent.h"
#include "CAgentVector.h"

/**
 * ����� ��� �������� ���������� ������������� ��������� �������.
 */
class CAgentCount {

public:

	/**
	 * ������ �����������.
	 */
	CAgentCount();

	/**
	 * ������ ����������.
	 */CAgent
	~CAgentCount();

	/**
	 * ������� ��� ���������� ��������� ().
	 */
	void operator()(CAgent* aCAgent, int aunic_id);

	/**
	 * ������� ���������� ���������� ������������� ��������� �������.
	 */
	int GetCount();

private:

	// ��������� ������ AccumulatorVector
	CAgentVector iVector;
};
