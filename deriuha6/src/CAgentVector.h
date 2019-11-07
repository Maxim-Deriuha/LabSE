/*
 * CAgentVector.h
 *
 *  Created on: 7 ����. 2019 �.
 *      Author: Acer
 */


#define SRC_CAGENTVECTOR_H_

#pragma once

#include "CAgent.h"
#include "CAgentRob.h"
#include "StorageInterface.h"
#include "FileStorage.h"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <tchar.h>
#include <Windows.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

/**
 * ��������� �������������.
 */
class CAgentVector: public MStorageInterface {

public:

	/**
	 * ������ �����������.
	 */
	CAgentVector();
	/**
	 * ������ ����������.
	 */
	void Display2(CAgent* agent);
	virtual ~CAgentVector();

	/**
	 * ������� ���������� ���������� ��������� ���������.
	 */
	int GetSize();

	/**
	 * ������� ���������� ������� �� �������.
	 * @param aPosition - ������
	 */
	CAgent* GetElement(int aPosition);

	/**
	 * ������� ���������� �������� � ���������.
	 * @param aPowerSupply
	 */
	void Add(CAgent* aCAgent);

	/**
	 * ������� ��� ���������� ��������� [], ���������� ������� �� �������.
	 * @param aPosition - ������
	 */
	CAgent* operator[](int aPosition);

	/**
	 * ������� �������� �������� ���������.
	 * @param aPosition - ������
	 */
	void Delete(int aPosition);

	/**
	 * ������� �������� ���� ��������� ���������.
	 */
	void DeleteAll();

	/**
	 * ������� ������ ������� � ����.
	 */
	void OnStore(ostream& aStream);

	/**
	 * ������� ������ ������� �� �����.
	 */
	void OnLoad(istream& aStream);

private:

	// ������ �������������
	CAgent** iCollection;

	// ���������� ��������� ���������
	int iSize;
};
