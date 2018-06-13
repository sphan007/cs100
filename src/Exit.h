#ifndef EXIT_H
#define EXIT_H

#include "Cmd.h"

class 	Exit : public Cmd {
	public:
		Exit();
		void run(vector<string> &commands);
};

#endif // EXIT_H
