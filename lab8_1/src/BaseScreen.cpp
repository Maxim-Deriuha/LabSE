/**
 * @file BaseScreen.cpp
 * Реализация класса BaseScreen
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "BaseScreen.h"
#include "PowerSupply.h"

#include <iostream>
#include <iomanip>

using namespace std;

BaseScreen::BaseScreen() {
	// Nothing to do
}

BaseScreen::~BaseScreen() {
	// Nothing to do
}

void BaseScreen::ShowHeader() {
	// Nothing to do
}

void BaseScreen::ShowContent(PowerSupply* aPowerSupply) {
	// Nothing to do
}

void BaseScreen::ShowFooter() {
	// Nothing to do
}

void BaseScreen::Display(PowerSupply* aPowerSupply) {
	ShowHeader();
	ShowContent(aPowerSupply);
	ShowFooter();
}
