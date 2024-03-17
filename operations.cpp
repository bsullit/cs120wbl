// name: Fixed Calculator 
// description: basic calculator using fixed values with int, float and double data types
// programmer: Brian Sullivan
// date: 2/7/2023

//preprocessor directive and namespace
#include <iostream>
using namespace std;

//main function
int main(){
    cout << "---Fixed Calculator---\n";
    cout << "Basic calculator using fixed values with int, float and double data types\n";
    cout << "by Brian Sullivan  2/7/2024\n";

    //variable initialization
    int a = 2;
    float b = 4.6;
    double c = 9.86960440109;
    //print variable amounts to console 
    cout << "int a = " << a << endl;
    cout << "float b = " << b << endl;
    cout << "double c = " << c << endl;
    //print statements with operations 
    cout <<"a + b = "<< a + b << endl;
    cout <<"a - b = "<< a - b << endl;
    cout <<"a * b = "<< a * b << endl;
    cout <<"a / b = "<< a / b << endl;
    //return statement
    return 0;
    
}
