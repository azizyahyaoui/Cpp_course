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

private:
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
    bool isMarried = false;
    list<string> hobbies;

    /*
    Protected variables are accessible within the same package (i.e., inside the class definition)
    They cannot be directly accessed from another object except through derived classes inheriting from our current one. However they may still have private member functions which allow for encapsulation while allowing certain operations on these values such as setting/getting etc..
    */
protected:
    double salary;

    //-------------- Methods --------------------
public:
    // default constructor
    Person() {}
    //  constructor with params
    Person(string first_Name, string last_Name, int p_age,
           Gender p_gender, string homeAddress, bool is_Married = false,
           string p_profession = "Unknown", double p_salary = 0.00, list<string> p_hobbies = {})
    {
        firstName = first_Name;
        lastName = last_Name;
        age = p_age;
        gender = p_gender;
        address = homeAddress;
        isMarried = is_Married;
        profession = p_profession;
        salary = p_salary;
        hobbies = p_hobbies;
    }

    // destructor: called when the class goes out of scope or gets deleted
    ~Person() {}

    /* Getter and Setter methods*/

    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    string getAddress()
    {
        return address;
    }

    int getAge() const
    {
        return age;
    }

    Gender getGender()
    {
        return gender;
    }

    double getSalary()
    {
        return salary;
    }

    /*
    + By marking it as const, you inform the compiler that this member function will not modify any non-static data members of the class. This enables you to call the method on const objects and within other const member functions.
    + using const where appropriate, you can enhance the readability and safety of your code, and it helps in preventing accidental modifications to the state of objects when they should not be modified.
    */
    // Updated method declaration with const specifier
    void getMarriedStatus() const
    {
        if (isMarried == true)
        {
            cout << "Status: Married\n";
        }
        else
        {
            cout << "Status: Single" << endl;
        }
    }

    list<string> getHobbies()
    {
        cout << "Hobbies :" << endl;
        for (auto it = hobbies.begin(); it != hobbies.end(); ++it)
        {
            cout << *it << "     " << endl;
        }
        return hobbies;
    }

    // Setter methods for private member variables
    void setFirstName(string first_Name)
    {
        firstName = first_Name;
    }

    void setLastName(string last_Name)
    {
        lastName = last_Name;
    }

    void setAddress(string homeAddress)
    {
        address = homeAddress;
    }

    void setAge(int p_age)
    {
        age = p_age;
    }

    void setGender(Gender p_gender)
    {
        gender = p_gender;
    }

    void setSalary(double p_salary)
    {
        salary = p_salary;
    }

    void setIsMarried(bool is_Married)
    {
        isMarried = is_Married;
    }

    void addHobbies(string activity)
    {
        hobbies.push_back(activity);
    }

    void printPerson()
    {
        cout << "Name:" << firstName << " " << lastName << "\tAge:" << age << endl;
        if (gender == 0)
            cout << "Gender : Male "
                 << "\n";
        else
            cout << "Gender : Female "
                 << "\n ";
        getMarriedStatus();
        cout << "Address : " << address << endl;
        cout << "Profession : " << profession << "\n Salary :" << salary << " $" << endl;
        cout << "Hobbies :" << endl;
        for (auto i : hobbies)
        {
            cout << "- " + i << '\n';
        }
    }
};

/*
 * [Inheritance of class person to create software engineer subclass with additional properties and methods specific only to a Sub class of person called software engineer which inherits from the base class 'person' and adds some additional properties specific to a software developer like programming languages they use etc..
 */
class SoftwareEngineer : public Person
{
public:
    list<string> progLangUtilize;

private:
    int yearsOfExperience;

public:
    //  Base constructor
    using Person::Person;
    // Derive constructor
    SoftwareEngineer(int years_OfExperience, list<string> prog_LangUtilize)
    {
        yearsOfExperience = years_OfExperience;
        progLangUtilize = prog_LangUtilize;
    }
    ~SoftwareEngineer(){};

    void printFavoritesProgLanguage()
    {
        cout << "ProgLangUtilize :" << endl;
        for (auto i : progLangUtilize)
        {
            cout << "- " + i << '\n';
        }
    }
    int getYearsOfExperience() const{ return yearsOfExperience; }
    void setYearsOfExperience(int years_OfExperience) {yearsOfExperience = years_OfExperience;}
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
    p2.addHobbies("Watching moves");
    p2.addHobbies("Shopping");
    p2.addHobbies("Singing");
    p2.printPerson();

    cout << "------------------------------SoftwareEngineer------------------------------" << endl;
    SoftwareEngineer dev1("Ali", "Mohammad", 26, Male, "Tunisia", false, "Full_Stack_Java", 675.80, {"coding", "Fix bugs"});
    dev1.progLangUtilize.push_back("C/C#/C++");
    dev1.progLangUtilize.push_back("Java");
    dev1.progLangUtilize.push_back("Python");
    dev1.progLangUtilize.push_back("PHP");
    dev1.printPerson();
    dev1.setYearsOfExperience(6);
    cout << "Years of experience : " << dev1.getYearsOfExperience() << endl;
    dev1.printFavoritesProgLanguage();
    return 0;
}
