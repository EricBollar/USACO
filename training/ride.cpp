/*
ID: esbolla1
TASK: ride
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin ("ride.in");
	ofstream fout ("ride.out");

	string comet, group, alphabet;
	fin >> comet >> group;
	alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cometNum = 1;
	int groupNum = 1;

	for (int i = 0; i < comet.length(); i++) {
		cometNum *= alphabet.find(comet[i]) + 1;
	}
	for (int i = 0; i < group.length(); i++) {
		groupNum *= alphabet.find(group[i]) + 1;
	}

	if (cometNum % 47 == groupNum % 47) {
		fout << "GO" << endl;
	} else {
		fout << "STAY" << endl;
	}
	
	return 0;
}