#include <iostream>
#include <fstream> // For file handling
using namespace std;
 
int main() {
    int temperature;
 
    // Step 1: Try to read the last saved temperature from the file
    ifstream inFile("AC_Temperature.txt");
    if (inFile >> temperature) {
        // Successfully read temperature from file
        cout << "Last saved AC temperature: " << temperature << " degrees." << endl;
    } else {
        // If no data is found or the file does not exist, set a default temperature
        temperature = 20;
        cout << "No saved temperature found or file does not exist. Setting default temperature to " << temperature << " degrees." << endl;
    }
    inFile.close(); // Close the input file
 
    // Step 2: Set new temperature
    cout << "Enter new AC temperature: ";
    cin >> temperature;
 
    // Step 3: Save the new temperature to the file
    ofstream outFile("AC_Temperature.txt"); // Opens file in write mode (creates it if not existing)
    outFile << temperature;
    outFile.close(); // Close the output file
 
    cout << "New AC temperature of " << temperature << " degrees has been saved!" << endl;
 
    return 0;
}