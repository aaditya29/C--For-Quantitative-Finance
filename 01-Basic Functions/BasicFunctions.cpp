#include <iostream>

using namespace std;

int main()
{
    const int monthsInYear = 12;

    double principal = 0.0;

    cout << "Enter the principal amount: " << endl;

    cin >> principal;

    double interest = 0.0;

    cout << "Enter the interest rate: " << endl;

    cin >> interest;

    int yearsOfLoan = 0;

    cout << "Enter the years of loan: " << endl;

    cin >> yearsOfLoan;

    double monthInterest = interest / monthsInYear;
    long monthsOfLoan = yearsOfLoan * monthsInYear;

    cout << "here is principal " << principal << " " << endl
         << "here is interest rate " << interest << " " << endl
         << "here is years of loan " << yearsOfLoan << " " << endl
         << "here is months of interest " << monthInterest << " " << endl
         << "here is number of months for loan" << monthsOfLoan << endl;

    return 0;
}