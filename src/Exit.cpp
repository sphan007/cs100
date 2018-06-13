#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#include "Cmd.h"
#include "Exit.h"

using namespace std;

Exit::Exit() {}

void Exit::run(vector<string> &commands){
	exit(0);
}
