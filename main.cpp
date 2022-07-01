#include <iostream>
#include <fstream>

using namespace std;

void writeFile();
void readFile();

void readFile() {
    // input file stream
    ifstream file("file.txt", ios::out);

    if(!file.is_open()) {
        cout << "Error to open file!" << endl;
    } else {
        cout << "------------" << endl;
        cout << "File content:\n" << endl;
        cout << "------------" << endl;

        string line;
        while(getline(file, line)) {
            cout << line.c_str() << endl;
        }
    }
}