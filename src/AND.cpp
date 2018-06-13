#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>

#include "Connector.h"
#include "AND.h"

using namespace std;

AND::AND() : Connector() {}

void AND::run(vector<string> &commands) {
	string ext = "exit";
	if(commands.front() == "&&") { //check for previous
		commands.erase(commands.begin());
	}
	else if(commands.at(0) == ext) {
		//this->command = new Exit();
		//this->command->run(prev, commands, prev_fd, next_fd);
		exit(0);
	}
	else {
		Connector::run(commands);
	}
} 
