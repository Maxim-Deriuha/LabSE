/*
 * CTimer.h
 *
 *  Created on: 24 ���. 2019 �.
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
