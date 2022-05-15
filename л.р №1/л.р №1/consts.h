#ifndef CONSTS_H
#define CONSTS_H

#include <iostream>
using namespace std;

const string NAME_IN_FILE{ "in.txt" };
const string NAME_OUT_FILE{ "out.txt" };
const char ZERO_ZERO{ '0' };
const char ONE_ONE{ '1' };
const string des;

enum class Select {
	CONSOLE,
	FILE
};
enum class Blank {
	INPUT,
		OUTPUT
};


#endif 
