#ifndef COMPONENT_H
#define COMPONENT_H

#include <vector>
#include <string>

using namespace std;

class Component {
	public:
		Component();
		virtual void run(vector<string> &commands) = 0;
};
#endif // COMPONENT_H
