//name: Payroll Table 
// description: creates nicely formatted payroll table
//programmer: Brian Sullivan 
//date: 2/21/2024 

//preprocessor directive and namespace
#include <iostream>
#include <iomanip>
using namespace std;

//main function
int main(){
//define arrays hours, rates, and totals to hold all the values for our table
//each array value corresponds to an employee#{i+1},avg income will divide the 
//accumulated  value from totalIncome by 5 to find the average 
int hours[5];
double rates[5];
double totals[5];
double totalIncome, totalHours, avgIncome,avgHours;

//loop for the number of employees we have
for(int i=0;i < 5; i++){
    cout << "Hours worked Employee #"<< i+1<<" [Only whole hours will be credited]:";
    cin >> hours[i];
    cout << "Hourly pay rate for Employee #"<<i+1<<"[not necessarily whole dollars]: ";
    cin >> rates[i]; 
    cout << endl ;
    //find the product of rates and hours and put it at that array index in totals 
    totals[i] = rates[i] * hours[i];
    //accumulate in totalIncome and totalHours 
    totalIncome+=totals[i];
    totalHours+=hours[i];
}

avgIncome = totalIncome /5;

//using iomanip to display to second decimal
cout << left<< fixed << setprecision(2) ;
cout << setw(10)<<" " << "Employee#"<< setw(5)<<" "<<"Hours"<<setw(5)<<" " << "Pay Rate"<<setw(5)<<" "<< "Total Pay\n";
cout << setw(10)<<" "<<"================================================\n";
for (int i=0; i<5; i++){
    cout<<setw(10)<<" "<<i+1<<setw(14)<<" "
    <<hours[i]<<setw(8)<<" " 
    <<rates[i]<<setw(10)<<" "<< 
    totals[i]<<endl;
};
cout<<setw(10)<<" "<<"================================================\n";
cout<<setw(10)<<" " << "Total " <<setw(8)<<" "<< totalHours<< setw(25)<<" "<< avgIncome<< endl;
cout<<setw(10)<<" " <<"================================================\n";

}




