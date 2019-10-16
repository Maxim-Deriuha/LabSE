/*
 * CAgentRob.h
 *
 *  Created on: 16 окт. 2019 г.
 *      Author: Acer
 */

#ifndef CAGENTROB_H_
#define CAGENTROB_H_
#include <iostream>
using namespace std;
#include "CAgent.h"

class CAgentRob:CAgent {
private:
	string type_firmware;
		int mazh_number;
		int min_number;
public:

	CAgentRob();
	virtual ~CAgentRob();
};

#endif /* CAGENTROB_H_ */
