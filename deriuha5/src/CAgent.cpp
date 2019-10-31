/*
 * CAgent.cpp
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */

#include "CAgent.h"
#include "StorageInterface.h"
#include "FileStorage.h"
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
void CAgent::OnStore(std::ostream& aStream) {
	aStream.write((const char*)&nickname_length, sizeof(nickname_length));
	aStream.write((const char*)&nickname, sizeof(nickname));
	aStream.write((const char*)&unic_id, sizeof(unic_id));
	aStream.write((const char*)&type_specialty, sizeof(type_specialty));


}
void  CAgent::OnLoad(std::istream& aStream) {

	aStream.read((char*)&nickname_length, sizeof(nickname_length));
	aStream.read((char*)&nickname, sizeof(nickname));
	aStream.read((char*)&unic_id, sizeof(unic_id));
	aStream.read((char*)&type_specialty, sizeof(type_specialty));

}
