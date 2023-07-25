// Calculating monthly payment
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double divisor(double numerator, double denominator)
{
    // This function divides two numbers
    // and returns the result.

    return numerator / denominator;
}

double multiplier(double firstNum, double secondNum)
{
    // This function multiplies two numbers
    // and returns the result.

    return firstNum * secondNum;
}

/*
 Here we find an amortization schedule which tells us how much of the loan principal is being paid off each month, and how much of the monthly payment is just pure interest.
 We would like a statement for each of the months of the loan, until eventually the loan payments are complete and all of the principal has been paid back. To do this, we introduce ‘while’ loops.
*/
int main()
{
    const int monthsInYear = 12;
    const int percentDenominator = 100;

    double principal = 0.0;

    cout << "Enter the amount of principal(in rupees): \n";
    cin >> principal;

    double humanInterest = 0.0;

    cout << "Enter the interest rate(in percentage): " << endl;
    cin >> humanInterest;

    double interest = divisor(humanInterest, percentDenominator);

    int yearsOfLoan = 0;

    cout << "Enter the number of years for loan: " << endl;
    cin >> yearsOfLoan;

    double monthInterest = divisor(interest, monthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);

    double payment = 0.0;
    payment = principal *
              (monthInterest /
               (1 - (pow((double)1 + monthInterest,
                         (double)-monthsOfLoan))));

    cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;

    double currInterestPayment = 0.0;
    double currPrincipalPayment = 0.0;
    double currBalance = 0.0;

    long currLoanMonth = 1;

    while (currLoanMonth <= monthsOfLoan)
    {
        cout << "Current Month: " << currLoanMonth << endl;
        currLoanMonth++;
    }

    cout << "Loan payments complete." << endl;
    return 0;
}
