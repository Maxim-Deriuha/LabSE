/*
 * CSkreen2.h
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */



#pragma once
#include <iomanip>
#include "CBasicSkreen.h"
#include "CSkreen.h"

class CSkreen2 : public CBasicSkreen{
protected:
	CAgent agent;
public:
	CSkreen2();
	CSkreen2(const CAgent& ob);
	virtual ~CSkreen2();

    void ShowHeader();
    void ShowContent();
    void ShowFooter();
//	void GraphScreen(const CAgent& agent);
	void ScreenField(int, std::string, int, int, std::string, int);


};



