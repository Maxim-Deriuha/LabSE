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
#include "CAgentVector.h"
int main(){

		CAgentRob* agent2 = new CAgentRob(2,"James bond2", 13, 2,"IOS10",10,2);
	    CAgentVector vector;
	    CBasicSkreen* screen = new CSkreen2();
	    CAgent* firstCAgent = new CAgent(3,"J5ames bond2", 12, 20);
		vector.Add(firstCAgent);
		CAgent* secondCAgent = new CAgent(3,"J8ames bond2", 12, 21);
		vector.Add(secondCAgent);
		CAgent* thirdCAgent = new CAgent(3,"J8ames bond2", 12, 21);
		vector.Add(thirdCAgent);
		vector.Display2(thirdCAgent);
        std::cout << "Colection" << std::endl;
		// —борка мусора
		delete screen;
		delete agent2;

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
