#include <iostream>
#include <unistd.h>
#include <vector>

#include "Component.h"
#include "Cmd.h"
#include "Connector.h"
#include "Exit.h"
#include "binCmd.h"
#include "AND.h"
#include "SemiColon.h"
#include "OR.h"

using namespace std;

int main() {
	string line;
	string command;
	//bool connect;
	//int connector = 0;
	vector<string> commands;

	cout << "$ ";	
	getline(cin, line);

	int before, after;
	while(line != "exit" || line != "Exit" || line != "EXIT") {
		if(line == "exit" || line == "Exit" || line == "EXIT") {
			//Exit * exit = new Exit();
			//exit->run(
			break;
		}
		before = line.size();
		
	for(unsigned i = 0; i < line.size(); i++) {
		if(line.at(i) == ';') {
			command = line.substr(0, line.find(';'));
			cout << "Command is : " << command << endl;
			commands.push_back(command);
			commands.push_back(";");
			line.erase(0,command.size()+2);
			break;
		}

		if(line.at(i) == '&') {
			if(line.at(i+1) == '&'){
				command = line.substr(0, line.find("&&"));
				cout << "Command is: " << command << endl;
				commands.push_back(command);
				commands.push_back("&&");
				line.erase(0, command.size()+3);
				break;
			}
		}

		if(line.at(i) == '|') {
			if(line.at(i+1) == '|'){
				command = line.substr(0, line.find("||"));
				cout << "Command is: " << command << endl;
				commands.push_back(command);
				commands.push_back("||");
				line.erase(0, command.size()+3);
				break;
			}
		}

		if(line.at(i) == '#') {
			command = '#';
			commands.push_back(command);
			cout << "Found a #" << endl;
			line.erase(0, command.size());
			break;
		}	
	}
		after = line.size();
		//cout << "Size after: " << line.size() << endl;
		if (before == after) {
			command = line;
			cout << "Final command: " << command << endl;
			commands.push_back(command);
			cout << "Commands vector:" << endl;
			for(unsigned i = 0; i < commands.size(); i++) {
				cout << "(" << i << ")" << commands.at(i) << " " ;
			}
			cout << endl;
			while(!commands.empty()){
				commands.pop_back();
			}
			cout << "$ ";
			getline(cin, line);
		}
	}
	return 0;
}

