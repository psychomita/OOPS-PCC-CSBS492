#include <iostream>
#include <cmath>
using namespace std;

double compute_cosine(double x, int n) 
{
    double result = 1.0;
    int sign = -1, i;
    for (i = 2; i <= 2 * n; i += 2) 
    {
        double term = pow(x, i) / tgamma(i + 1);
        result += sign * term;
        sign *= -1;
    }
    return result;
}

int main() 
{
    double x,res;
    int n;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter a positive integer n : ";
    cin>>n;
    if (n <= 0) 
        cout<<"Please enter a positive integer for n : " <<endl;
    else
    {
        res=compute_cosine(x, n);
        cout << "The cosine of " << x << " using " << n << " terms in the series is : " <<res<<endl;
    }
    return 0;
}