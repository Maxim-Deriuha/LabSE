/*
 * CAgent.h
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */

#ifndef CAGENT_H_
#define CAGENT_H_

#pragma once
#include <string>
using std::string;

class CAgent {
protected:
	int nickname_length;
	std::string nickname;
	int unic_id;
	int type_specialty;
public:
	CAgent():nickname_length(0),nickname(),unic_id(0),type_specialty(0){}
	CAgent(	int nickname_length,std::string nickname,int unic_id,int type_specialty);
	virtual ~CAgent();

	int getNicknameLength()const { return nickname_length; }
	std::string getNickname()const { return nickname; }
	int getUnic_Id()const { return unic_id; }
	int getType_specialty()const { return type_specialty; }

	int CheckSum() const;
};


#endif /* CAGENT_H_ */
