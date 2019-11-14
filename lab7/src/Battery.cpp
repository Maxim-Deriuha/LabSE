/**
 * @file Battery.cpp
 * Реализация класса Battery
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "Battery.h"

Battery::Battery() :
		iMaterial(""), iSize(0) {
	// Nothing to do
}

Battery::Battery(string aElectricityType, int aVoltage, int aAmperage,
		string aMaterial, int aSize) :
		PowerSupply(aElectricityType, aVoltage, aAmperage), iMaterial(
				aMaterial), iSize(aSize) {
	// Nothing to do
}

Battery::~Battery() {
	// Nothing to do
}

string Battery::GetMaterial() {
	return iMaterial;
}

int Battery::GetSize() {
	return iSize;
}

const void Battery::operator =(const string aNewMaterial) {
	iMaterial = aNewMaterial;
}

void Battery::SetData(const string aNewMaterial) {
	iMaterial = aNewMaterial;
}

void Battery::SetData(const string aNewMaterial, const int aNewSize) {
	iMaterial = aNewMaterial;
	iSize = aNewSize;
}

void Battery::OnStore(ostream& aStream) {
	PowerSupply::OnStore(aStream);
	aStream.write((const char*) &iMaterial, sizeof(iMaterial));
	aStream.write((const char*) &iSize, sizeof(iSize));
}

void Battery::OnLoad(istream& aStream) {
	PowerSupply::OnLoad(aStream);
	aStream.read((char*) &iMaterial, sizeof(iMaterial));
	aStream.read((char*) &iSize, sizeof(iSize));
}
