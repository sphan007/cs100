#ifndef CMD_H
#define CMD_H

#include <vector>
#include <string>

#include "Component.h"

using namespace std;

class Cmd : public Component {
	public:
		Cmd();
		virtual void run (vector<string> &commands) = 0;
};

#endif // CMD_H
