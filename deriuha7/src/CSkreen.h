/*
 * CSkreen.h
 *
 *  Created on: 11 окт. 2019 г.
 *      Author: Acer
 */
#ifndef CSKREEN_H_
#define CSKREEN_H_

#include "CBasicSkreen.h"
#include "iostream"
class CSkreen:public CBasicSkreen{
public:
	CSkreen();
	virtual ~CSkreen();

//	void ScreenAgent(const CAgent & agent);
	void ShowFooter() {
		std::cout << "view: 1" << std::endl << std::endl;
	}
};

#endif /* CSKREEN_H_ */
