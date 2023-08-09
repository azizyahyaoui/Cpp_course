#include <iostream>

using namespace std;

bool IsNumberPrime(int number){
    for (int i = 2; i < number ; i++)
    {
        if (number % i == 0)
            return false;
        
    }
    
    return true;

}

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        bool isPrime=IsNumberPrime(i);
        if (isPrime)
            cout <<" Is prime :"<<i<<endl;
    }
    
    
    return 0;
}
