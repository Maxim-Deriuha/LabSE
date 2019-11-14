/**
 * @file PowerSupplyScreen.cpp
 * Реализация класса PowerSupplyScreen
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "PowerSupplyScreen.h"

#include <iostream>
#include <iomanip>

using namespace std;

PowerSupply* PowerSupplyScreen::POWER_SUPPLY;
int PowerSupplyScreen::COUNT;

PowerSupplyScreen::PowerSupplyScreen() {
	// Nothing to do
}

PowerSupplyScreen::~PowerSupplyScreen() {
	// Nothing to do
}

void PowerSupplyScreen::ShowHeader() {
	cout << "Power supply parameters" << endl
			<< "//////////////////////////////////////////////////////////////////////////////////"
			<< endl;
}

void PowerSupplyScreen::ShowContent(PowerSupply* aPowerSupply) {
	cout << "Electicity type: " << aPowerSupply->GetElectricityType() << endl
			<< "Voltage: " << aPowerSupply->GetVoltage() << endl << "Amperage: "
			<< aPowerSupply->GetAmperage() << endl << "Power: "
			<< aPowerSupply->Power() << endl;
}

void PowerSupplyScreen::ShowFooter() {
	cout
			<< "//////////////////////////////////////////////////////////////////////////////////"
			<< endl << endl;
}

VOID CALLBACK PowerSupplyScreen::TimerProc(HWND hWnd, UINT nMsg, UINT nIDEvent,
		DWORD dwTime) {
	PowerSupplyScreen::COUNT++;
	if (PowerSupplyScreen::COUNT == 3)
		KillTimer(NULL, nIDEvent);
	cout << setw(17) << PowerSupplyScreen::POWER_SUPPLY->GetElectricityType()
			<< "|" << setw(10) << PowerSupplyScreen::POWER_SUPPLY->GetVoltage() << "|" << setw(10)
			<< PowerSupplyScreen::POWER_SUPPLY->GetAmperage() << "|" << setw(10)
			<< PowerSupplyScreen::POWER_SUPPLY->Power() << "|" << endl;
}

void PowerSupplyScreen::SetPowerSupply(PowerSupply& aPowerSupply) {
	PowerSupplyScreen::POWER_SUPPLY = &aPowerSupply;
}
