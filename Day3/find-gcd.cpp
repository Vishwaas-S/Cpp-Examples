//USING WHILE LOOP
// FINDING THE GCD OR HCF
#include<iostream>
using namespace std;
int main()
{
    int n1, n2;

    cout << "Enter the value of n1 && n2\n";
    cin >> n1 >> n2;

    while( n1 != n2)
    {
        if( n1 > n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }


    }

    cout << "HCF is= " << n1 << endl;;
}