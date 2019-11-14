/**
 * @file BatteryScreen.cpp
 * Реализация класса BatteryScreen
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "BatteryScreen.h"
#include "Battery.h"
#include "PowerSupply.h"

#include <iostream>
#include <iomanip>

using namespace std;

BatteryScreen::BatteryScreen() {
	// Nothing to do
}

BatteryScreen::~BatteryScreen() {
	// Nothing to do
}

void BatteryScreen::ShowHeader() {
	cout << "Power supply & battery parameters in table" << endl
			<< "//////////////////////////////////////////////////////////////////////////////////"
			<< endl << setw(10) << "Electricity type" << " " << setw(10)
			<< "Voltage" << " " << setw(10) << "Amperage" << " " << setw(7)
			<< "Power" << " " << setw(18) << "Battery material" << " "
			<< setw(14) << "Battery size" << " " << endl;
}

void BatteryScreen::ShowContent(PowerSupply* aPowerSupply) {
	Battery* battery = dynamic_cast<Battery*> (aPowerSupply);
	cout << setw(16) << aPowerSupply->GetElectricityType() << setw(11)
			<< aPowerSupply->GetVoltage() << setw(11)
			<< aPowerSupply->GetAmperage() << setw(8) << aPowerSupply->Power()
			<< setw(19) << battery->GetMaterial() << setw(15)
			<< battery->GetSize() << " " << endl;
}

void BatteryScreen::ShowFooter() {
	cout
			<< "//////////////////////////////////////////////////////////////////////////////////"
			<< endl << endl;
}

void BatteryScreen::onTimerAction() {
	cout << "onTimerAction worked..." << endl;
}
