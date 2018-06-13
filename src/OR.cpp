#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>

#include "Connector.h"
#include "OR.h"

using namespace std;

OR::OR() : Connector() {}

void OR::run(vector<string> & commands) {
	//kind of like AND but with "||"
	//string exit = "exit";
	if(commands.front() == "||") {
		commands.erase(commands.begin());
	}

	else if( commands.at(0) == "exit") {
		//this->command = new Exit();
		//this->command->run(commands);
		exit(0);
	}
	else {
		Connector::run(commands);
	}
}
