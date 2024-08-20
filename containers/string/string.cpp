#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, world!";

    // Accessing individual characters
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1] << endl;

    // Concatenating strings
    string greeting = "Hello";
    string name = "John";
    string message = greeting + ", " + name + "!";
    cout << message << endl;

    // Getting the length of a string
    cout << "Length of the string: " << str.length() << endl;

    // Substring extraction
    string sub = str.substr(7, 5);
    cout << "Substring: " << sub << endl;

    return 0;
}