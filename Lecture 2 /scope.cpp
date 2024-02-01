#include <iostream>
using namespace std;

// scope: "what can we see right here"
// - what variables/functions/other can we access from inside x, where x is a function, method, etc.

// 1) what happens in c++ if you try to acces a variable out of scope?

// WE will get a compiler error because the programm will not be able to find it.

// 2) what happens if we make everything global?

// it will cause block memory, it's not efficient use of memory.
//  Risk of maintaing the stack,
// variable name and declations issues.
//  difficult to track bugs, and it will be more confusing to orgnize.

// Summary:
// pass-by-value vs. pass-by-reference
// pass-by-value: give the function a copy of the value
// pass-by-reference: give the address of the location of the value

// *************************************************

// When you are done: turn in your file on canvas

// Names (be sure to include the initial of your last name(s)!):
// Sarah Sharrofna

// 1) Write a function that demonstrates whether ints are pass-by-value or pass-by-reference
// (do not use pointers or c++ references in this function)
// Answer:

void IntTest(int x)
{
    x++;
}

// 2) Write a function that tests demonstrates whether strings (std::string) are pass-by-value or pass-by-reference
// (do not use pointers or c++ references in this function)
// Answer:

void StringTest(std::string)
{
    string text = "Inside the function";
}

// 3) Write a function that demonstrates whether arrays are pass-by-value or pass-by-reference
// recall: to initialize an array-- type name[] = {comma separated elements};
// (do not use pointers or c++ references in this function)
// Answer:
void ArrayTest(string name[])
{
    string name[0] = "Alexa";
}

// 4) Write a function that demonstrates whether vectors are pass-by-value or pass-by-reference
// Answer:

void VectorTest(vector<int>)
{

    //
}

int main()
{
    // code to call your functions goes here.
    int x = 3;
    IntTest(x);
    std::cout << "Value of x is" << x << endl;

    string text = "Outside the function";
    StringTest(text);

    cout << text << endl;

    string name[] = {"sarah", "adam", "john"};
    ArrayTest(name[]);

    cout << "The first name in the array is" << name[0] << endl;

    // you may find it useful to print out values in main as well as inside your functions
    // to appropriately demonstrate whether the given type is pass-by-value or
    // pass-by-reference
}
