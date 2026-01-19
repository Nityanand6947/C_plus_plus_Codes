#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //================filebuf===============================[can create a file]
    // filebuff object creation
    // filebuf fb;
    // fb.open("example.txt",ios::out);

    // //output object creation
    // ostream os(&fb);
    // os << "Hello, filebuf!";
    // fb.close();

    //===================ifstream==========================[can read a file]
    // ifstream inFile("example.txt");
    // string line;
    // while (getline(inFile, line)) {
    //     cout << line << endl;
    // }
    // inFile.close();

    //====================ofstream==========================[can create a file]
    //  ofstream outFile("output.txt");
    // outFile << "Writing to a file using ofstream." << endl;
    // outFile.close();

    //=====================fstream============================
    fstream file("combined.txt", ios::in | ios::out | ios::trunc);
    file << "Writing and then reading from the same file." << endl;

    // Go back to the beginning of the file for reading
    file.seekg(0);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    
}
