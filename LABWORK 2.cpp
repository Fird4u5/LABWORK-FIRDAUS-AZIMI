/*
	Program Purpose : Convert temperature between Celsius and Farhenheit or vice versa.
	Programmer 		: Firdaus Azimi Bin Syahrulnizam
	Date 			: 19/04/2024
*/

#include <iostream>
using namespace std;

//function converter
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main()
{
    double temperature;
    char scale;

    cout << "Enter Temperature: ";
    cin >> temperature;

    cout << "Enter scale (C for Celsius, F for Fahrenheit): ";
    cin >> scale;

    if (scale == 'C' || scale == 'c')
    {
        double convertedTemp = celsiusToFahrenheit(temperature);
        cout << "Converted Temperature: " << convertedTemp << " F" << endl;
    }
    else if (scale == 'F' || scale == 'f')
    {
        double convertedTemp = fahrenheitToCelsius(temperature);
        cout << "Converted Temperature: " << convertedTemp << " C" << endl;
    }
    else
    {
        cout << "Invalid scale entered." << endl;
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
