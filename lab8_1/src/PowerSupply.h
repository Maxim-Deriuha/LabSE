/**
 * @file PowerSupply.h
 * РћР±СЉСЏРІР»РµРЅРёРµ РєР»Р°СЃСЃР° PowerSupply
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */
#pragma once

#define _CRTDBG_MAP_ALLOC

#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <tchar.h>
#include <Windows.h>
#include <stdlib.h>
#include <crtdbg.h>


#include "FileStorage.h"
#include "StorageInterface.h"


using namespace std;

/**
 * Р С™Р В»Р В°РЎРѓРЎРѓ Р С•Р В±РЎР‰Р ВµР С”РЎвЂљР В° "Р пїЅРЎРѓРЎвЂљР С•РЎвЂЎР Р…Р С‘Р С” РЎвЂљР С•Р С”Р В°".
 */
class PowerSupply : public MStorageInterface {

public:

	/**
	 * Р С™Р С•Р Р…РЎРѓРЎвЂљРЎР‚РЎС“Р С”РЎвЂљР С•РЎР‚ Р Т‘Р В»РЎРЏ Р С‘Р Р…Р С‘РЎвЂ Р С‘Р В°Р В»Р С‘Р В·Р В°РЎвЂ Р С‘Р С‘ РЎРѓРЎвЂљР В°Р Р…Р Т‘Р В°РЎР‚РЎвЂљР Р…РЎвЂ№Р С�Р С‘ Р В·Р Р…Р В°РЎвЂЎР ВµР Р…Р С‘РЎРЏР С�Р С‘.
	 */
	PowerSupply();

	/**
	 * Р С™Р С•Р Р…РЎРѓРЎвЂљРЎР‚РЎС“Р С”РЎвЂљР С•РЎР‚ РЎРѓ Р С—Р В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚Р В°Р С�Р С‘.
	 * @param electricityType - РЎвЂљР С‘Р С— РЎвЂљР С•Р С”Р В°
	 * @param voltage - Р Р…Р В°Р С—РЎР‚РЎРЏР В¶Р ВµР Р…Р С‘Р Вµ
	 * @param amperage - РЎРѓР С‘Р В»Р В° РЎвЂљР С•Р С”Р В°
	 */
	PowerSupply(string aElectricityType, int aVoltage, int aAmperage);

	/**
	 * Р С™Р С•Р Р…РЎРѓРЎвЂљРЎР‚РЎС“Р С”РЎвЂљР С•РЎР‚ Р С”Р С•Р С—Р С‘РЎР‚Р С•Р Р†Р В°Р Р…Р С‘РЎРЏ.
	 * @param aPowerSupply - Р В­Р С”Р В·Р ВµР С�Р С—Р В»РЎРЏРЎР‚ Р С”Р В»Р В°РЎРѓРЎРѓР В°
	 */
	PowerSupply(const PowerSupply& aPowerSupply);

	/**
	 * Р СџРЎС“РЎРѓРЎвЂљР С•Р в„– Р Т‘Р ВµРЎРѓРЎвЂљРЎР‚РЎС“Р С”РЎвЂљР С•РЎР‚.
	 */
	virtual ~PowerSupply();

	/**
	 * Р В¤РЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ Р Р†Р С•Р В·Р Р†РЎР‚Р В°РЎвЂ°Р В°Р ВµРЎвЂљ Р С�Р С•РЎвЂ°Р Р…Р С•РЎРѓРЎвЂљРЎРЉ Р С‘РЎРѓРЎвЂљР С•РЎвЂЎР Р…Р С‘Р С”Р В° РЎвЂљР С•Р С”Р В°.
	 * @return power
	 */
	int Power() const;

	/**
	 * Р В¤РЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ Р Р†Р С•Р В·Р Р†РЎР‚Р В°РЎвЂ°Р В°Р ВµРЎвЂљ РЎвЂљР С‘Р С— РЎРЊР В»Р ВµР С”РЎвЂљРЎР‚Р С‘РЎвЂЎР ВµРЎРѓР С”Р С•Р С–Р С• РЎвЂљР С•Р С”Р В°.
	 * @return electricityType
	 */
	string GetElectricityType() const;

	/**
	 * Р В¤РЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ Р Р†Р С•Р В·Р Р†РЎР‚Р В°РЎвЂ°Р В°Р ВµРЎвЂљ Р В·Р Р…Р В°РЎвЂЎР ВµР Р…Р С‘Р Вµ Р Р…Р В°Р С—РЎР‚РЎРЏР В¶Р ВµР Р…Р С‘РЎРЏ.
	 * @return voltage
	 */
	int GetVoltage() const;

	/**
	 * Р В¤РЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ Р Р†Р С•Р В·Р Р†РЎР‚Р В°РЎвЂ°Р В°Р ВµРЎвЂљ РЎРѓР С‘Р В»РЎС“ РЎвЂљР С•Р С”Р В°.
	 * @return amperage
	 */
	int GetAmperage() const;

	/**
	 * Р В¤РЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ РЎС“РЎРѓРЎвЂљР В°Р Р…Р В°Р Р†Р В»Р С‘Р Р†Р В°Р ВµРЎвЂљ Р Р…Р С•Р Р†Р С•Р Вµ Р В·Р Р…Р В°РЎвЂЎР ВµР Р…Р С‘Р Вµ Р С�Р В°РЎвЂљР ВµРЎР‚Р С‘Р В°Р В»Р В°.
	 * @param aMaterial
	 */
	void SetData(const string aElectricityType);

	/**
	 * Р В¤РЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ Р Т‘Р В»РЎРЏ Р С—Р ВµРЎР‚Р ВµР С–РЎР‚РЎС“Р В·Р С”Р С‘ Р С•Р С—Р ВµРЎР‚Р В°РЎвЂљР С•РЎР‚Р В° ==.
	 * @param aPowerSupply
	 * @return
	 */
	bool operator ==(PowerSupply& aPowerSupply);

	/**
	 * Р пїЅР Р…РЎвЂљР ВµРЎР‚РЎвЂћР ВµР в„–РЎРѓР Р…Р В°РЎРЏ РЎвЂћРЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ Р В·Р В°Р С—Р С‘РЎРѓР С‘ Р Р† РЎвЂћР В°Р в„–Р В»
	 * @param aStream
	 */
	void OnStore(ostream& aStream);

	/**
	 * Р пїЅР Р…РЎвЂљР ВµРЎР‚РЎвЂћР ВµР в„–РЎРѓР Р…Р В°РЎРЏ РЎвЂћРЎС“Р Р…Р С”РЎвЂ Р С‘РЎРЏ РЎвЂЎРЎвЂљР ВµР Р…Р С‘РЎРЏ Р С‘Р В· РЎвЂћР В°Р в„–Р В»Р В°
	 * @param aStream
	 */
	void OnLoad(istream& aStream);

private:

	// РЎвЂљР С‘Р С— РЎвЂљР С•Р С”Р В°
	string iElectricityType;

	// Р Р…Р В°Р С—РЎР‚РЎРЏР В¶Р ВµР Р…Р С‘Р Вµ
	int iVoltage;

	// РЎРѓР С‘Р В»Р В° РЎвЂљР С•Р С”Р В°
	int iAmperage;
};
