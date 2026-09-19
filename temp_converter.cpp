#include <iostream>
#include <cctype>

using namespace std;

int main() {

    string confirm;
    do
    {
        cout << "must use abbreviations for temp";
        cout << "accepted ones include 'F' - 'C' - 'K'";
        cout << "type 'okay' to continue: ";
        cin >> confirm;
    }
    while (confirm != "okay");


        // Program can only use first letter of measurement of temperature
        // F (Farenheight)   C (Celsius)  K (Klien)
    double temp;
    cout << "enter a temp: ";
    cin >> temp;

    char from;
    cout << "what unit of measurement (F, C, K)? ";
    cin >> from;
    from = toupper(from);

    char to;
    cout << "what to do you want to convert to (F, C, K)? ";
    cin >> to;
    to = toupper(to);

    
    cout << "you want to convert " << temp << " " << from << " to " << to << endl;

    if (from == 'C' && to == 'F')
    {
        double result = (temp * 9.0/5.0) + 32;
        cout << "resulting temperature is " << result << "F" << endl;
    }

    if (from == 'F' && to == 'C')
    {
        double result = (temp - 32) * 5.0/9.0;
        cout << "resulting temperature is " << result << "C" << endl;      
    }

    if (from == 'F' && to == 'K')
    {
        double result = (temp - 32) * 5.0/9.0 + 273.15;
        cout << "resulting temperature is " << result << "K" << endl;
    }

    if (from == 'C' && to == 'K')
    {
        double result = temp + 273.15;
        cout << "resulting temperature is " << result << "K" << endl;
    }

    if (from == 'K' && to == 'C')
    {
        double result = temp - 273.15;
        cout << "resulting temperature is " << result << "C" << endl; 
    }

    if (from == 'K' && to == 'F')
    {
        double result = (temp - 273.15) * 9.0/5.0 + 32;
        cout << "resulting temperature is " << result << "F" << endl;
    }

    if (from == 'K' && to == 'K')
    {
        cout << "resulting temperature is " << temp << "K" << endl;
    }

    if (from == 'C' && to == 'C')
    {
        cout << "resulting temperature is " << "C" << temp << endl;
    }

    if (from == 'F' && to == 'F')
    {
        cout << "resulting temperature is " << "F" << temp << endl;
    }

    return 0;
}