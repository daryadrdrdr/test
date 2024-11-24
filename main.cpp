#include <iostream>
int i;
int f (int n)
{
     if (n==0) return 0;
     if (n==1) return 1;
     if (n>1) return f(n-1)+f(n-2);
}
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
