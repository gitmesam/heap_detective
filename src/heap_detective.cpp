#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdbool>
#include <fstream>
#include <cstddef>       
#include "Tokenizer.h"
#include "Detective.h"

using namespace std; 


int main() 
{
	Detective obj;

	obj.get_sinks("samplers/example1.c");
	cout << "end collect";

	exit(0);
}
