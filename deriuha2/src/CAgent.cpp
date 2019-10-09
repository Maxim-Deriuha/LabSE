/*
 * CAgent.cpp
 *
 *  Created on: 3 זמגע. 2019 נ.
 *      Author: Acer
 */

#include "CAgent.h"

#include <string>

	CAgent::CAgent(int unique_identifier, int nickname_length, string nickname , int type_specialty)
	{
		this->unique_identifier = unique_identifier;
		this->nickname_length = nickname_length;
		this->nickname = nickname;
		this->type_specialty = type_specialty;
	}




CAgent::~CAgent()
{
}
