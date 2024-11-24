#include <iostream>
/// Number of iteration
int i;
/*!
    \brief Fibonacci series function
    A recursive function of type int, designed to calculate Fibonacci series.
    \param[in] n
    The number of member, type int.
    \return
    Returns an int value, which is the result of calculation.
*/
int f (int n)
{
     if (n==0) return 0;
     if (n==1) return 1;
     if (n>1) return f(n-1)+f(n-2);
}
/*!
    \brief the main function
	The execution of the program begins with it
*/

int main() 
{
    int n=1;
    std::cin >> i;
    while (n<=i) 
	{
        std::cout << f(n) << ',';
        n++;
    }
    return 0;
}

