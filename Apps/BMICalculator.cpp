#include <iostream>
#include <math.h>

using namespace std;

float calcBMIFun(float weight, float height)
{
    // BMI = weight(kg) / (height * height(m))
    float result = weight / pow(height, 2);
    return result;
}

int main()
{
    float weight, height, bmi;
    cout << "==========================================================" << endl;
    cout << "----- Body Mass Index Calculator -----" << endl;
    cout << "enter your weight (kg) :" << endl;
    cin >> weight;
    cout << "Enter Your Height in (m) :" << endl;
    cin >> height;

    bmi = calcBMIFun(weight, height);
    cout << "Your body mass index is : " << bmi << endl;

    if (bmi < 18.5)
        cout << "You are underweight \n";
    else if ((bmi >= 18.5 && bmi <= 24.9))
    {
        cout << "You have a normal weight \n";
    }
    else if ((bmi >= 25 && bmi <= 29.9))
        cout << "You've overweight ! \n";
    else
    {
        cout << "You have Obesity ! \n";
    }
    cout << "==========================================================" << endl;

    system("pause>0");
}

/*
    BMI of less than 18.5 is considered underweight, a BMI between 18.5 and 24.9 is considered normal weight, a BMI between 25 and 29.9 is considered overweight, and a BMI of 30 or higher is considered obese.
*/