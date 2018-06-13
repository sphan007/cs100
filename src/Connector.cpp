#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cstdlib>

#include "Connector.h"

using namespace std;

Connector::Connector() {}

void Connector::run(vector<string> & commands){
	command->run(commands);
}
