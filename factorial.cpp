//name: factorial calculator
//description: given an integer  n returns n! 
//programmers: Brian Sullivan , Tim Artz , Anderson Phebus 
//date: 3/13/2024 

#include <iostream>
using namespace std;

int main(){
    //banner 
    cout << "\nname: factorial calculator\n"
            "description: given an integer  n returns n! \n"
            "programmers: Brian Sullivan, Tim Artz, Anderson Phebus\n" 
            "date: 3/13/2024\n\n";

    //define a product to hold the returned factorial ,a user defined integer, 
    //and a counter to print the full equation at the end 
    int product = 0; 
    int loopCount = 0;
    int facto;
     
    //prompt user for an integer 
    cout << "Please enter an integer: ";
    cin >> facto;

    //we can loop from facto to 1, reducing until the end condition is hit multiplying the value of facto each time
    // if the product is 0 and facto is greater than 1 product is n * n-1, otherwise facto is the previous product * n-1 
    while(facto >= 1){ 
        if(product == 0){
            product = (facto * (facto - 1 ));
        }
        else if (facto != 1 ){
            product *= (facto-1);
        }
       //subtract from facto value and add a value to loop count to keep track
        facto--;
        loopCount++;
        
    }

    //uses the reference loopcount to print the integers in the return statement for the factorial ,counting down to 1 
    //if the value is 1, dont print the * 
    for (int i = loopCount; i >= 1 ; i--){
        if (i == 1){cout << i;}
        else {cout << i << " * ";}
    }
    
    //return full factorial value 
    cout << " = " << product<<endl;

    //exit statement 
    cout << "\nPress enter to exit...";
    cin.ignore();			
    cin.get();
    return 0;
}