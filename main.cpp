#include <iostream>
#include <fstream>

using namespace std;

void writeFile();
void readFile();

int main() {
    writeFile();
    readFile();
    return 0;
}

void writeFile() {
    // output file stream
    ofstream file("file.txt", ios::app);

    if(!file.is_open()) {
        cout << "Error to open file!" << endl;
    } else {
        string inputValue;

        while(true) {
            cout << "Writing in file: ";
            getline(cin, inputValue);

            if(inputValue == "999") {
                cout << "------------" << endl;
                cout << "Written file" << endl;
                break;
            } else {
                file << inputValue << endl;
            }
        }
    }
}

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