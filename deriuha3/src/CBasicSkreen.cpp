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

CBasicSkreen::~CBasicSkreen() {
	// TODO Auto-generated destructor stub
}

void CBasicSkreen::ShowHeader() {

	std::cout << "agent: " << std::endl << std::endl;
}

void CBasicSkreen::ShowContent(const CAgent& agent) {

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

void CBasicSkreen::Display(const CAgent& agent) {

	ShowHeader();
	ShowContent(agent);
	ShowFooter();
}
