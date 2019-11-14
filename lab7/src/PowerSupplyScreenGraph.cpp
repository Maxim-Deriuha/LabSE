/**
 * @file PowerSupplyScreenGraph.cpp
 * Реализация класса PowerSupplyScreenGraph
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "PowerSupplyScreenGraph.h"

#include <iomanip>
#include <iostream>

using namespace std;

PowerSupplyScreenGraph::PowerSupplyScreenGraph() {
	// Nothing to do
}

PowerSupplyScreenGraph::~PowerSupplyScreenGraph() {
	// Nothing to do
}

void PowerSupplyScreenGraph::ShowHeader() {
	cout << "Power supply parameters in table" << endl
			<< "//////////////////////////////////////////////////////////////////////////////////"
			<< endl << setw(10) << "Electricity type" << " " << setw(10)
			<< "Voltage" << " " << setw(10) << "Amperage" << " " << setw(10)
			<< "Power" << " " << endl;
}

void PowerSupplyScreenGraph::ShowContent(PowerSupply* aPowerSupply) {
	cout << setw(16) << aPowerSupply->GetElectricityType() << " " << setw(10)
			<< aPowerSupply->GetVoltage() << " " << setw(10)
			<< aPowerSupply->GetAmperage() << " " << setw(10)
			<< aPowerSupply->Power() << " " << endl;
}

void PowerSupplyScreenGraph::ShowFooter() {
	cout
			<< "//////////////////////////////////////////////////////////////////////////////////";
	cout << endl << endl;
}
