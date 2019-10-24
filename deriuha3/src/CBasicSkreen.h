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

public:
	CBasicSkreen();
	virtual ~CBasicSkreen();

	virtual void ShowHeader();
	virtual void ShowContent(const CAgent& agent);
	virtual void ShowFooter();
	void Display(const CAgent& agent);
};

