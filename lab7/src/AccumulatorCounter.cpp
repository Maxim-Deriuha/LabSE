/**
 * @file AccumulatorCounter.cpp
 * Реализация класса AccumulatorCounter
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#include "AccumulatorCounter.h"

AccumulatorCounter::AccumulatorCounter() {
}

AccumulatorCounter::~AccumulatorCounter() {
}

void AccumulatorCounter::operator()(PowerSupply* aPowerSupply, int aCount) {
	Battery* battery = (Battery*) aPowerSupply;
	if (battery->GetSize() == aCount)
		iVector.Add(battery);
}

int AccumulatorCounter::GetCount() {
	return iVector.GetSize();
}
