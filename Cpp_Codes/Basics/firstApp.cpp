#include <iostream>

using namespace std;

int main()
{
    cout << "==========================================================" << endl;

    string str = "Truth is generally the best vindication against slander.";

    cout << "==========================================================" << endl;
    cout << str << endl;
    cout << "-------------------string-----------------------" << endl;
    cout << "Phrase size : " << str.length() << endl;
    cout << "get idex 9 letter :\'" << str[9] << "\'" << endl;
    cout << "fin word 'vindication' position : " << str.find("vindication", 0)<< endl;
    cout << "get a sub String : " << str.substr(8, 10)<< endl;
    
    cout << "------------------------------------------" << endl;
    





    return 0;
}
