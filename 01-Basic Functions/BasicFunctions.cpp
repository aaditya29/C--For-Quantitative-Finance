#include <iostream>

using namespace std;

int main()
{
    const int monthsInYear = 12;
    
    double principal = 0.0;
    
    cout << "Enter the principal amount: "<<endl;
    
    cin >> principal;
    
    double interest = 0.0;
    
    cout << "Enter the interest rate: "<<endl;
    
    cin >> interest;
    
    int yearsOfLoan = 0;
    
    cout << "Enter the years of loan: "<<endl;
    
    cin >> yearsOfLoan;
    
    double monthInterest = interest/monthsInYear;
    long monthsOfLoan = yearsOfLoan * monthsInYear;
    
    cout << principal << " " <<endl<< interest << " " <<endl<<
    yearsOfLoan << " " <<endl<< monthInterest << " " <<endl<<
    monthsOfLoan << endl;
    
    return 0;
}