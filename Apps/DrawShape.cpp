#include <iostream>
// library in C++ is used for manipulating input and output formatting
#include <iomanip>

using namespace std;

int main()
{

    int height, width;
    char symbol;

    cout << "==========================================================" << endl;
    cout << "----- Draw shapes : -----" << endl;

    cout << "Enter your shape height : " << endl;
    cin >> height;
    cout << "Enter your shape width (For Triangle width should be input as '0'!.) : " << endl;
    cin >> width;
    cout << "Enter the symbol using to draw : " << endl;
    cin >> symbol;

    cout << "-----------------------------------------------------------------------" << endl;

    for (int h = 0; h < height; h++)
    {
        if (width != 0)
        {
            for (int w = 0; w < width; w++)
            {
                cout << setw(4) << symbol;
            }
        }
        else
        {
            for (int w = 0; w < h; w++)
            {
                cout << setw(4) << symbol;
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------------------------------------" << endl;

    return 0;
}