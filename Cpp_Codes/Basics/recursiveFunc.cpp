#include <iostream>

using namespace std;

int recursiveSum(int a, int b)
{
    if (a == b)//stop the infinite loop
        return a;
    return a + recursiveSum(a + 1, b);
}

int main(int argc, char const *argv[])
{

    int inf, sup;
    cout << "Enter the lower limit: "<<endl;
    cin >> inf;
    cout << "Enter upper Limit :"<<endl;
    cin >> sup;


    cout<<"Sum = "<<recursiveSum(inf,sup)<<endl;


    return 0;
}