/**
 * @file AccumulatorVector.cpp
 * Реализация класса AccumulatorVector
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "AccumulatorVector.h"
#include "Battery.h"

AccumulatorVector::AccumulatorVector() :
		iSize(0), iCollection(new PowerSupply*[iSize]) {
		}

AccumulatorVector::~AccumulatorVector() {
}

void AccumulatorVector::Add(PowerSupply* aPowerSupply) {
	PowerSupply ** collection = iCollection;
	iSize++;
	iCollection = new PowerSupply*[iSize];
	for (int i = 0; i < iSize - 1; i++) {
		iCollection[i] = new PowerSupply();
		iCollection[i] = collection[i];
	}
	iCollection[iSize - 1] = new PowerSupply();
	iCollection[iSize - 1] = aPowerSupply;
}

PowerSupply* AccumulatorVector::GetElement(int aPosition) {
	return iCollection[aPosition];
}

PowerSupply* AccumulatorVector::operator[](int aPosition) {
	if(aPosition >= iSize || aPosition < 0)
		__throw_out_of_range("Out of range");
	return iCollection[aPosition];
}

void AccumulatorVector::Delete(int aPosition) {
	assert(aPosition >= 0 && aPosition < iSize);
	PowerSupply ** collection = iCollection;
	iSize--;
	iCollection = new PowerSupply*[iSize];
	for (int i = 0, j = 0; i < iSize + 1; i++)
		if (i != aPosition) {
			iCollection[j] = new PowerSupply();
			iCollection[j] = collection[i];
			j++;
		} else
			delete collection[i];
}

void AccumulatorVector::DeleteAll() {
	for (int i = 0; i < iSize; i++)
		delete iCollection[i];
	iSize = 0;
}

int AccumulatorVector::GetSize() {
	return iSize;
}

void AccumulatorVector::OnStore(ostream& aStream) {
	aStream.write((const char*) &iSize, sizeof(iSize));
	for (int i = 0; i < iSize; i++)
		iCollection[i]->OnStore(aStream);
}

void AccumulatorVector::OnLoad(istream& aStream) {
	aStream.read((char*) &iSize, sizeof(iSize));
	iCollection = new PowerSupply*[iSize];
	int flag = 0;
	PowerSupply* powerSupply;
	for (int i = 0; i < iSize; i++) {
		aStream.read((char*) &flag, sizeof(flag));
		if (flag == 0) {
			powerSupply = new PowerSupply();
			powerSupply->OnLoad(aStream);
		} else {
			powerSupply = new Battery();
			powerSupply->OnLoad(aStream);
		}
		iCollection[i] = powerSupply;
	}
}
