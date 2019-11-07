/*
 * CSkreen2.cpp
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */

#include "CSkreen2.h"

#include "CAgent.h"
#include <iomanip>
#include "iostream"
using namespace std;
using std::endl;
using std::setw;
using std::to_string;

#include "CSkreen2.h"

CSkreen2::CSkreen2() {
	// TODO Auto-generated constructor stub

}

CSkreen2::CSkreen2(const CAgent& ob){
	agent.nickname_length = ob.nickname_length;
	agent.nickname = ob.nickname;
	agent.type_specialty = ob.type_specialty;
	agent.unic_id = ob.unic_id;
}


CSkreen2::~CSkreen2() {
	// TODO Auto-generated destructor stub
}

void CSkreen2::ScreenField(int right_indent, std::string text, int left_indent, int right_indent2, std::string text2, int left_indent2) {

	std::cout << "|" << std::setw(right_indent) << text << std::setw(left_indent) << "|"
		<< std::setw(right_indent2) << text2 << std::setw(left_indent2) << "|" << std::endl;

	for (unsigned int i = 0; i < 30; i++) std::cout << "-";

	std::cout << std::endl;
}

//void CSkreen2::GraphScreen(const CAgent& agent) {
//
//	// head
//
//	for (int i = 0; i < 30; i++) std::cout << "-";
//
//	std::cout << std::endl << "|" << std::setw(17) << "agent" << std::setw(12) << "|"
//		<< std::setw(0) << "" << std::setw(0) << std::endl;
//
//	for (int i = 0; i < 30; i++) std::cout << "-";
//
//	std::cout << std::endl;
//
//	// field
//
//	ScreenField(7, "unique_identifier", 6, 6, std::to_string(agent.getUnic_Id()), 0);
//	ScreenField(7, "NicknameLength", 7, 7, std::to_string(agent.getNicknameLength()), 1);
//	ScreenField(7, "width", 7, 7, (agent.getNickname()), 6);
//	ScreenField(7, "type_specialty", 7, 7, std::to_string(agent.getType_specialty()), 1);
//	ScreenField(7, "lenght_nick", 7, 7, std::to_string(agent.CheckSum()), 4);
//}


void  CSkreen2::ShowHeader() {

	std::cout << "agent: " << std::endl << std::endl;
}

void  CSkreen2::ShowContent() {

//	 head

		for (int i = 0; i < 30; i++) std::cout << "-";

		std::cout << std::endl << "|" << std::setw(17) << "agent" << std::setw(12) << "|"
			<< std::setw(0) << "" << std::setw(0) << std::endl;

		for (int i = 0; i < 30; i++) std::cout << "-";

		std::cout << std::endl;

		// field

		ScreenField(7, "unique_identifier", 6, 6, std::to_string(agent.getUnic_Id()), 0);
		ScreenField(7, "NicknameLength", 7, 7, std::to_string(agent.getNicknameLength()), 1);
		ScreenField(7, "nickname", 7, 7, (agent.getNickname()), 6);
		ScreenField(7, "type_specialty", 7, 7, std::to_string(agent.getType_specialty()), 1);
		ScreenField(7, "lenght_nick", 7, 7, std::to_string(agent.CheckSum()), 4);
	}


void  CSkreen2::ShowFooter() {
	std::cout << "view: base" << std::endl << std::endl;
}

