#include <iostream>

using namespace std;

int main()
{
    // check if char is alphanumeric
    cout << "Is alphanumberic \n";
    cout << "C is alphanumeric: " << isalnum('C') << endl;
    cout << "^ is alphanumeric: " << isalnum('^') << endl;

    // check if char is alphabetic
    cout << "Is alphabetic \n";
    cout << "C is alphabetic : " << isalpha('C') << endl;
    cout << "^ is alphabetic : " << isalpha('^') << endl;
    cout << "7 is alphabetic : " << isalpha('7') << endl;

    char message[] = "The message with blanks. hhhhh g0od. Let's see what going on Arnold 1234";

    size_t mess_size; // I am currently using the old compiler which don't have size function in std
    for (mess_size = 0; message[mess_size] != '\0'; mess_size++);

    cout << "\n size of message: " << mess_size << endl << endl;

    size_t blank_count = 0;
    size_t lower_count = 0;
    size_t upper_count = 0;
    size_t digit_count = 0;
    size_t i;
    for (i = 0; i < mess_size; i++) {
        // check if char is blank
        if (isblank(message[i])) {
            cout << "found blank index at: " << i << endl;
            blank_count++;
        }
        // check if char is lower
        if (islower(message[i])) {
            cout << message[i] << " : is a lower case char" << endl;
            lower_count++;
        }
        // check if char is upper
        if (isupper(message[i])) {
            cout << message[i] << " : is an upper case char" << endl;
            upper_count++;
        }
        // check if char is digit
        if (isdigit(message[i])) {
            cout << message[i]  << " : is a digit" << endl;
            digit_count++;
        }

    }
    cout << "----------------------------------\n";
    // converte a char lower case
    for (i = 0; i < mess_size; i++)
    {
        message[i] = tolower(message[i]);
    }
    cout << "message converted to lower case: \n" << message << endl;

    // converte a char to upper case
    for (i = 0; i < mess_size; i++)
    {
        message[i] = toupper(message[i]);
    }
    cout << "message converted to upper case: \n" << message << endl;


    return 0;
}
