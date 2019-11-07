/*
 * CBasicSkreen.cpp
 *
 *  Created on: 16 окт. 2019 г.
 *      Author: Acer
 */

#include "CBasicSkreen.h"
#include "iostream"
CBasicSkreen::CBasicSkreen() {
	// TODO Auto-generated constructor stub

}

CBasicSkreen::CBasicSkreen(const CAgent& ob) {
	agent.nickname_length = ob.nickname_length;
	agent.nickname = ob.nickname;
	agent.type_specialty = ob.type_specialty;
	agent.unic_id = ob.unic_id;
}

CBasicSkreen::CBasicSkreen(const CAgentRob &ob) {
	agent_rob.nickname_length = ob.nickname_length;
	agent_rob.nickname = ob.nickname;
	agent_rob.type_specialty = ob.type_specialty;
	agent_rob.unic_id = ob.unic_id;
	agent_rob.type_firmware = ob.type_firmware;
	agent_rob.mazh_number = ob.mazh_number;
	agent_rob.min_number = ob.min_number;
}

CBasicSkreen::~CBasicSkreen() {
	// TODO Auto-generated destructor stub
}

void CBasicSkreen::ShowHeader() {

	std::cout << "agent: " << std::endl << std::endl;
}

void CBasicSkreen::ShowContent() {

	std::cout << "agent: " << std::endl << std::endl;
	std::cout << "unique_identifier = " << agent.getUnic_Id() << std::endl;
	std::cout << "nickname_length= " << agent.getNicknameLength() << std::endl;
	std::cout << "nickname= " << agent.getNickname() << std::endl;
	std::cout << "type_specialty= " << agent.getType_specialty() << std::endl;
	std::cout << "nick_dlin : " << agent.CheckSum() << std::endl;
}

void CBasicSkreen::ShowFooter() {
	std::cout << "view: base" << std::endl << std::endl;
}

void CBasicSkreen::Display() {

	ShowHeader();
	ShowContent();
	ShowFooter();
}
