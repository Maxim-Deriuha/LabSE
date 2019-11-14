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
 * РљР»Р°СЃСЃ РѕР±СЉРµРєС‚Р° "Р�СЃС‚РѕС‡РЅРёРє С‚РѕРєР°".
 */
class PowerSupply : public MStorageInterface {

public:

	/**
	 * РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ РґР»СЏ РёРЅРёС†РёР°Р»РёР·Р°С†РёРё СЃС‚Р°РЅРґР°СЂС‚РЅС‹РјРё Р·РЅР°С‡РµРЅРёСЏРјРё.
	 */
	PowerSupply();

	/**
	 * РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ СЃ РїР°СЂР°РјРµС‚СЂР°РјРё.
	 * @param electricityType - С‚РёРї С‚РѕРєР°
	 * @param voltage - РЅР°РїСЂСЏР¶РµРЅРёРµ
	 * @param amperage - СЃРёР»Р° С‚РѕРєР°
	 */
	PowerSupply(string aElectricityType, int aVoltage, int aAmperage);

	/**
	 * РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ РєРѕРїРёСЂРѕРІР°РЅРёСЏ.
	 * @param aPowerSupply - Р­РєР·РµРјРїР»СЏСЂ РєР»Р°СЃСЃР°
	 */
	PowerSupply(const PowerSupply& aPowerSupply);

	/**
	 * РџСѓСЃС‚РѕР№ РґРµСЃС‚СЂСѓРєС‚РѕСЂ.
	 */
	virtual ~PowerSupply();

	/**
	 * Р¤СѓРЅРєС†РёСЏ РІРѕР·РІСЂР°С‰Р°РµС‚ РјРѕС‰РЅРѕСЃС‚СЊ РёСЃС‚РѕС‡РЅРёРєР° С‚РѕРєР°.
	 * @return power
	 */
	int Power() const;

	/**
	 * Р¤СѓРЅРєС†РёСЏ РІРѕР·РІСЂР°С‰Р°РµС‚ С‚РёРї СЌР»РµРєС‚СЂРёС‡РµСЃРєРѕРіРѕ С‚РѕРєР°.
	 * @return electricityType
	 */
	string GetElectricityType() const;

	/**
	 * Р¤СѓРЅРєС†РёСЏ РІРѕР·РІСЂР°С‰Р°РµС‚ Р·РЅР°С‡РµРЅРёРµ РЅР°РїСЂСЏР¶РµРЅРёСЏ.
	 * @return voltage
	 */
	int GetVoltage() const;

	/**
	 * Р¤СѓРЅРєС†РёСЏ РІРѕР·РІСЂР°С‰Р°РµС‚ СЃРёР»Сѓ С‚РѕРєР°.
	 * @return amperage
	 */
	int GetAmperage() const;

	/**
	 * Р¤СѓРЅРєС†РёСЏ СѓСЃС‚Р°РЅР°РІР»РёРІР°РµС‚ РЅРѕРІРѕРµ Р·РЅР°С‡РµРЅРёРµ РјР°С‚РµСЂРёР°Р»Р°.
	 * @param aMaterial
	 */
	void SetData(const string aElectricityType);

	/**
	 * Р¤СѓРЅРєС†РёСЏ РґР»СЏ РїРµСЂРµРіСЂСѓР·РєРё РѕРїРµСЂР°С‚РѕСЂР° ==.
	 * @param aPowerSupply
	 * @return
	 */
	bool operator ==(PowerSupply& aPowerSupply);

	/**
	 * Р�РЅС‚РµСЂС„РµР№СЃРЅР°СЏ С„СѓРЅРєС†РёСЏ Р·Р°РїРёСЃРё РІ С„Р°Р№Р»
	 * @param aStream
	 */
	void OnStore(ostream& aStream);

	/**
	 * Р�РЅС‚РµСЂС„РµР№СЃРЅР°СЏ С„СѓРЅРєС†РёСЏ С‡С‚РµРЅРёСЏ РёР· С„Р°Р№Р»Р°
	 * @param aStream
	 */
	void OnLoad(istream& aStream);

private:

	// С‚РёРї С‚РѕРєР°
	string iElectricityType;

	// РЅР°РїСЂСЏР¶РµРЅРёРµ
	int iVoltage;

	// СЃРёР»Р° С‚РѕРєР°
	int iAmperage;
};
