

#include <bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
typedef double d;


void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
 //COLORS LIST
//1: Blue
//2: Green
//3: Cyan
//4: Red
//5: Purple
//6: Yellow (Dark)
//7: Default white
//8: Gray/Grey
//9: Bright blue
//10: Brigth green
//11: Bright cyan
//12: Bright red
//13: Pink/Magenta
//14: Yellow
//15: Bright white
//Numbers after 15 include background colors
}



// Function to convert Celsius to Fahrenheit and Kelvin
void convertFromCelsius(d celsius) {
    d fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    d kelvin = celsius + 273.15;

    cout << ">"<<"Entered Temperature in fahrenheit: " << fahrenheit << " °F" << endl;
    cout << ">"<<"Entered Temperature in kelvn: " << kelvin << " K" << endl;
}

// Function to convert Fahrenheit to Celsius and Kelvin
void convertFromFahrenheit(d fahrenheit) {
    d celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    d kelvin = celsius + 273.15;

    cout << ">"<<"Entered Temperature in celsius: " << celsius << " °C" << endl;
    cout << ">"<<"Entered Temperature in kelvin: " << kelvin << " K" << endl;
}

// Function to convert Kelvin to Celsius and Fahrenheit
void convertFromKelvin(d kelvin) {
    d celsius = kelvin - 273.15;
    d fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << ">"<<"Entered Temperature in celsius: " << celsius << " °C" << endl;
    cout << ">"<<"Entered Temperature in fahrenheit: " << fahrenheit << " °F" << endl;
}


int main() {
    d temperature;
    char unit;

    // user input
    // Color(4);
    Color(16);
    cout<<"****************************************************"<<endl;
    cout<<"*              |TEMPERATURE CONVERTER|             *"<<endl;
    cout<<"****************************************************"<<endl;
    // getch();

    Color(2);
    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Enter the unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    Color(6);
    switch (unit) {
        case 'C':
        case 'c':
            convertFromCelsius(temperature);
            break;
        case 'F':
        case 'f':
            convertFromFahrenheit(temperature);
            break;
        case 'K':
        case 'k':
            convertFromKelvin(temperature);
            break;
        default:
            cout << "Invalid unit entered. Please use C, F, or K." << endl;
            break;
    }
    getch();
    return 0;
}