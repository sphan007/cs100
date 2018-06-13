#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/wait.h>
#include <sys/types.h>

#include "Cmd.h"
#include "binCmd.h"

using namespace std;

binCmd::binCmd() {}

void binCmd::run(vector<string> &commands) {

	string Exit = "exit";
	if(commands.at(0) == Exit) {
		exit(0);
	}

	vector<char *> argv;
	argv.resize(commands.size() + 1);
	for (unsigned i = 0; i != commands.size(); i++) {
		argv[i] = &commands[i][0];
	}
	
	pid_t pid = fork();
	if(pid == -1) {
		perror( "Failure");
		exit(1);
	}
		
	if(pid == 0) {
		
	}

	if(pid > 0) {
		




	}

}
