#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <unordered_map>
#include <list>
#include <chrono>
#include <thread>

// rapidjson libs for json read
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

// sql server interfacing
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

// function headers
#include "TweetsLoad.h"
#include "DBInit.h"
#include "DBTable3Comd.h"
#include "DBTable1Comd.h"

using namespace std;
using std::string;

int main();

int main()
{
	// Initialize tabls of Data Base "DBStage1"
	// You should have created the Data Base you tring connecting to !!!
	SQL_DB_Init();
	
	// read data file line by line
	// using Tabls of data base "DBStage1"
	string filename = "US_tweets_Feb16.txt";
	Tweets_Load(filename);

	//  Terminate.
	std::cout << "\n";
	std::cout << "  Normal end of execution.\n";
	std::cin.get();
	return 0;
}

