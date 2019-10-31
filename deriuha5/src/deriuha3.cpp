//============================================================================
// Name        : deriuha3.cpp
// Author      : deriuha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "CAgent.h"
#include "CSkreen.h"
#include "CSkreen3.h"
#include <stdio.h>
#include "CBasicSkreen.h"
//#include "CTimer.h"
#include "StorageInterface.h"
#include "FileStorage.h"
int main(){

	CAgent *agent_serializable = new CAgent(2,"James bond2", 13, 2);

		CFileStorage* storage = CFileStorage::Create(*agent_serializable, "datafile.tst");
		bool success = storage->Store();

		if (!success) {
			cerr << "Storing returned error: " << storage->GetLastError() << endl;
		}

		agent_serializable->setUnicId(404);
		success = storage->Load();
		if (!success) {
			cerr << "Loading returned error: " << storage->GetLastError() << endl;
		}
	std::cout << "lab 3" << std::endl;
	CAgent agent(2,"James bond2", 13, 2);
	CAgentRob agent_rob(2,"James bond2", 13, 2,"IOS10",10,2);
	CBasicSkreen skreen(agent);
//    skreen.ScreenAgent(agent);
	skreen.Display();

	CSkreen2 view2(agent);
//    view2.GraphScreen(agent);
	view2.Display();

	CSkreen3 view3(agent_rob);
	view3.Display();
	//CTimer::timer(1500, 4);
	return 0;
}
