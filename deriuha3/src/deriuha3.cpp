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
#include "CSkreen2.h"
#include <stdio.h>
#include "CBasicSkreen.h"
int main(){
	std::cout << "lab 3" << std::endl;
	CAgent agent(2,"James bond2", 13, 2);
	CSkreen skreen;
//    skreen.ScreenAgent(agent);
	skreen.Display(agent);

	CSkreen2 view2;
//    view2.GraphScreen(agent);
	view2.Display(agent);

	return 0;
}
