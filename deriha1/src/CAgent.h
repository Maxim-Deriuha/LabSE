/*
 * CAgent.h
 *
 *  Created on: 2 זמגע. 2019 נ.
 *      Author: Acer
 */

#ifndef CAGENT_H_
#define CAGENT_H_
#pragma once
#include <string>

using std::string;

class CAgent {
public:
	int unique_identifier;
		int nickname_length;
		string nickname;
		int type_specialty;
		CAgent() :unique_identifier(0), nickname_length(0), nickname(), type_specialty(0) {}
	    CAgent( int unique_identifier, int nickname_lengh, string nickname, int type_specialty);
	virtual ~CAgent();
};

#endif /* CAGENT_H_ */
