#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n = 5, p = 9 ;
    int q ;
    float x ;

        q = n < p ;   
    q = n == p ;  
    q = p % n + p > n ;   
    x = p / n ;  
    x = (float) p / n ;   
    x = (p + 0.5) / n ;   
    x = (int) (p + 0.5) / n ;   
    q = n * (p > n ? n : p) ;   
    q = n * (p < n ? n : p) ;

    cout << "n = " << n << '\n';
    cout << "p = " << p << '\n';
    cout << "q = " << q << '\n';
    cout << "x = " << x << '\n';

    return 0;


}