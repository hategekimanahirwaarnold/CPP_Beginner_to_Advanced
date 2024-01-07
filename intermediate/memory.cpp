/**
 * Real memory: the real memory of computer
 * Virtual memory: each program thinks it owns the whole memory of computer
 *                  without it; hundreds of programs would run with real memeory
 *                  and you would get short of the memory.
 *                  its value is in the range of 0 - 2 ^ n (n represent the ram storage of your pc: it can be 32 or 64)
 * Memory Management Unit => its function is memory map: map the virtual memory to real memory
 *                   it is defined by the operating system that is going to run that program
 *                  that's why you can't run an executable file of mac in windows computer.
 * 
 * memory is made of :
 * system:
 * stack: where variables are stored
 *        lifetime of variable is determined by scope
 *        e.g: {
 *                int p = 4;
 *             }
 *         p will only be defined within the codes between the above curry brackes.
 * heap: where functions and variables of functions are stored while operating
 *       you control where your memory is stored and return it later (like what we do when using pointers.)
 *       no other data will occupy your memory until you return it to the operating system.
*/

#include <iostream>

using namespace std;

int main()
{
    // rule 1: don't use pointer which is pointed to garbage
    int *nullP; // it is going to give you a pointer to a random location on pc
    *nullP = 32; // bad! you may cause harm to other programs which were using that memory since you are modifying the value stored there.
    int numb;
    nullP = &numb; // at least this way is better since we are using our memory
    int *p_nbr = nullptr; // this is a good way to initialize memory;
    // or you can use int int *p_nbr = new int{3}
    *p_nbr = 23; // this is bad too, we are using pointer which is pointing to nullptr.
    int *p_nbr2;
    p_nbr2 = new int; // this is a good method
                    // dynamically allocate space for a single int on the heap
                    // the memory belongs to our program now on

    delete p_nbr; // return back the momory to operating system
    p_nbr = nullptr; // nullify pointer to avoid garbage values
    delete p_nbr2;  // from now you can't access the past address.
    p_nbr2 = nullptr;

    p_nbr2 = new int(81); // now you can reallocate new address to the variable
                        // since we have already released the previous memory.
    delete p_nbr2;
    p_nbr2 = nullptr;

    // nb: don't delete your memory twice.

    // when allocation fails
    // int * data = new int[1000000000000000000];  // if we run out of heap, the program will crush and throw an exception

    // solutions: 
    // 1. exceptions
    /**
    for (size_t i = 0; i < 100000000; i++)
    {
        try {
            int *data = new int[100000000];
        } catch (exception& ex) {
            // catch the error
            cout << " something went wrong: " << ex.what() << endl;
        }
    } */
    for (size_t i = 0; i < 100000000; i++)
    {
        int *data = new(nothrow) int [1000000000];
        if (data != nullptr) {
            cout << " allocation succeeded " << endl;
        } else {
            // catch the error
            cout << " allocation failed: " << endl;
        }
    } 
    cout << "Program ending well" << endl;
    return 0;

}
