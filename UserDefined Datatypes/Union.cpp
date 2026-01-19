#include <iostream>

using namespace std;



// Define a union

union Data {

    int intValue;

    float floatValue;

    char charValue;

};



int main() {

    Data data; // Create a union variable



    // Assign a value to the int member

    data.intValue = 10;

    cout << "Int Value: " << data.intValue << endl;



    // Assign a value to the float member

    data.floatValue = 5.5; // This overwrites intValue

    cout << "Float Value: " << data.floatValue << endl;



    // Assign a value to the char member

    data.charValue = 'A'; // This overwrites floatValue

    cout << "Char Value: " << data.charValue << endl;



    // Attempting to access the overwritten values is undefined behavior

    cout << "Int Value after overwriting: " << data.intValue << endl; // May not be valid

    cout << "Float Value after overwriting: " << data.floatValue << endl; // May not be valid



    return 0;

}
