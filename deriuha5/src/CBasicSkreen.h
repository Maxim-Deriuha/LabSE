/*
 * CBasicSkreen.h
 *
 *  Created on: 16 окт. 2019 г.
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

