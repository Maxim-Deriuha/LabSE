/*
 * CTimer.h
 *
 *  Created on: 24 окт. 2019 г.
 *      Author: Acer
 */

#pragma once

#include <stdio.h>
#include <windows.h>

class CTimer
{
public:

	static int timer(int ms, int numCntActions);
	VOID CALLBACK TimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime);

	CTimer();
	~CTimer();
};
