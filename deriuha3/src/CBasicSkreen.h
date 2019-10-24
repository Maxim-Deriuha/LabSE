/*
 * CBasicSkreen.h
 *
 *  Created on: 16 ���. 2019 �.
 *      Author: Acer
 #pragma once*/

#pragma once
#define CBASICSKREEN_H_

#include "CAgentRob.h"

class CBasicSkreen {
	CAgent agent;
	CAgentRob agent_rob;
public:
	CBasicSkreen();
	CBasicSkreen(const CAgent& ob);
	CBasicSkreen(const CAgentRob &ob);
	virtual ~CBasicSkreen();

	virtual void ShowHeader();
	virtual void ShowContent();
	virtual void ShowFooter();
	void Display();
};

