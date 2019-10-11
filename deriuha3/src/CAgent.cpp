/*
 * CAgent.cpp
 *
 *  Created on: 11 ���. 2019 �.
 *      Author: Acer
 */

#include "CAgent.h"
#pragma once
#include <string>

	CAgent::CAgent(int unique_identifier, int nickname_length, string nickname , int type_specialty)
	{
		this->unique_identifier = unique_identifier;
		this->nickname_length = nickname_length;
		this->nickname = nickname;
		this->type_specialty = type_specialty;
	}

	int CAgent::CheckSum() const {

		return getNickname().length();
	}


CAgent::~CAgent()
{
}
