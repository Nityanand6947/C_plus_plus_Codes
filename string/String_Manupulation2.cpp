#include <iostream>
#include <string>

int main() {

    //Function pop_back()
    std::string str = "Hello!";
    str.pop_back(); // Remove the last character
    std::cout << "After pop_back: " << str << std::endl;



    std::string str1 = "Hello";
    std::string str2 = "World";


    //Function swap()
    str1.swap(str2); // Using swap()
    std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;


    //Function replace()
    std::string str3 = "Hello, World!";
    str3.replace(7, 5, "C++"); // Replace "World" with "C++"
    std::cout << "After replace: " << str3 << std::endl;


    //Function substr
    std::string str4 = "Hello, World!";
    std::string sub = str4.substr(7, 3); // Extract "World"
    std::cout << "Substring: " << sub << std::endl;




    //Function find last not of
    std::string str5 = "Hello, World!";
    std::size_t pos1 = str5.find_last_not_of("World"); //Here last character which not get in the world will result

    if (pos1 != std::string::npos) {
        std::cout << "Last character found at index: " << pos1 << std::endl;
    } else {
        std::cout << "All characters are spaces." << std::endl;
    }




    //function Find First not of
    std::size_t pos2 = str5.find_first_not_of("HelloWorld");

    if (pos2 != std::string::npos) {
        std::cout << "First character found at index: " << pos2 << std::endl;
    } else {
        std::cout << "All characters are spaces." << std::endl;
    }


    //Function Find last of()
     std::size_t pos3 = str5.find_last_of("o!");

    if (pos3 != std::string::npos) {
        std::cout << "Last occurrence of 'o' or '!' found at index: " << pos3 << std::endl;
    } else {
        std::cout << "No 'o' or '!' found." << std::endl;
    }


    //Function find first of()
     std::size_t pos4 = str5.find_first_of("aeiou");

    if (pos4 != std::string::npos) {
        std::cout << "First vowel found at index: " << pos4 << std::endl;
    } else {
        std::cout << "No vowels found." << std::endl;
    }



    //Function rfind()
    std::string str6 = "Hello, World! Hello!";
    std::size_t pos5 = str6.rfind("Hello"); //It will find from last

    if (pos5 != std::string::npos) {
        std::cout << "'Hello' found at index: " << pos5 << std::endl;
    } else {
        std::cout << "'Hello' not found." << std::endl;
    }



    //Function find()
    std::size_t pos6 = str6.find("Hello");//It will find from first

    if (pos6 != std::string::npos) {
        std::cout << "'Hello' found at index: " << pos6 << std::endl;
    } else {
        std::cout << "'Hello' not found." << std::endl;
    }


    //Function copy()
     std::string str7 = "Hello, World!";
    char buffer[20];

    std::size_t copied = str7.copy(buffer, 4); // Copy first 5 characters
    buffer[copied] = '\0'; // Null-terminate the buffer

    std::cout << "Copied string: " << buffer << std::endl;

    //Function get_allocator()
    std::string str8 = "Hello";
    std::allocator<char> alloc = str8.get_allocator(); // Get allocator

    std::cout << "Allocator obtained." << std::endl;


   //Function data
    const char* data = str5.data(); // Get data pointer
    std::cout << "Data: " << data << std::endl; // showing the data using pointer variable





    //fFunction c_str()
    const char* cstr = str5.c_str(); // Get C-style string
    std::cout << "C-string: " << cstr << std::endl;


    //Function assign()
    std::string str9;
    std::cout<<"Before assign: "<<str9<<std::endl;
    str9.assign("Hello, World!"); // Using assign()
    std::cout << "After assign: " << str9 << std::endl;



    //Function push_back
    std::string str10 = "Hello";
    str10.push_back('!'); // Using push_back()
    std::cout << "After push_back: " << str10 << std::endl;






    return 0;
}
