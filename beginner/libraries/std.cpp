#include <iostream>
#include <iomanip>

// std::cout print data to output
// std::endl print end of the line
/**
 * std::flush - prints what is in buffer to the terminal
 *              immediately
*/
/**
* setw - determines the width of the data to be printed on
*       the terminal
* 
*/
/**
 * right: direction of data in terminal
 * showPos: show positive sign of numbers
 * dec: print nbr in decimal
 * hex: print nbr in hexadecimal
 * oct: print nbr in octadecimal
 * showbase: show base of data to be printed
 * std::ios::fixed: avoid numbers to be printed in hexadecimal format
 * std::ios::scientific: oposite of fixed
 * std::setprecision(`value`): determine precision of numbers to be printed
 * std::showpiont: show the point and some decimals in a decimal number
*/

using namespace std;

int main()
{
    cout << "message to be flushed ..." << endl << flush;


    // print without width
    cout << "Last name: " << "Hirwa" << endl;
    cout << "First name: " << "Arnold" << endl;
    cout << "<------------------------>" << endl;
    // print with width - data will be right justified
    int width = 20;
    cout << setw(width) << "Last name: " << setw(width) << "Hirwa" << endl;
    cout << setw(width) << "First name: " << setw(width) << "Arnold" << endl;

    cout << "<------------------------>" << endl;
    // show data to the left
    cout << left
         << setw(width) << "Last name: " << setw(width) << "Hirwa" << endl
         << setw(width) << "First name: " << setw(width) << "Arnold" << endl;

    cout << "<------------------------>" << endl;
    /* show internal vs right justification - the signs will go on oposide sides in
        right justification. 
    */
    cout << left
         << setw(width) << 123 << endl
         << internal
         << setw(width) << -134 << endl;

    cout << "<------------------------>" << endl;
    // use fill character between characters
    cout << left << setfill('-')
         << setw(width) << "Last name: " << setw(width) << "Hirwa" << endl
         << setw(width) << "First name: " << setw(width) << "Arnold" << endl;
    // modify how boolean data are displayed on counsel
    bool cond1 = true;
    bool cond2= false;

    cout << "<------------------------>" << endl;
    // show data to the left
    cout << left << setfill(' ') << noboolalpha
         << setw(width) << cond1 << setw(width) << cond2 << endl;
    cout << boolalpha 
         << setw(width) << cond1 << setw(width) << cond2<< endl;
    cout << "<------------------------>" << endl;
    // show positive sign of a positive number
    cout << left << showpos
         << setw(width) << 123 << endl
         << noshowpos
         << setw(width) << 124 << endl;
    // force base of the output
    int number = 0xffde;
    cout << dec << number << endl // default
         << hex << number << endl;
    cout << uppercase;            // affect case of hex values
    cout << hex << number << endl;
    cout << nouppercase           // set to default case
         << oct << number << endl;
    
    cout << "<------------------------>" << endl;
    // used fixed vs scientific notation
    double number2 = 12.34343e-5;
    cout << "default: " << number2 << endl; // default
    cout << "fixed: " << fixed << number2 << endl; // fixed format
    cout << "scientific: " << scientific << number2 << endl; // scientific format
    cout.unsetf(ios::scientific | ios::fixed); // reset to default format
    cout << number2 << endl; // default
 
    cout << "<------------------------>" << endl;
    // force precision
    double a = 3.12343434343423232223232;
    cout << "default precision (6): " << a << endl;// default
    cout << setprecision(10);
    cout << "precision (10): " << a << endl;// default
    cout << setprecision(20);
    cout << "precision (20) : " << a << endl;// default
 
    cout << "<------------------------>" << endl;
    // show point vs noshowpint
    double b = 12.0;
    cout << noshowpoint << "noshowpoint - defalut" << endl;  // by default
    cout << a << endl;
    cout << b << endl;

    cout << showpoint << "showpoint\n";
    cout << a << endl;
    cout << b << endl;

 
    return 0;
}
