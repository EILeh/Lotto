/* Lotto
 *
 * Description
 *
 * Program asks the user to enter the number of lottery balls and the amount of
 * balls that is drawn and checks that both numbers are more than zero. The
 * amount lottery balls must also be bigger than the amount of drawn balls which
 * is also checked. The program counts the factorial for variables:
 * total_lottery_balls, drawn_balls and n_minus_p which contains the information
 * of toltal_lottery_balls minus drawn_balls. Factorials are used to count the
 * probability.
 *
 * Writer of the program
 *
 * Name: EILeh
 */


#include <cmath>
#include <iostream>

using namespace std;

// Counts the factorial of the number that is given in the function parameter
// and returns a number with the type of long long int.
long long int factorial(long long int n)
{
    long long int factorial = 1;
    long long int i = 0;

    // If parameter n is 0 or 1, function returns 1 because 0! and 1! are both
    // 1.
    if (( n == 0 ) or ( n == 1))
    {
        return 1;
    }

    // Goes through the parameter n size and updates the value in variable
    // factorial.
    // AN EXAMPLE: n = 10
    //  -> 10! => 1*2*3*4*5*6*7*8*9*10
    for ( i = 1; i <= n; ++i )
    {
        factorial = factorial * i;

    }

    return factorial;
}


int main()
{

    long long int drawn_balls = 0;
    long long int total_lottery_balls = 0;

    cout << "Enter the total number of lottery balls: ";
    cin >> total_lottery_balls;


    cout << "Enter the number of drawn balls: ";
    cin >> drawn_balls;

    if ( total_lottery_balls < 0 )
    {
        cout << "The number of balls must be a positive number.";
    }

    else if ( drawn_balls < 0 )
    {
        cout << "The number of balls must be a positive number.";
    }

    else if ( total_lottery_balls < drawn_balls )
    {
        cout << "The maximum number of drawn balls is the"
                " total amount of balls.";
    }

    else
    {
        long long int probability;
        long long int n_minus_p = total_lottery_balls - drawn_balls;

        probability = ( factorial(total_lottery_balls) ) /
                ( factorial(drawn_balls) *
                  ( factorial(n_minus_p) ));

        cout << "The probability of guessing all " << drawn_balls <<
                " balls correctly is 1/" << probability;
    }


    return EXIT_SUCCESS;
}
