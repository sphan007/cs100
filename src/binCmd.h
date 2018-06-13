#ifndef BINCMD_H
#define BINCMD_H

#include "Cmd.h"

class binCmd : public Cmd {
	public:
		binCmd();
		void run(vector<string> &commands);
};

#endif // BINCOMMAND_H
