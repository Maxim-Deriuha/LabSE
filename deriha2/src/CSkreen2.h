/*
 * CSkreen2.h
 *
 *  Created on: 10 окт. 2019 г.
 *      Author: Acer
 */

#include "CAgent.h"
#include <iostream>

using std::cout;
class CSkreen2
{
public:

	CAgent agent;

	//void PrintData(const CAgent&);
	//void SetDataSource(const CAgent* monitor);
	void GraphScreen(const CAgent& agent);
	//void SetMonitorSource(const CAgent* monitor);
	void ScreenField(unsigned int, string, unsigned int, unsigned int, string, unsigned int);

	CSkreen2(const CAgent& agent);

	CSkreen2();
	~CSkreen2();


};
