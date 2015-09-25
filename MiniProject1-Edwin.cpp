// Submitted By: Mervyn Edwin
// Submitted To: Edper Castro
// Mini Project 1
#include <iostream>
using namespace std;

int main()
{
    int month;
    double result;
    const double prediction=0.1;
    
    cout << " Welcome to the Consumer Demand Forecasting:Exponential Smoothing Programming System";
    cout << endl;
    
    cout << " To begin...." << endl;
    cout << " Please enter the month (numeric) to view the 12 month demand prediction:";
    cin >> month;
    cout << endl;
    
    switch (month)
    {    
        case 1:
            cout << "The demand is: 21";
            cout << endl;
            
            cout << "The prediction is: 21.00";
            cout << endl;
            
            break;
            
        case 2:
            cout << "The demand is 18";
            cout << endl;
            
            result = prediction * 18 + (1-prediction) * 21.00;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            break;
            
        case 3:
            cout << "The demand is 35";
            cout << endl;
            
            result = prediction * 35 + (1-prediction) * 20.70;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            break;
            
        case 4:
            cout << "The demand is 26";
            cout << endl;
            
            result = prediction * 26 + (1-prediction) * 22.13;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            break;
            
        case 5:    
            cout << "The demand is 33";
            cout << endl;
            
            result = prediction * 33 + (1-prediction) * 22.52;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            break;
            
            
            
        default:
            cout << "Error! Please input the right number........";
            cout << endl;
    }
}
    
    
    
    
