//============================================================================
// Name        : deriha1.cpp
// Author      : deriuha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "CAgent.h"
#include "CSkreen.h"
#include <stdio.h>

int main()
{
    cout<<"Hello world"<<endl;
	CAgent agent(2, 13, "bond", 2);
	CSkreen skreen;

	skreen.ScreenAgent(agent);


    return 0;
}
