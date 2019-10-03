/*
 * CSkreen.cpp
 *
 *  Created on: 3 זמגע. 2019 נ.
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
	cout << "nickname_length= " << agent.nickname_length << endl;
	cout << "nickname= " << agent.get_nickname() << endl;
	cout << "type_specialty= " << agent.get_type_speciality() << endl;
}

CSkreen::~CSkreen()
{
}
