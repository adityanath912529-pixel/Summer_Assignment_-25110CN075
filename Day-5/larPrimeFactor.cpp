#include<iostream>
using namespace std;

int main()
{
    int num, larPrime = 1;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            larPrime = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor = " << larPrime;

    return 0;
}