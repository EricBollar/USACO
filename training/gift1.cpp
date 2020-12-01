/*
ID: esbolla1
TASK: gift1
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
    ifstream fin("gift1.in");
    ofstream fout("gift1.out");

    string npLine;
    getline(fin, npLine);
    int NP = stoi(npLine);

    map<string, int> accounts;
    string names = "";

    for (int i = 0; i < NP; i++) {
        string temp;
        getline(fin, temp);
        names += temp + " ";
        accounts[temp] = 0;
    }

    string digits = "0123456789";

    while (!fin.eof()) {
        string giftingPerson;
        getline(fin, giftingPerson);
        string numberLine;
        getline(fin, numberLine);
        if (numberLine.length() >= 3) {
            int spaceIndex = numberLine.find(' ');
            int totalGiving = stoi(numberLine.substr(0, spaceIndex));
            int numPeople = stoi(numberLine.substr(spaceIndex+1));

            int amountPerPerson = totalGiving * 1.0 / numPeople;
            if (totalGiving > 0) {
                accounts[giftingPerson] -= numPeople * amountPerPerson;
            }

            for (int i = 0; i < numPeople; i++) {
                string temp;
                getline(fin, temp);  
                if (totalGiving > 0) {
                    accounts[temp] += amountPerPerson;
                }
            }
        }
    }

    for (int i = 0; i < NP; i++) {
        int spaceInd = names.find(" ");
        string currentPerson = names.substr(0, spaceInd);
        names = names.substr(spaceInd+1);
        fout << currentPerson << " " << accounts[currentPerson] << endl;
    }

    return 0;
}