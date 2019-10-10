/*
 * CSkreen2.cpp
 *
 *  Created on: 10 окт. 2019 г.
 *      Author: Acer
 */

#include "CSkreen2.h"
#include "CAgent.h"
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::to_string;
CSkreen2::CSkreen2()
{
}

//CSkreen2::CSkreen2(const CSkreen2& agent){
//	this->agent.unique_identifier = agent->unique_identifier;
//	this->agent.getNicknameLength() = agent->getNicknameLength();
//	this->agent.type_specialty = agent->type_specialty;
//
//}
void CSkreen2::ScreenField(unsigned int right_indent, string text, unsigned int left_indent,

	unsigned int right_indent2, string text2, unsigned int left_indent2) {

	cout << "|" << setw(right_indent) << text << setw(left_indent) << "|"
		<< setw(right_indent2) << text2 << setw(left_indent2) << "|" << endl;

	for (unsigned int i = 0; i < 30; i++) cout << "-";

	cout << endl;
}

void CSkreen2::GraphScreen(const CAgent& agent) {

	// head

	for (unsigned int i = 0; i < 30; i++) cout << "-";

	cout << endl << "|" << setw(17) << "agent" << setw(12) << "|"
		<< setw(0) << "" << setw(0) << endl;

	for (unsigned int i = 0; i < 30; i++) cout << "-";

	cout << endl;

	// field

	ScreenField(7, "unique_identifier", 6, 6, to_string(agent.unique_identifier), 0);
	ScreenField(7, "NicknameLength", 7, 7, to_string(agent.getNicknameLength()), 1);
	//ScreenField(7, "width", 7, 7, to_string(agent.getNickname()), 6);
	ScreenField(7, "type_specialty", 7, 7, to_string(agent.type_specialty), 1);
	ScreenField(7, "lenght nick", 7, 7, to_string(agent.CheckSum()), 4);


}
CSkreen2::~CSkreen2()
{
}

