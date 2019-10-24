/*
 * CTimer.cpp
 *
 *  Created on: 24 окт. 2019 г.
 *      Author: Acer
 */

#include "CTimer.h"
#include "CAgent.h"
#include "CSkreen2.h"

int CTimer::timer(int ms, int numCntActions) {
	HANDLE hTimer = NULL;
	LARGE_INTEGER liDueTime;
	LPCWSTR nameTimer = L"WaitableTimer";

	liDueTime.QuadPart = -10000 * (ULONGLONG)ms;

	// Create a waitable timer.
	hTimer = CreateWaitableTimer(NULL, TRUE, (LPCSTR)nameTimer);
	if (NULL == hTimer) {
		printf("CreateWaitableTimer failed (%lu)\n", GetLastError());
		return 1;
	}

	printf("Waiting for %d ms...\n", ms);

	while (numCntActions--) {
		// Set a timer to wait for ms milliseconds.
		if (!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)) {
			printf("SetWaitableTimer failed (%lu)\n", GetLastError());
			return 2;
		}
		CAgent agent(2,"James bond2", 13, 2);
		CSkreen2 view2(agent);
		// Wait for the timer.
		if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0) {
			printf("WaitForSingleObject failed (%lu)\n", GetLastError());
		}
		else {
			view2.Display();
			printf("Timer was signaled.\n");
		}
	}
	return 0;
}


CTimer::CTimer()
{
}


CTimer::~CTimer()
{
}

