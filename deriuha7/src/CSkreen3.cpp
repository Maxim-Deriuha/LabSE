/*
 * CSkreen3.cpp
 *
 *  Created on: 24 окт. 2019 г.
 *      Author: Acer
 */

#include "CSkreen3.h"

CSkreen3::CSkreen3() {

}


CSkreen3::CSkreen3(const CAgentRob& ob) {
	a.nickname_length = ob.nickname_length;
	a.nickname = ob.nickname;
	a.type_specialty = ob.type_specialty;
	a.unic_id = ob.unic_id;
	a.type_firmware = ob.type_firmware;
	a.mazh_number = ob.mazh_number;
	a.min_number = ob.min_number;
}

CSkreen3::~CSkreen3() {
	// TODO Auto-generated destructor stub
}

void CSkreen3::ShowHeader(){
	std::cout << "agentRob: " << std::endl << std::endl;
}
void CSkreen3::ShowContent(){
	//	 head

		for (int i = 0; i < 30; i++) std::cout << "-";

		std::cout << std::endl << "|" << std::setw(17) << "agent" << std::setw(12) << "|"
			<< std::setw(0) << "" << std::setw(0) << std::endl;

		for (int i = 0; i < 30; i++) std::cout << "-";

		std::cout << std::endl;

		// field


		ScreenField(7, "unique_identifier", 6, 6, std::to_string(a.unic_id), 0);
		ScreenField(7, "NicknameLength", 7, 7, std::to_string(a.nickname_length), 1);
		ScreenField(7, "nickname", 7, 7, (a.nickname), 6);
		ScreenField(7, "type_specialty", 7, 7, std::to_string(a.type_specialty), 1);
		ScreenField(7, "lenght_nick", 7, 7, std::to_string(a.CheckSum()), 4);
		ScreenField(7, "type_firmware", 7, 7, (a.type_firmware), 4);
		ScreenField(7, "mazh_number", 7, 7, std::to_string(a.getMazh_number()), 4);
		ScreenField(7, "min_number", 7, 7, std::to_string(a.getMin_number()), 4);



}
void CSkreen3::ShowFooter(){
	std::cout << "view: Rob" << std::endl << std::endl;
}
