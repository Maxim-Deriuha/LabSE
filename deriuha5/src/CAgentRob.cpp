/*
 * CAgentRob.cpp
 *
 *  Created on: 16 окт. 2019 г.
 *      Author: Acer
 */

#include "CAgentRob.h"

CAgentRob::CAgentRob(){
	nickname_length = 0;
	nickname = " ";
	unic_id = 0;
	type_specialty = 0;
	type_firmware = " ";
	mazh_number = 0;
	min_number = 0;
}

CAgentRob::CAgentRob(int nickname_length,std::string nickname,int unic_id,int type_specialty,std::string type_firmware, int mazh_number,int min_number) {
	this->nickname_length = nickname_length;
	this->nickname = nickname;
	this->unic_id = unic_id;
	this->type_specialty = type_specialty;
	this->type_firmware = type_firmware;
	this->mazh_number = mazh_number;
	this->min_number = min_number;
}

CAgentRob::~CAgentRob() {
	// TODO Auto-generated destructor stub
}
