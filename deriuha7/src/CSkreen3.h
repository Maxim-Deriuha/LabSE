/*
 * CSkreen3.h
 *
 *  Created on: 24 окт. 2019 г.
 *      Author: Acer
 */

#ifndef CSKREEN3_H_
#define CSKREEN3_H_

#include "CSkreen2.h"

class CSkreen3: public CSkreen2{
	CAgentRob a;
	CSkreen b;
public:
	CSkreen3();

	CSkreen3(const CAgentRob &ob);
	virtual ~CSkreen3();

    void ShowHeader();
    void ShowContent();
    void ShowFooter();

};

#endif /* CSKREEN3_H_ */
