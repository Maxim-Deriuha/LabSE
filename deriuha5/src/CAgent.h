/*
 * CAgent.h
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */

#ifndef CAGENT_H_
#define CAGENT_H_
#include "StorageInterface.h"
#include "FileStorage.h"
#pragma once
#include <string>
using std::string;

class CAgent : public MStorageInterface {
public:
	int nickname_length;
	std::string nickname;
	int unic_id;
	int type_specialty;

	CAgent():nickname_length(0),nickname(),unic_id(0),type_specialty(0){}
	CAgent(	int nickname_length,std::string nickname,int unic_id,int type_specialty);
	virtual ~CAgent();

	int getNicknameLength()const { return nickname_length; }
	std::string getNickname()const { return nickname; }
	int getUnic_Id()const { return unic_id; }
	int getType_specialty()const { return type_specialty; }
	void setNicknameLength(int nickname_length){this->nickname_length = nickname_length; }
	void setNickname(std::string nickname){this->nickname = nickname; }
	void setUnicId(int unic_id){this->unic_id = unic_id; }
	void setTypeSpec(int type_specialty){this->type_specialty = type_specialty; }

	int CheckSum() const;
	void OnStore(std::ostream& aStream);
	void OnLoad(std::istream& aStream);

};


#endif /* CAGENT_H_ */
