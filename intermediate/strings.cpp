#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char message[] = "Hirwa arnold the master of coding.";
    cout << "length of message: " << strlen(message) << endl;

    char message1[] = "hirwa";
    char message2[] = "hirwa";
    char mess3[] = "Hirwa";

    if (strcmp(message1, message2) == 0) {
        cout << message1 << " is the same as " << message2 << endl;
    } else {
        cout << message1 << " is not the same as " << message2 << endl;
    }
    if (strcmp(message1, mess3) == 0) {
        cout << message1 << " is the same as " << mess3 << endl;
    } else {
        cout << message1 << " is not the same as " << mess3 << endl;
    }
    // notice the syntax is the same as that one found in C
    /**
     * Here is a list of similar functions:
     * ------------------------------------
     * strncmp(str1, str2, size) = return 1 if succeeds and str1 - str2 otherwise
     * strchr(message, target) = return the address of the first occurence of target
     * strcat(dest, src) = join src to dest and dest has to be bigger.
     * strcpy(dest, src) = compy src into dest and overwrite what is in dest.
     * strncpy(dest, src, size) = specify amount of chars you want to compy
    */

    char path[] = "/usr/bin/cstring.cpp";
    char *result = strrchr(path, '/'); // opposite to strchr : it finds the address of the last occurence
    cout << "result: " << result + 1 << endl;

    // here is a safer way to deal with string without worying about low level details
    string full_name;
    string planet = "earth where the sky is blue";
    string prefered_planet = planet;
    string message3 {"Hello there", 5}; /** take the first 5 characters from the given string = hello */
    string weird_message(4,'e'); // initialize string with 4 'e' chars (eeee)
    string greeting = "Hello World";
    string saying_hello(greeting, 6, 5); // start at index 6 and pick 5 chars from greeting (World)

    cout << "full name: " << full_name << endl;
    cout << "planet: " << planet << endl;
    cout << "prefered_planet: " << prefered_planet << endl;
    cout << "message: " << message3 << endl;
    cout << "Weird_message: " << weird_message << endl;
    cout << "greeting: " << greeting << endl;
    cout << "saying_hello: " << saying_hello << endl;
    // string can update its size to grow too.
    // another advantage is that you can use `+` operator to concatenate strings
    planet += planet + planet;

    cout << "new big planet: " << planet << endl;

    return 0;
}
