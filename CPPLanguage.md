# C++ language :

> "Yahyaoui Med Aziz" | azizyahyaoui716@gmail.com

## Intro :

> C++ is a general-purpose programming language that was developed in the early 1980s by Bjarne Stroustrup at Bell Labs. It is an extension of the C programming language and provides features such as object-oriented programming, templates, and exception handling.

> C++ is a compiled language, which means that programs written in C++ are translated into machine code that can be executed directly by a computer. It is a high-level language, which means that it provides abstractions that allow programmers to work with complex data structures and algorithms without having to deal with the low-level details of the computer.

> One of the key features of C++ is its support for object-oriented programming. This allows programmers to define classes that encapsulate data and behavior, and to create objects that can interact with each other. C++ also supports templates, which allow programmers to write generic code that can work with different types of data.

> C++ has a wide range of applications, from operating systems and device drivers to games and scientific simulations. It is also widely used in the financial industry, where it is used to develop high-performance trading systems.

> Overall, C++ is a powerful and flexible programming language that allows programmers to write efficient and complex programs with a high degree of control over the underlying hardware. It has a steep learning curve, but with practice and patience, it can be a very rewarding language to learn and use.

## Basics of C++ :

### 1 - Prog syntax :

```cpp
// include standard library for input/output operations.
#include <iostream>
using namespace std; /* to use cout, cin etc in the program without specifying their full name as "std::cout" or anything else*/

int main(){
    /*
    Your code goes here...
    */

   cout<<"Hello world from C++ .";

    return 0;
}
```

> **#include < iostream >**
> Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor. They are special lines interpreted before the compilation of the program itself begins. In this case, the directive #include <iostream>, instructs the preprocessor to include a section of standard C++ code, known as header iostream, that allows to perform standard input and output operations, such as writing the output of this program (Hello World) to the screen.

### 2 - Variables and types :

> Here is the complete list of fundamental types in C++:

|         Group :          |     Type names\* :     |            Notes on size / precision :             |
| :----------------------: | :--------------------: | :------------------------------------------------: |
|     Character types      |          char          |     Exactly one byte in size. At least 8 bits.     |
|                          |        char16_t        |      Not smaller than char. At least 16 bits.      |
|                          |        char32_t        |    Not smaller than char16_t. At least 32 bits.    |
|                          |        wchar_t         | Can represent the largest supported character set. |
|  Integer types (signed)  |      signed char       |        Same size as char. At least 8 bits.         |
|                          |    signed short int    |      Not smaller than char. At least 16 bits.      |
|                          |       signed int       |     Not smaller than short. At least 16 bits.      |
|                          |    signed long int     |      Not smaller than int. At least 32 bits.       |
|                          |  signed long long int  |      Not smaller than long. At least 64 bits.      |
| Integer types (unsigned) |     unsigned char      |                                                    |
|                          |   unsigned short int   |                                                    |
|                          |      unsigned int      |      (same size as their signed counterparts)      |
|                          |   unsigned long int    |
|                          | unsigned long long int |
|   Floating-point types   |         float          |
|                          |    double Precision    |                not less than float                 |
|                          | long double Precision  |                not less than double                |
|       Boolean type       |          bool          |
|        Void type         |    void no storage     |
|       Null pointer       |   decltype(nullptr)    |

---

> There is also:
> **"Type deduction: auto and decltype" :**

```cpp

int foo = 0;
auto bar = foo;  // the same as: int bar = foo;


auto x = y + z //y,z are expressions with known or inferred data types
decltype((x+y)*z)//declares a variable whose declared type will be that of its expression without actually evaluating it
decltype((x+y)*z/a)//the result has a declared but unknown data type based on operands' data type.
```

---

> **- Strings :**

> In addition to arrays of characters (`char[]`), there's another way to store strings using pointers to`const` elements followed by an additional null terminator element at the end. This approach can be more memory efficient for large string literals that don't fit into program code segments directly.
> The `std::string`, `std::wstring`, etc classes provide convenient ways to manipulate such objects.

```c++
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string mystring;
  mystring = "This is a string";
  cout << mystring;
  return 0;
}
```

---

> **- Constants :**

> Constants are variables that have their values defined at the beginning of program execution or before any other code in compile time, and cannot change during runtime:

```c++
const double pi = M_PI;      /* define constant */

```

---

> **- Operators :**

- Arithmetic operators: +, -, \*, / (floating point), % (modulo)
- Relational operator: ==,!=, >, >=, <, <=
- Logical Operator: && and ||
- Bitwise Operators: &, |, ^, ~, << >>
- Assignment operator (=): assigns the value of right operand to left operand.

---

> **- Basic Input/Output :**

> 1.  `cout` statement for outputting data on console or terminal screen.
> 2.  `cerr` standard error (output) stream
> 3.  `clog` standard logging (output) stream
> 4.  `cin` statements used in input from user using keyboard
> 5.  Use `flush()` function before endl if you want all your outputs displayed immediately without waiting till end to new line without waiting till end of current line
> 6.  Using `getline(cin, str);` reads entire line into given string until newline character
> 7.  If we need only one word as an integer instead of whole sentence like `atoi()`, `stoi()` function can be used which converts single words starting from beginning index of char array passed by reference.function can be used which returns a single number extracted from beginning of the string.
> 8.  We also have `fstream` library that allows us to perform file operations such as reading files, writing files, appending content to existing files.

---

### 3 - Statements and flow control:

> **- Selection statements: if and else:**

> **Statements**, which can include expressions with values assigned.
> Statements may also contain keywords such as if else while do...while etc., that affect program behavior based.
> And switch case. The execution order follows a set of rules known as syntax and semantics.
> Therefore, understanding these concepts will help you write better code faster!.
> And there is a Ternary if/else statements :

```cpp
int x=50; //initialize variable 'x'
bool isEven=(x%2==0)?true:false;   //'?' denotes condition
```

---

> **- Iteration statements (loops) :**

> There are three types of loops available in C++ language namely while loop, do...while loop and for loop. Each type has its own characteristics such as initialization expression, termination conditions, incrimination.
> There are three types of loops available in C++ programming language namely while loop, do...while loop & for loop. Each type has its own characteristics that make it suitable for different purposes.
> There are three types of loops available in C++ programming language namely while loop, do...
> while loop & for loop. Each type has its own characteristics that make them suitable for different purposes.
> Here's an example program demonstrating each one of those looping structures:

```cpp
#include<iostream>
using namespace std;
//While Loop Example Program
void main() {
    int i = 0;
    cout << "Using While Loop:"<<endl;
    while (i < 5){
        cout<<"Value at index "<<i<<"="<<(double)(i+7)/8*9
        <<"Incrementing the value by two"<<endl;
        ++i;}
        return ;}
```

```cpp
/*Do-While Loop*/
        void main(){
            int j = 10;
            bool flag = true;
            cout<<"Using Do-While Loop:"<<endl;
            do{
                --j;
                cout<<"The decremented number ="<<j<<endl; }
                while(flag && j>=6);
                return ;
                }
```

```cpp
#include<iostream>
using namespace std;
//For Loop Example Program
    void main() {
        for (int k = 0;k <= 5;++k){
            cout<< k << endl;
        }
```

---

### 4 - Functions :

Functions allow us to group a set of statements together and execute them repeatedly.
Functions provide a way to group related code together and make it reusable. In this section we will
learn about how functions work in C++ programming language, including defining them, calling their arguments, returning
We'll also see how use built-in library functions like `cout`, `cin` etc.
Here's an example program that demonstrates some basic concepts in C++ programming:

```c++
#include <iostream>

using namespace std;
void greetings(); // function prototype declaration

int main () {
    char name[20];
    cin >> name;
    greetings();
    return 0;
}
void greetings (){   /*function definition */
    cout <<"Welcome! "<< "How are you?"<<"\n";
}
```

> **- Overloaded functions :**

> In the above program, there is only one instance where two or more similar but different versions of same functions exist with distinct names.
> In the above program, there is only one instance where two or more overloads exist with different parameter types but same names. This means when calling these functions using their respective parameters types,
> the compiler would throw error as they have the same identifier/name which indicates ambiguity during linking time
> the compiler cannot determine which version should be called based on argument types passed at runtime. To avoid confusion
> the compiler would not be able to determine which version should get called at runtime based on argument types passed.
> overloads exist with different parameter types but same number of parameters as shown below:

```c++
float add(float num1, float num2);    // first overload
double add(double num1, double num2) ;     // second overload
string add(char* str1, int len1 );      // third overload
//...and so on..
```

> **- Function templates :**

```c++
// C++ Program to demonstrate
// Use of template
#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	// Call myMax for int
	cout << myMax<int>(3, 7) << endl;
	// call myMax for double
	cout << myMax<double>(3.0, 7.0) << endl;
	// call myMax for char
	cout << myMax<char>('g', 'e') << endl;

	return 0;
}
```

> In the above program we have used a generic type `T` which can be any valid c++
> data-type such as integer or floating point numbers etc., and then provided two arguments using this datatype
> in our custom max function called `myMax()`. The `<>` brackets are known as **Template Parameter List**.
> The code inside the curly braces `{ }` after defining the templated function will execute only when the actual argument passed during calling it matches its expected input format specified in the Template Parameters List.

> **- Non-type template arguments :**

```c++
// Example code snippet using non-type Template Arguments
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}

int main() {
  std::cout << fixed_multiply<int,2>(10) << '\n';
  std::cout << fixed_multiply<int,3>(10) << '\n';
}
```

> In this example, both functions use two parameters: one class and an integer value (`N`). When the compiler encounters these templates it will generate separate versions of each function with different values of `N`.

---

### 5 - Name visibility :

> **- Scope :**
> A scope defines where and how names within it may be accessed or visible to other parts of your source file.
> There are two types of scopes: global and local.
>
> - Global variables exist throughout all functions defined inside an entire file.
> - Local variables only exist during their lifetime within that particular block statement such as if/else statements, loops etc., but not outside them unless they're declared with static keyword.

```c++
int foo;        // global variable

int some_function ()
{
  int bar;      // local variable
  bar = 0;
}

int other_function ()
{
  foo = 1;  // ok: foo is a global variable
  bar = 2;  // wrong: bar is not visible from this function
}
```

---

> **- Namespaces :**

- The syntax to declare a namespaces is:

          namespace identifier
          {
          named_entities
          }

  > Namespaces provide a way for you to group related objects together into logical units called namespaces.
  > You can use the `namespace` keyword followed by its name in order to create one. Names declared inside that block will only be accessible with prefixing their identifier with the corresponding namespace's name separated.
  > You can use them in C++ as containers that hold the definitions of classes, structures, unions and enumerations so they don't interfere with each other when used by different programs.
  > You can use them to avoid naming conflicts between different classes in the same program.
  > The `using namespace` directive allows us to access members directly without specifying their full name with its containing
  > Here's an example using namespace `mynamespace`:

```c++
#include <iostream>
using namespace mynamespace;   // include our own custom library here
void printHello(const char* name){
    printf("hello %s\n",name);
    return ;
    };
    // main() code goes here...
    {
        const char *str="John";
        std::cout << "Calling hello with str as parameter" <<std::endl;
        ::printHello(str);// calling by fully qualified name (global)
    }
```

---

> **- Storage classes :**

> - In C++, there are five storage classes that determine how variables and functions behave during their lifetime within.
>   The storage class specifies where and how long a given object or variable will exist during its lifetime within.

| Storage class | Description                                                          | Example              |
| ------------- | -------------------------------------------------------------------- | -------------------- |
| - `auto`      | Compiler determines type of variable                                 | - int x=5;<br>- auto |
| -`decltype()` | operator used implicitly                                             | - double y = 3.14;   |
| - `register`  | Local variables stored on stack                                      | - long z[20];<br>-   |
| - `static`    | Global or local scope, but not allocated until first reference made. | -                    |
| - `extern`    | Linkage defined elsewhere                                            | -extern int i;       |
| -             | -                                                                    | -                    |

```c++
// File1.cpp
#include <iostream>

// Declaration of a global variable 'globalVar' with external linkage
extern int globalVar;

// Function with a static local variable
void functionWithStatic() {
    // 'localStaticVar' will retain its value between function calls
    static int localStaticVar = 0;
    localStaticVar++;
    std::cout << "Static variable: " << localStaticVar << std::endl;
}

// Definition of the global variable 'globalVar'
int globalVar = 42;

int main() {
    functionWithStatic(); // Output: Static variable: 1
    functionWithStatic(); // Output: Static variable: 2

    std::cout << "Global variable: " << globalVar << std::endl; // Output: Global variable: 42

    return 0;
}

```

> In this example, we have a global variable globalVar declared in File1.cpp with extern storage class. This variable is later defined in another file (not shown in the example). By declaring it with extern, we indicate to the compiler that the variable is defined elsewhere, and the linker will resolve its definition during the linking phase.
> We also have a function functionWithStatic() that contains a static local variable localStaticVar. The static keyword here ensures that the variable retains its value between function calls, and it is initialized only once during the program's execution.
> Keep in mind that the auto and register storage classes are no longer commonly used for variable declaration in modern C++. The static and extern storage classes are still relevant and can be useful for specific scenarios, such as controlling variable lifetime and visibility.

---

### 6 - Arrays :

> Arrays are used also in C++ to store multiple values in one single entity, and they can be declared using square brackets
> and their size is determined by specifying how many elements it should have inside them.

```c++
#include<iostream>

using namespace std;
const int SIZE=5;//size declaration for array initialization and access later on
int arr[SIZE];   //declaring an integer type array named as `arr` having five
for(int i=0 ;i < SIZE;++i){
    cin>>arr[i];     //taking input
  }
  cout<<"Array Elements are:"<<"\n";
  for (int j = 0;j <= SIZE-1; ++j) {
  cout<<arr[j]<<" ";
  }
  return 0;
  }
```

---

> **- Character sequences:**
> Arrays can also be used to store character strings, which we call **character arrays**. The syntax of
> creating a charcter array in C/C++ language looks like this −
> char charArrayName [arraySize];

```c++
//Example: Declaring & Initializing Char Array with Size Specified
char name1[] ={'J','o','h','n','','D','o','e','\0'};
char name2[]="John Doe";    //Declares the variable "name" as a character string
cout << sizeof(name)/sizeof(*name);      //Prints number of characters present in '
//'the given character sequence'

```

**- Scope :**

```

```

>

### 7 - Strings :

> In C++, strings are represented using the `std::string` class, which is part of the Standard Library. The `std::string` class provides a convenient and efficient way to handle strings of characters.
> Here's an example of how to use strings and some built-in string functions in C++:

```c++
#include <iostream>
#include <string>

int main() {
    // Creating and initializing strings
    std::string greeting = "Hello, ";
    std::string name = "John";

    // Concatenating strings
    std::string message = greeting + name;

    // Accessing individual characters
    char firstChar = message[0];
    char lastChar = message.back();

    // Length of the string
    int length = message.length(); // or message.size()

    // Checking if the string is empty
    bool isEmpty = message.empty();

    // Finding a substring
    std::string search = "John";
    size_t found = message.find(search);
    if (found != std::string::npos) {
        std::cout << "Substring found at index: " << found << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    // Extracting substrings
    std::string firstName = message.substr(7, 4); // Starting from index 7, extract 4 characters

    // Modifying strings
    message.append("!");
    message.insert(6, " the ");
    message.erase(0, 7); // Erase the first 7 characters

    // Output the final message
    std::cout << "Final Message: " << message << std::endl;

    return 0;
}
```

In this example, we use the `std::string` class to handle strings. The `+` operator is used for string concatenation. The `[]` operator and `back()` function are used to access individual characters. The `length()` or `size()` function provides the length of the string. The `empty()` function checks if the string is empty.

The `find()` function searches for a substring within the string and returns its index if found, otherwise, it returns `std::string::npos` (a constant representing the not-found condition). The `substr()` function extracts a substring from the original string.

The `append()`, `insert()`, and `erase()` functions are used to modify the string. The final output will demonstrate the results of these operations.

These are some of the commonly used built-in string functions provided by the `std::string` class. The C++ Standard Library provides more functionalities for working with strings, such as string comparison, conversion to numeric types, and more. You can refer to the C++ documentation for a comprehensive list of string functions and their usages.

---

### 8 - Pointers :

> Pointers are an essential concept in C++ and are used to store memory addresses. They allow you to work directly with memory locations, giving you more control over memory allocation and manipulation. Pointers are a fundamental feature of C++ that enables dynamic memory allocation, data structures, and efficient memory management.

Here are some key points about pointers in C++:

1. **Declaring Pointers**: To declare a pointer, you use the asterisk (\*) symbol before the pointer variable's name. For example:

```cpp
int* ptr; // Declares a pointer to an integer
```

2. **Initializing Pointers**: Pointers should be initialized before they are used. If you don't initialize a pointer, it will have an undefined value.

```cpp
int* ptr = nullptr; // Initializing to null (recommended in modern C++)
```

3. **Accessing Pointed Values**: To access the value stored at the memory location pointed by a pointer, you use the dereference operator (\*).

```cpp
int x = 10;
int* ptr = &x; // ptr points to the address of x
int value = *ptr; // value = 10 (the value stored at the address pointed by ptr)
```

4. **Pointer Arithmetic**: Pointers can be incremented and decremented, and pointer arithmetic can be used to navigate through contiguous memory locations.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr; // ptr points to the first element of the array
int thirdElement = *(ptr + 2); // thirdElement = 3 (value of the third element in the array)
```

5. **Dynamic Memory Allocation**: Pointers are often used for dynamic memory allocation using `new` and deallocation using `delete`.

```cpp
int* dynamicPtr = new int; // Allocate memory for an integer dynamically
*dynamicPtr = 42; // Store a value in the dynamically allocated memory

// Don't forget to deallocate the memory to avoid memory leaks
delete dynamicPtr;
```

6. **Null Pointers**: Pointers can have a special value of `nullptr`, which indicates that they are not pointing to any valid memory location.

```cpp
int* nullPtr = nullptr; // Null pointer
```

7. **Pointers to Classes and Objects**: Pointers can also be used with classes and objects. Accessing class members through pointers can be done using the arrow operator (->).

```cpp
class MyClass {
public:
    int value;
};

MyClass obj;
MyClass* ptr = &obj;
ptr->value = 42; // Accessing 'value' member of obj through pointer
```

8. **Pointer Safety**: Using pointers incorrectly can lead to undefined behavior, such as accessing invalid memory locations or dereferencing null pointers. Be careful while working with pointers to avoid memory-related bugs.

> C++ pointers provide significant flexibility and power, but they require careful handling to avoid memory-related issues. It's recommended to use modern C++ features like smart pointers (`std::unique_ptr` and `std::shared_ptr`) or containers (`std::vector`, `std::array`, etc.) when possible, as they help manage memory automatically and reduce the chances of pointer-related bugs.

---

### 9 - C++ OOP :

#### A - Intro to OOP :

> Classes are an expanded concept of data structures: like data structures, they can contain data members, but they can also contain functions as members.
> An object is an instantiation of a class. In terms of variables, a class would be the type, and an object would be the variable.
> Classes are defined using either keyword class or keyword struct, with the following syntax:

```c++
class class_name {
  access_specifier_1:
    member1;
  access_specifier_2:
    member2;
  ...
} object_names;
```

---

#### B - Classes :

> Inside a class definition we can define variables and functions that belong to this particular instance of
> the class (object). These members have different accessibility levels such as public, private etc., which determine
> our class called an **object**. These objects have their own set of data members (variables) which store information about our object's state, as well as its behavior through methods (functions).

```c++
#include <iostream>
#include <string>
using namespace std;

// Defining Class Person
class Person{
    //attributes
    public:
        string name;
        int age;

    //methods
    void printDetails(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

int main() {
    //creating objects for person class
    Person p1,p2;
    //assigning values to attributes
    p1.name="John";
    p1.age=30;
    p2.name="Mary";
    p2.age=45;
    //calling methods on both objects
    p1.printDetails();
    p2.printDetails();
    return 0;
}
```

    Output:
        Name: John
        Age: 30
        Name: Mary
        Age: 45

> In the above code snippet `Person` is our defined class with two data members i.e. :
>
> - A variable named as "name" which stores strings representing names of persons in an organization or any
>   other place where you need it. It has been declared inside the scope of Public access specifier so
>   that other classes within your program may also use these member variables without having direct access to them.
>   that all other classes within same program have direct access to its value.
> - An integer type member called "age". This represents ages of people and can be used later to calculate some statistics based upon their demographics like average age etc..
> - We also define one method called 'printDetails()' that prints out details about each object created from this class.

---

#### C - Constructor :

> A constructor is a special type of member function used when we create object from this particular class and initializes some initial state/value.
> A constructor initializes a new object when created and sets initial state of variables.
> Constructors are used to initialize member variables during creation time rather than assigning them later using assignment operator (=).
> They have the same name as the class and do not have a return type (not even void).

> Here are the key points about C++ class constructors:
>
> - Default Constructor: If a class does not define any constructors, the compiler provides a default constructor. The default constructor has no parameters and initializes the class's data members to their default values (e.g., 0 for numeric types, empty for strings, and null for pointers).
> - Parameterized Constructor: A parameterized constructor accepts arguments and uses them to initialize the class's data members. It allows you to provide initial values to the object when it is created.
> - Copy Constructor: The copy constructor creates a new object as a copy of an existing object. It is called when an object is passed by value, returned by value, or explicitly copied using the assignment operator. If not provided by the programmer, the compiler generates a default copy constructor that performs a shallow copy (copying the values of data members).
> - Destructor: The destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. It is responsible for releasing any resources allocated by the object, such as dynamic memory or file handles.

> Here's an example that demonstrates different types of constructors:

```c++
// Example Class with Constructors in C++
#include <iostream>

class MyClass {
private:
    int value;

public:
    // Default Constructor
    MyClass() {
        std::cout << "Default constructor called." << std::endl;
        value = 0;
    }

    // Parameterized Constructor
    MyClass(int v) {
        std::cout << "Parameterized constructor called." << std::endl;
        value = v;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called." << std::endl;
        value = other.value;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for value: " << value << std::endl;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj1; // Calls the default constructor
    MyClass obj2(42); // Calls the parameterized constructor

    MyClass obj3 = obj2; // Calls the copy constructor
    MyClass obj4(obj2); // Also calls the copy constructor

    std::cout << "Value of obj3: " << obj3.getValue() << std::endl;
    std::cout << "Value of obj4: " << obj4.getValue() << std::endl;

    return 0;
}
```

> In this example, we define a class MyClass with a default constructor, a parameterized constructor, a copy constructor, and a destructor. In the main() function, we create objects using different constructors to observe their behaviors.

> When you run this program, the output will be:

    Default constructor called.
    Parameterized constructor called.
    Copy constructor called.
    Copy constructor called.
    Value of obj3: 42
    Value of obj4: 42
    Destructor called for value: 42
    Destructor called for value: 42
    Destructor called for value: 42
    Destructor called for value: 0

> As you can see, constructors are called automatically when objects are created and destructors are called when objects go out of scope. Constructors and destructors are essential for managing the lifecycle of objects and resources in C++.

> **Note:** > **Member initialization in constructors :**</br>
> When a constructor is used to initialize other members, these other members can be initialized directly, without resorting to statements in its body. This is done by inserting, before the constructor's body, a colon (:) and a list of initializations for class members. For example, consider a class with the following declaration:

```c++
class Rectangle {
    int width,height;
  public:
    Rectangle(int,int);
    int area() {return width*height;}
};
```

> The constructor for this class could be defined, as usual, as:

1- Rectangle::Rectangle (int x, int y) { width=x; height=y; }

> But it could also be defined using member initialization as:

2 - Rectangle::Rectangle (int x, int y) : width(x) { height=y; }

Or even:

3 - Rectangle::Rectangle (int x, int y) : width(x), height(y) { }

> **Note :** how in this last case, the constructor does nothing else than initialize its members, hence it has an empty function body.
> For members of fundamental types, it makes no difference which of the ways above the constructor is defined, because they are not initialized by default, but for member objects (those whose type is a class), if they are not initialized after the colon, they are default-constructed.
> Default-constructing all members of a class may or may always not be convenient: in some cases, this is a waste (when the member is then reinitialized otherwise in the constructor), but in some other cases, default-construction is not even possible (when the class does not have a default constructor). In these cases, members shall be initialized in the member initialization list. For example:

```c++

// member initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) { }
    double area() {return radius*radius*3.14159265;}
};

class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {return base.area() * height;}
};

int main () {
  Cylinder foo (10,20);

  cout << "foo's volume: " << foo.volume() << '\n';
  return 0;
}
```

> In this example, class Cylinder has a member object whose type is another class (base's type is Circle). Because objects of class Circle can only be constructed with a parameter, Cylinder's constructor needs to call base's constructor, and the only way to do this is in the member initializer list.
> These initializations can also use uniform initializer syntax, using braces {} instead of parentheses ():
> Cylinder::Cylinder (double r, double h) : base{r}, height{h} { }

---

#### D - Classes defined with struct and union :

> Classes can be defined not only with keyword class, but also with keywords struct and union.

> The keyword struct, generally used to declare plain data structures, can also be used to declare classes that have member functions, with the same syntax as with keyword class. The only difference between both is that members of classes declared with the keyword struct have public access by default, while members of classes declared with the keyword class have private access by default. For all other purposes both keywords are equivalent in this context.

> Conversely, the concept of unions is different from that of classes declared with struct and class, since unions only store one data member at a time, but nevertheless they are also classes and can thus also hold member functions. The default access in union classes is public.

struct:
In C++, a struct is a class with all its members public by default. This means that you can access the data members of a struct object directly, just like accessing the members of a class with public access specifiers.
You can define member functions inside a struct, making it similar to a class with public access.
The memory layout of a struct is such that each data member is allocated sequentially in memory.
Here's an example of a struct in C++:

```c++

#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person1;
    person1.name = "Alice";
    person1.age = 30;

    std::cout << "Name: " << person1.name << ", Age: " << person1.age << std::endl;
    return 0;
}
```

union:
A union is a special class where all its members share the same memory location. This means that only one member of the union can be valid at a time, and accessing one member will overwrite the other members' values.
Unions are useful when you want to represent different types of data in the same memory location, but you only need one member at a time.
It's essential to be careful while using unions, as accessing the wrong member can lead to undefined behavior.
Here's an example of a union in C++:

```c++
#include <iostream>

union Data {
    int i;
    double d;
    char c;
};

int main() {
    Data data;
    data.i = 42;
    std::cout << "Integer value: " << data.i << std::endl;

    data.d = 3.14;
    std::cout << "Double value: " << data.d << std::endl;

    // Accessing c overwrites the value of i and d
    data.c = 'A';
    std::cout << "Character value: " << data.c << std::endl;

    // The output of this line will be unpredictable, as 'A' overwrites the previous integer value (42)
    std::cout << "Integer value: " << data.i << std::endl;
    return 0;
}
```

> As shown in the example, you can access the members of the struct directly and separately, while accessing one member of the union will affect the values of other members. Therefore, use unions carefully to avoid unintended behavior.

---

#### E - Encapsulations :

> Encapsulation is one of the four fundamental principles of object-oriented programming (OOP) and is a crucial concept in C++. It refers to the bundling of data and the methods that operate on that data within a single unit, which is known as a class. The data members of the class are usually kept private or protected, and the class provides public methods (member functions) through which the data can be accessed and modified.

In C++, encapsulation helps in achieving data hiding and data protection, providing control over the accessibility of class members to the outside world. The idea is to hide the implementation details of the class from users and allow them to interact with the class through a well-defined interface.

Here's an example of encapsulation in C++:

```cpp
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Public member functions to access and modify the private data members
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cout << "Invalid age value. Age cannot be negative." << std::endl;
        }
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Person person1;
    person1.setName("Alice");
    person1.setAge(30);

    std::cout << "Name: " << person1.getName() << ", Age: " << person1.getAge() << std::endl;

    // We cannot access the private members directly
    // person1.name = "Bob"; // This will result in a compile-time error

    return 0;
}
```

In this example, we have a `Person` class with private data members `name` and `age`. The class provides public member functions (`setName()`, `setAge()`, `getName()`, and `getAge()`) to access and modify the private data members. These functions serve as the interface for interacting with the `Person` class.

Encapsulation allows us to hide the implementation details of the class (e.g., data members) and provide a controlled and safe way to manipulate the class's data. It improves code maintainability, flexibility, and reusability by decoupling the interface from the implementation.

By keeping the data members private, you can ensure that the internal state of the class is not directly accessible from outside code, reducing the risk of unintended modifications and enhancing the security and reliability of your program.

---

#### F - Friendship and inheritance :

> In C++, friendship and inheritance are two different concepts related to the access control and relationships between classes. Let's discuss each concept separately:

##### 1. **Friendship :**

> In C++, friendship is a mechanism that allows a class or function to access the private and protected members of another class. When a class or function is declared as a friend of another class, it gains special access rights to that class, as if it were part of that class. Friendship is typically used when you want to grant specific access privileges to certain entities, even if they are not directly related through inheritance or other means.

> To declare a class or function as a friend of another class, you typically place a friend declaration inside the class that wants to grant access. For example:

```cpp
class FriendClass {
private:
    int privateData;

public:
    FriendClass() : privateData(42) {}

    // Friend function declaration
    friend void FriendFunction(FriendClass& obj);
};

// Friend function definition
void FriendFunction(FriendClass& obj) {
    // Friend function can access private members of FriendClass
    std::cout << "Accessing private data: " << obj.privateData << std::endl;
}
```

In this example, `FriendFunction` is declared as a friend of `FriendClass`, allowing it to access the private member `privateData`.

---

##### 2. **Inheritance :**

> Inheritance is a fundamental concept in object-oriented programming (OOP). It allows a class (derived class or subclass) to inherit properties and behaviors from another class (base class or superclass). The derived class can extend or override the functionality of the base class, and it can also add its own additional data members and member functions.

> To create a derived class, you use a colon (:) followed by the access specifier `public`, `protected`, or `private`, followed by the name of the base class. The access specifier determines how the members of the base class are inherited by the derived class. For example:

```cpp
class BaseClass {
public:
    void baseFunction() {
        std::cout << "BaseClass function" << std::endl;
    }
};

class DerivedClass : public BaseClass {
public:
    void derivedFunction() {
        std::cout << "DerivedClass function" << std::endl;
    }
};
```

In this example, `DerivedClass` is derived from `BaseClass` using public inheritance. This means that public members of `BaseClass` will be accessible as public members of `DerivedClass`.

There are several types of inheritance in C++, including public, protected, and private inheritance. Public inheritance means that the public members of the base class become public members of the derived class, while protected and private inheritance restrict the visibility of the inherited members.

Inheritance in C++ is a powerful tool for code reuse and organization. It allows you to create new classes that are based on existing classes, without having to rewrite all the code from scratch.

---

> Now, if you combine friendship and inheritance, you can have a friend function that accesses private members of a derived class as well:

```cpp
class BaseClass {
private:
    int privateData;

public:
    BaseClass() : privateData(42) {}

    // Friend function declaration
    friend void FriendFunction(BaseClass& obj);
};

void FriendFunction(BaseClass& obj) {
    // Friend function can access private members of BaseClass, including derived classes
    std::cout << "Accessing private data: " << obj.privateData << std::endl;
}

class DerivedClass : public BaseClass {
    // Additional data members and member functions of DerivedClass
};
```

In this example, the `FriendFunction` can access the private member `privateData` of both `BaseClass` and any class derived from `BaseClass`, including `DerivedClass`.

Remember that friendship should be used judiciously, as it breaks encapsulation and may lead to less maintainable code. It is typically employed when you have specific design considerations that require controlled access between classes. In most cases, prefer to use proper encapsulation and public interfaces for interacting with class members.

---

##### 3. **Inheritance between classes :**

> In C++, there are several types of inheritance that define how classes can inherit properties and behaviors from other classes. The main types of inheritance are:

i. Single Inheritance:
Single inheritance involves a class inheriting properties and behaviors from a single base class. In this type of inheritance, a derived class can only have one direct base class. It forms a simple hierarchy where each class is derived from a single class. For example:

```cpp
class BaseClass {
    // Base class members
};

class DerivedClass : public BaseClass {
    // Derived class members
};
```

ii. Multiple Inheritance:
Multiple inheritance involves a class inheriting properties and behaviors from multiple base classes. In this type of inheritance, a derived class can have more than one direct base class. Multiple inheritance allows a class to combine the features of multiple classes into a single class. For example:

```cpp
class BaseClass1 {
    // Base class 1 members
};

class BaseClass2 {
    // Base class 2 members
};

class DerivedClass : public BaseClass1, public BaseClass2 {
    // Derived class members
};
```

iii. Hierarchical Inheritance:
Hierarchical inheritance involves multiple derived classes inheriting from a single base class. This creates a hierarchical relationship where a single base class serves as the ancestor for multiple derived classes. For example:

```cpp
class BaseClass {
    // Base class members
};

class DerivedClass1 : public BaseClass {
    // Derived class 1 members
};

class DerivedClass2 : public BaseClass {
    // Derived class 2 members
};
```

iv. Multilevel Inheritance:
Multilevel inheritance involves a chain of inheritance, where a derived class itself becomes the base class for another class. It creates a hierarchy of classes, allowing the inheritance of properties and behaviors at different levels. For example:

```cpp
class GrandParentClass {
    // Grandparent class members
};

class ParentClass : public GrandParentClass {
    // Parent class members
};

class ChildClass : public ParentClass {
    // Child class members
};
```

v. Hybrid (or Virtual) Inheritance:
Hybrid or virtual inheritance is a combination of multiple inheritance and multilevel inheritance. It is used to avoid the "diamond problem" that arises when a class inherits from two or more classes that have a common base class. The virtual keyword is used in the inheritance to resolve ambiguity. It is not as common as other types of inheritance and is used in specific situations. For example:

```cpp
class BaseClass {
    // Base class members
};

class DerivedClass1 : virtual public BaseClass {
    // Derived class 1 members
};

class DerivedClass2 : virtual public BaseClass {
    // Derived class 2 members
};

class FinalClass : public DerivedClass1, public DerivedClass2 {
    // Final class members
};
```

> These are the main types of inheritance in C++. Each type of inheritance serves different purposes and allows you to create class hierarchies that suit your program's requirements. When using inheritance, it is important to consider the relationships between classes and the access specifiers (public, protected, private) to ensure proper access control and data encapsulation.

---

##### 4. **Multiple inheritance :**

> Multiple inheritance in C++ allows a class to inherit properties and behaviors from more than one base class. This means that a derived class can have multiple direct base classes, each contributing to the characteristics of the derived class. Multiple inheritance can be useful in certain situations where a class needs to combine features from multiple sources.

> To use multiple inheritance, you list the base classes separated by commas in the derived class declaration, and you specify the access specifiers for each base class. The access specifiers determine how the members of the base classes are inherited by the derived class: `public`, `protected`, or `private`.

Here's the syntax for a class with multiple inheritance:

```cpp
class BaseClass1 {
    // Base class 1 members
};

class BaseClass2 {
    // Base class 2 members
};

class DerivedClass : access_specifier BaseClass1, access_specifier BaseClass2 {
    // Derived class members
};
```

> Let's see an example to illustrate multiple inheritance:

```cpp
#include <iostream>

class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Color {
public:
    void fill() {
        std::cout << "Filling with color." << std::endl;
    }
};

class Square : public Shape, public Color {
public:
    void printInfo() {
        std::cout << "Square: ";
        draw();
        fill();
    }
};

int main() {
    Square square;
    square.printInfo();

    return 0;
}
```

In this example, we have three classes: `Shape`, `Color`, and `Square`. The `Square` class inherits from both `Shape` and `Color` using multiple inheritance. The `printInfo()` method in the `Square` class calls `draw()` and `fill()` methods from the respective base classes `Shape` and `Color`.

Output:

```
Square: Drawing a shape.
Filling with color.
```

As you can see, `Square` is able to access and use the functionalities of both `Shape` and `Color` due to multiple inheritance.

It's essential to be careful when using multiple inheritance, as it can lead to ambiguity if two base classes have methods with the same name. Additionally, it can make the class hierarchy more complex, and managing relationships between multiple base classes might require extra attention. In such cases, virtual inheritance can be used to avoid ambiguity and the "diamond problem" associated with multiple inheritance.

---

##### 5. **Virtual inheritance :**

> Virtual inheritance is a feature in C++ that is used to address the "diamond problem," which arises when a class inherits from two or more classes that have a common base class. The diamond problem results in ambiguity in the inheritance hierarchy, as the derived class may have multiple copies of the common base class due to multiple inheritance paths.

>Consider the following example to understand the diamond problem:

```cpp
class Animal {
public:
    void makeSound() {
        std::cout << "Animal sound" << std::endl;
    }
};

class Mammal : public Animal {
public:
    void eat() {
        std::cout << "Mammal eating" << std::endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        std::cout << "Bird flying" << std::endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    // ...
};
```

In this example, the `Bat` class is derived from both `Mammal` and `Bird`, and both `Mammal` and `Bird` inherit from `Animal`. Due to this multiple inheritance, `Bat` has two copies of the `Animal` class - one through `Mammal` and another through `Bird`.

To resolve this ambiguity and have only one instance of the common base class, you can use virtual inheritance. To make a base class virtually inherited, you use the `virtual` keyword in the inheritance declaration of the derived class.

Here's how to modify the example using virtual inheritance:

```cpp
class Animal {
public:
    void makeSound() {
        std::cout << "Animal sound" << std::endl;
    }
};

class Mammal : virtual public Animal { // Note the "virtual" keyword here
public:
    void eat() {
        std::cout << "Mammal eating" << std::endl;
    }
};

class Bird : virtual public Animal { // Note the "virtual" keyword here
public:
    void fly() {
        std::cout << "Bird flying" << std::endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    // ...
};
```

By using virtual inheritance, both `Mammal` and `Bird` share a single instance of the `Animal` class, and the diamond problem is resolved. Now, the `Bat` class contains only one copy of the `Animal` class, avoiding ambiguity.

Virtual inheritance should be used with caution and only when it is necessary to resolve ambiguity in multiple inheritance scenarios. It adds some overhead due to the runtime lookup for virtual base classes, so it's better to use regular inheritance when virtual inheritance is not required.

---

#### G - Polymorphism :

---

#### H- Abstract base classes :


> In C++, an abstract base class is a class that cannot be instantiated directly and is designed to be used as a base class for other classes. It contains one or more pure virtual functions, which are virtual functions with no implementation in the abstract base class. The presence of at least one pure virtual function in a class makes it an abstract base class.

>An abstract base class serves as an interface for derived classes, providing a common set of virtual functions that derived classes must override. This allows you to define a common interface while leaving the implementation details to the derived classes.

Here's an example of an abstract base class in C++:

```cpp
#include <iostream>

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double getArea() const = 0;

    // Virtual function with a default implementation
    virtual void printInfo() const {
        std::cout << "Shape information: Unknown" << std::endl;
    }

    // Non-virtual function
    void commonFunction() const {
        std::cout << "Common function in Shape" << std::endl;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    // Override the pure virtual function
    double getArea() const override {
        return 3.14159 * radius * radius;
    }

    // Override the virtual function
    void printInfo() const override {
        std::cout << "Shape: Circle, Area: " << getArea() << std::endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double width, double height) : width(width), height(height) {}

    // Override the pure virtual function
    double getArea() const override {
        return width * height;
    }

    // Override the virtual function
    void printInfo() const override {
        std::cout << "Shape: Rectangle, Area: " << getArea() << std::endl;
    }
};

int main() {
    // Cannot create an object of an abstract base class
    // Shape shape; // Error: cannot instantiate abstract class

    // However, we can use pointers or references to abstract base class
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shapePtr1 = &circle;
    Shape* shapePtr2 = &rectangle;

    shapePtr1->printInfo(); // Output: Shape: Circle, Area: 78.5398
    shapePtr2->printInfo(); // Output: Shape: Rectangle, Area: 24

    return 0;
}
```

In this example, the `Shape` class is an abstract base class with a pure virtual function `getArea()` and a virtual function `printInfo()`. It also has a non-virtual function `commonFunction()`. The `Shape` class cannot be instantiated directly due to the pure virtual function.

The `Circle` and `Rectangle` classes are derived from the `Shape` class. They override the pure virtual function `getArea()` to provide their own implementations. The `printInfo()` function is also overridden in each derived class to provide specialized information.

The `main()` function demonstrates the use of pointers to the abstract base class. We cannot create objects of the `Shape` class directly, but we can use pointers to handle objects of derived classes. This allows us to create a common interface for various shapes while preserving polymorphism and dynamic dispatch.









        Pointers to base class
        Virtual members
        lists
        map
        set