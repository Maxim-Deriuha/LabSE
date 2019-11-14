/*
 * CAgentVector.cpp
 *
 *  Created on: 7 но€б. 2019 г.
 *      Author: Acer
 */

#include "CAgentVector.h"

CAgentVector::CAgentVector() :iSize(0), iCollection(new CAgent*[iSize]) {	}

CAgentVector::~CAgentVector() {
	delete[] iCollection;
}

void CAgentVector::Add(CAgent* aCAgent) {
	CAgent ** collection = iCollection;
	iSize++;
	iCollection = new CAgent*[iSize];
	for (int i = 0; i < iSize - 1; i++) {
		iCollection[i] = new CAgent();
		iCollection[i] = collection[i];
	}
	iCollection[iSize - 1] = new CAgent();
	iCollection[iSize - 1] = aCAgent;
}

CAgent* CAgentVector::GetElement(int aCAgent) {
	return iCollection[aCAgent];
}

CAgent* CAgentVector::operator[](int aPosition) {
	return iCollection[aPosition];
}

void CAgentVector::Delete(int aPosition) {
	CAgent ** collection = iCollection;
	iSize--;
	iCollection = new CAgent*[iSize];
	for (int i = 0, j = 0; i < iSize + 1; i++)
		if (i != aPosition) {
			iCollection[j] = new CAgent();
			iCollection[j] = collection[i];
			j++;
		} else
			delete collection[i];
}

void CAgentVector::DeleteAll() {
	for (int i = 0; i < iSize; i++)
		delete iCollection[i];
	iSize = 0;
}

int CAgentVector::GetSize() {
	return iSize;
}

void CAgentVector::OnStore(ostream& aStream) {
	aStream.write((const char*) &iSize, sizeof(iSize));
	for (int i = 0; i < iSize; i++)
		iCollection[i]->OnStore(aStream);
}

void CAgentVector::OnLoad(istream& aStream) {
	aStream.read((char*) &iSize, sizeof(iSize));
	iCollection = new CAgent*[iSize];
	int flag = 0;
	CAgent* powerSupply;
	for (int i = 0; i < iSize; i++) {
		aStream.read((char*) &flag, sizeof(flag));
		if (flag == 0) {
			powerSupply = new CAgent();
			powerSupply->OnLoad(aStream);
		} else {
			powerSupply = new CAgentRob();
			powerSupply->OnLoad(aStream);
		}
		iCollection[i] = powerSupply;
	}
}
void CAgentVector::Display2(CAgent* agent) {
	    std::cout << "agent: " << std::endl << std::endl;
		std::cout << "unique_identifier = " << agent->getUnic_Id() << std::endl;
		std::cout << "nickname_length= " << agent->getNicknameLength() << std::endl;
		std::cout << "nickname= " << agent->getNickname() << std::endl;
		std::cout << "type_specialty= " << agent->getType_specialty() << std::endl;
		std::cout << "nick_dlin : " << agent->CheckSum() << std::endl;


}

