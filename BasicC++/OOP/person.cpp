#include <iostream>
#include <string>
#include <list>

using namespace std;

enum Gender
{
    Male,
    Female
};

class Person
{
    //-------------- attributes ------------------

public:
    /*
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
    Person() {}
    //  constructor with params
    Person(string firstName, string lastName, int age, Gender gender, string address, bool isMarried = false,
           string profession = "Unknown", double salary = 0.0000, list<string> hobbies={})
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->isMarried = isMarried;
        this->profession = profession;
        this->salary = salary;
        this->hobbies = hobbies;
    }

    // destructor: called when the class goes out of scope or gets deleted
    ~Person() {}

    void isMarriedStatus(){
        if (isMarried == true)
        {
            cout << "Status: Married\n";
        }
        else
        {
            cout << "Status: Single" << endl;
        }
    }

    void printPerson()
    {
        cout << "Name:" << firstName << " " << lastName << "\tAge:" << age<<endl;
        if(gender == 0)
        cout << "Gender : Male "<<"\n";
        else
        cout <<"Gender : Female "<<"\n ";
        isMarriedStatus();
        cout<< "Address : " << address << endl;
        cout << "Profession : " << profession << "\n Salary :" << salary << " $" << endl;
        cout<<"Hobbies :"<<endl;
        for (auto it = hobbies.begin(); it != hobbies.end(); ++it)
        {
            cout << *it << "     " << endl;
        }
    }
};

/*
* Inheritance of class person to create software engineer subclass with additional properties and methods specific only to a
* Sub class of person called software engineer which inherits from the base class 'person' and adds some
* additional properties specific to a software developer like programming languages they use etc..
*/
class SoftwareEngineer : Person
{
private:
    /* data */
public:
    SoftwareEngineer(/* args */);
    ~SoftwareEngineer();
};


int main()
{
    /* creating objects */
    Person p1("John", "Doe", 25, Male, "New York", true, "Engineer", 678.0000, {"Reading", "Hiking"});
    Person p2("Jane", "Smith", 34, Female, "Los Angeles");
    /* calling member function to display data*/
    cout << "------------------------------------------------------------" << endl;
    p1.printPerson();
    cout << "------------------------------------------------------------" << endl;
    p2.hobbies.push_back("Watching moves");
    p2.hobbies.push_back("Shopping");
    p2.hobbies.push_front("Singing");
    p2.printPerson();


    return 0;
}
