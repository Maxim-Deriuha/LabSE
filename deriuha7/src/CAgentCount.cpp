/*
 * CAgentCount.cpp
 *
 *  Created on: 13 но€б. 2019 г.
 *      Author: Acer
 */

#include "CAgentCount.h"
CAgentCount::CAgentCount() {
}

CAgentCount::~CAgentCount() {
}

void CAgentCount::operator()(CAgent* aCAgent, int aCount) {
	CAgentRob* rob = (CAgentRob*) aCAgent;
	if (rob->getUnic_Id()() == aCount)
		iVector.Add(rob);
}

int CAgentCount::GetCount() {
	return iVector.getUnic_Id();
}
