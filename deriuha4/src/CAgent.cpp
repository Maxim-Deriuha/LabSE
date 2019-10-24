/*
 * CAgent.cpp
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */

#include "CAgent.h"

CAgent::CAgent(	int nickname_length,std::string nickname,int unic_id,int type_specialty) {
	this->nickname_length = nickname_length;
	this->nickname = nickname;
	this->unic_id = unic_id;
	this->type_specialty = type_specialty;
}

CAgent::~CAgent() {
	// TODO Auto-generated destructor stub
}

int CAgent::CheckSum() const {

	return getNickname().length();
}
