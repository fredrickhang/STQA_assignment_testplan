#include <fstream>
#include <iostream>
#include<string>
using namespace std;


void produceTestData() {
	ofstream outputFile;
	ofstream fs;
	fs.open("datainput.csv");

	fs << "userType" << "," << "jobType" <<","<<"jobProcesser"<<","<<"useGPU"<<","<<"userResource"<< endl;
	string input;
	string usertype;

	int tag=1;
	while (true) {
		cout << "please input data, if you want to quit, please input 'q'" << endl;
		switch (tag)
		{
		case 1:
			cout << "please input groupType:" << endl;
			tag++;
			break;
		case 2:
			cout << "please input jobType:" << endl;
			tag++;
			break;
		case 3:
			cout << "please input jobprocess:" << endl;
			tag++;
			break;
		case 4:
			cout << "please chose GPU(y or n):" << endl;
			tag++;
			break;
		case 5:
			tag++;

			fs << "5" << endl;
		default:
			cout << "continue add data?(y or q):" << endl;
			
			break;
		}
		cin >> input;
		if (input=="IT"|| input == "Lr"||input == "Mr"||input == "Sr"||input == "Ls" || input == "Ms" || input == "Ss") {
			usertype = input;
		
		}
		if (input == "q") {
			break;
		}
		
		if (tag==6) {
			tag = 1;
		}
		else {
			fs << input << ",";
		}

	}
	
}