#ifndef SEMICOLON_H
#define SEMICOLON_H

#include "Connector.h"

class SemiColon : public Connector {
	public:
		SemiColon();
		void run(vector<string> &commands);
};

#endif // SEMICOLON_H
