/*
 * CSkreen2.h
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */


#define CSKREEN2_H_

#include "CAgent.h"
#include <iostream>

using std::cout;
class CSkreen2
{
public:

	CAgent agent;


	void GraphScreen(const CAgent& agent);
	void ScreenField(unsigned int, string, unsigned int, unsigned int, string, unsigned int);

	CSkreen2(const CAgent& agent);

	CSkreen2();
	~CSkreen2();


};
