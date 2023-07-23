#include <iostream>
#include <list>

using namespace std;

enum Gender
{
    Male,
    Female
};

class person
{
    //-------------- attributes ------------------

public: /*
-public access specifier allows the class to be accessed from outside of its scope.
This means that any other file can use this class and create objects using it's methods or data members
without having to declare a new instance in their own code.
- private : Access modifier which restricts direct access to private member functions within an object and
only accessible through public interface provided by the class itself. Private variables are still visible inside the class
blocks inheritance by making them protected.
- protected : Similarly as public but also blocks inheritance.
==> Private variables are accessible only inside the class itself while Protected ones can be used anywhere within the derived classes too.
*/
    string firstName, lastName, address, profession;
    int age;
    Gender gender;
    double salary;
    bool isMarried = false;
    list<string> hobbies;

    //-------------- Methods --------------------

    // default constructor
    person() {}
    //  constructor with params

    void printPerson()
    {
    }
};

int main()
{

    return 0;
}
