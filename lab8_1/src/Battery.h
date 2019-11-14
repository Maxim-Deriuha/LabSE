/**
 * @file Battery.h
 * РћР±СЉСЏРІР»РµРЅРёРµ РєР»Р°СЃСЃР° Battery
 * @author Andrey Stryukov
 * @version 1.0
 * @date 4.11.15
 */

#pragma once

#include "PowerSupply.h"

using namespace std;

/**
 * РљР»Р°СЃСЃ РѕР±СЉРµРєС‚Р° "РђРєРєСѓРјСѓР»СЏС‚РѕСЂ".
 */

class Battery: public PowerSupply {

public:

	/**
	 * РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ РґР»СЏ РёРЅРёС†РёР°Р»РёР·Р°С†РёРё СЃС‚Р°РЅРґР°СЂС‚РЅС‹РјРё Р·РЅР°С‡РµРЅРёСЏРјРё.
	 */
	Battery();

	/**
	 * РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ СЃ РїР°СЂР°РјРµС‚СЂР°РјРё.
	 * @param aElectricityType - С‚РёРї С‚РѕРєР°
	 * @param aVoltage - РЅР°РїСЂСЏР¶РµРЅРёРµ
	 * @param aAmperage - СЃРёР»Р° С‚РѕРєР°
	 * @param aMaterial - РјР°С‚РµСЂРёР°Р», РёР· РєРѕС‚РѕСЂРѕРіРѕ СЃРґРµР»Р°РЅ Р°РєРєСѓРјСѓР»СЏС‚РѕСЂ
	 * @param aSize - СЂР°Р·РјРµСЂ Р°РєРєСѓРјСѓР»СЏС‚РѕСЂР°
	 */
	Battery(string aElectricityType, int aVoltage, int aAmperage,
			string aMaterial, int aSize);

	/**
	 * РџСѓСЃС‚РѕР№ РґРµСЃС‚СЂСѓРєС‚РѕСЂ.
	 */
	virtual ~Battery();

	/**
	 * Р¤СѓРЅРєС†РёСЏ РІРѕР·РІСЂР°С‰Р°РµС‚ РјР°С‚РµСЂРёР°Р», РёР· РєРѕС‚РѕСЂРѕРіРѕ СЃРґРµР»Р°РЅ Р°РєРєСѓРјСѓР»СЏС‚РѕСЂ.
	 * @return material
	 */
	string GetMaterial();

	/**
	 * Р¤СѓРЅРєС†РёСЏ РІРѕР·РІСЂР°С‰Р°РµС‚ СЂР°Р·РјРµСЂ Р°РєРєСѓРјСѓР»СЏС‚РѕСЂР°.
	 * @return size
	 */
	int GetSize();

	/**
	 * Р¤СѓРЅРєС†РёСЏ СѓСЃС‚Р°РЅР°РІР»РёРІР°РµС‚ РЅРѕРІРѕРµ Р·РЅР°С‡РµРЅРёРµ РјР°С‚РµСЂРёР°Р»Р°.
	 * @param aMaterial
	 */
	void SetData(const string aMaterial);

	/**
	 * Р¤СѓРЅРєС†РёСЏ СѓСЃС‚Р°РЅР°РІР»РёРІР°РµС‚ РЅРѕРІРѕРµ Р·РЅР°С‡РµРЅРёРµ РґР»СЏ РјР°С‚РµСЂРёР°Р»Р° Рё СЂР°Р·РјРµСЂР°.
	 * @param aMaterial
	 * @param aSize
	 */
	void SetData(const string aMaterial, const int aSize);

	/**
	 * Р¤СѓРЅРєС†РёСЏ РїРµСЂРµРіСЂСѓР·РєРё РѕРїРµСЂР°С‚РѕСЂР° =.
	 * @param aMaterial
	 */
	const void operator =(const string aMaterial);

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

	// РјР°С‚РµСЂРёР°Р», РёР· РєРѕС‚РѕСЂРѕРіРѕ СЃРґРµР»Р°РЅ Р°РєРєСѓРјСѓР»СЏС‚РѕСЂ
	string iMaterial;

	// СЂР°Р·РјРµСЂ Р°РєРєСѓРјСѓР»СЏС‚РѕСЂР°
	int iSize;
};

