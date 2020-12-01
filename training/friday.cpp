/*
ID: esbolla1
TASK: friday
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin ("friday.in");
	ofstream fout ("friday.out");

    int N;
    fin >> N;

    int * numThirteens = new int[7]; // 0 is sat
    int currDay = 2; // 0 is sat

    for (int i = 0; i < N; i++) {
        // jan
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
        // feb
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        cout << currDay << " ";
        numThirteens[currDay]++;
        if ((1900 + i) % 100 == 0) {
            if ((1900 + i) % 400 == 0) {
                currDay += 3;
                if (currDay > 6) {
                    currDay -= 7;
                }
            } else {
                currDay += 2;
                if (currDay > 6) {
                    currDay -= 7;
                }
            }
        } else if ((1900 + i) % 4 == 0) {
            currDay += 3;
            if (currDay > 6) {
                currDay -= 7;
            }
        } else {
            currDay += 2;
            if (currDay > 6) {
                currDay -= 7;
            }
        }
        // march
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
        // april
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 4;
        if (currDay > 6) {
            currDay -= 7;
        }
        // may
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
        // june
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 4;
        if (currDay > 6) {
            currDay -= 7;
        }
        // july
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
        // aug
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
        // sept
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 4;
        if (currDay > 6) {
            currDay -= 7;
        }
        // oct
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
        // nov
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 4;
        if (currDay > 6) {
            currDay -= 7;
        }
        // dec
        currDay -= 2;
        if (currDay < 0) {
            currDay += 7;
        }
        numThirteens[currDay]++;
        currDay += 5;
        if (currDay > 6) {
            currDay -= 7;
        }
    }

    for (int i = 0; i < 7; i++) {
        fout << numThirteens[i];
        if (i != 6) {
            fout << " ";
        }
    }
    fout << endl;

    return 0;
}