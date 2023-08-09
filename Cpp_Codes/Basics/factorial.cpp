#include <iostream>

using namespace std;

int main(){

    int numb, fact=1;

    cout << "Enter your number to process Factorial :"<<endl;
    cin >>numb ;

    for (int i = numb; i >1 ; i--)
    {
        fact *= i;
        
    }
    
    cout << "fact of : "<< numb << "! = " << fact;




    return 0;
}