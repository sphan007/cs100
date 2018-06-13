#ifndef CONNECTOR_H
#define CONNECTOR_H

#include "binCmd.h"


class Connector : public Component {
	protected:
		Cmd * command;
	public:
		Connector();
		virtual void run(vector<string> & commands);
};

#endif // CONNECTOR_H
