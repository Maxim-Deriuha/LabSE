/*
 * CSkreen.h
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */


#define CSKREEN_H_

#include "CAgent.h"
#include <iostream>
using namespace std;
class CSkreen
{
public:

	CSkreen();
	void ScreenAgent(const CAgent & agent);
	~CSkreen();
};
