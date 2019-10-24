/*
 * CAgentRob.h
 *
 *  Created on: 16 окт. 2019 г.
 *      Author: Acer
 */
#pragma once
#ifndef CAGENTROB_H_
#define CAGENTROB_H_
#include "CAgent.h"

class CAgentRob:public CAgent{
	std::string type_firmware;
	int mazh_number;
	int min_number;
public:
	CAgentRob();
	CAgentRob(int nickname_length,std::string nickname,int unic_id,int type_specialty,std::string type_firmware, int mazh_number,int min_number);
	virtual ~CAgentRob();

	std::string getType_firmware()const { return type_firmware; }
	int getMazh_number()const { return mazh_number; }
	int getMin_number()const { return min_number; }
};

#endif /* CAGENTROB_H_ */
