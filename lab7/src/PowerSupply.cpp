/**
 * @file PowerSupply.cpp
 * Реализация класса PowerSupply
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "PowerSupply.h"

PowerSupply::PowerSupply() :
		iElectricityType(""), iVoltage(0), iAmperage(0) {
	// Nothing to do
}

PowerSupply::PowerSupply(string aElectricityType, int aVoltage, int aAmperage) :
		iElectricityType(aElectricityType), iVoltage(aVoltage), iAmperage(
				aAmperage) {
	// Nothing to do
}

PowerSupply::~PowerSupply() {
}

PowerSupply::PowerSupply(const PowerSupply& aPowerSupply) :
		iElectricityType(aPowerSupply.iElectricityType), iVoltage(
				aPowerSupply.iVoltage), iAmperage(aPowerSupply.iAmperage) {
	// Nothing to do
}

int PowerSupply::Power() const {
	return iVoltage * iAmperage;
}

string PowerSupply::GetElectricityType() const {
	return iElectricityType;
}

int PowerSupply::GetVoltage() const {
	return iVoltage;
}

int PowerSupply::GetAmperage() const {
	return iAmperage;
}

void PowerSupply::SetData(const string aNewElectricityType) {
	iElectricityType = aNewElectricityType;
}

bool PowerSupply::operator ==(PowerSupply& aPowerSupply) {
	return GetVoltage() == aPowerSupply.GetAmperage() ? false : true;
}

void PowerSupply::OnStore(ostream& aStream) {
	aStream.write((const char*) &iElectricityType, sizeof(iElectricityType));
	aStream.write((const char*) &iVoltage, sizeof(iVoltage));
	aStream.write((const char*) &iAmperage, sizeof(iAmperage));
}

void PowerSupply::OnLoad(istream& aStream) {
	aStream.read((char*) &iElectricityType, sizeof(iElectricityType));
	aStream.read((char*) &iVoltage, sizeof(iVoltage));
	aStream.read((char*) &iAmperage, sizeof(iAmperage));
}
