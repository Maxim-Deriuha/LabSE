/*
 * StorageInterface.h
 *
 *  Created on: 30 окт. 2019 г.
 *      Author: Acer
 */

#ifndef STORAGE_INTERFACE_H
#define STORAGE_INTERFACE_H

#include <iostream>

class MStorageInterface {
public:
	virtual ~MStorageInterface() {};

	/**
	 * Çáåð³ãàº äàí³ â ïîò³ê
	 * @param aStream Â³äêðèòèé ïîò³ê äëÿ çáåðåæåííÿ äàíèõ
	 */
	virtual void OnStore(std::ostream& aStream) = 0;

	/**
	 * Çàâàíòàæóº äàí³ ³ç ïîòîêó
	 * @param aStream Â³äêðèòèé ïîò³ê äëÿ çàâàíòàæåííÿ äàíèõ
	 */
	virtual void OnLoad(std::istream& aStream) = 0;
};

#endif
