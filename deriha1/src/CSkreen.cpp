/*
 * CSkreen.cpp
 *
 *  Created on: 2 ����. 2019 �.
 *      Author: Acer
 */

#include "CSkreen.h"
#include "CAgent.h"
#include <iostream>
using namespace std;
CSkreen::CSkreen()
{
}
void CSkreen::ScreenAgent(const CAgent& agent) {


	cout << "agent: " << endl << endl;
	cout << "unique_identifier = " << agent.unique_identifier << endl;
	cout << "nickname_length= " << agent.getNicknameLength()<< endl;
	cout << "nickname= " << agent.getNickname () << endl;
	cout << "type_specialty= " << agent.type_specialty << endl;
}

CSkreen::~CSkreen()
{
}
