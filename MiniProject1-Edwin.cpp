// Submitted By: Mervyn Edwin
// Submitted To: Edper Castro
// Mini Project 1
#include <iostream>
using namespace std;

int main()
{
    int month;
    char ans;
    double result;
    const double prediction=0.1;
    const double prediction_2=0.2;
    
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
            cout << "The demand is: 18";
            cout << endl;
            
            result = prediction * 18 + (1-prediction) * 21.00;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 18 + (1-prediction_2) * 21.00;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            break;
            
        case 3:
            cout << "The demand is: 35";
            cout << endl;
            
            result = prediction * 35 + (1-prediction) * 20.70;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 35 + (1-prediction_2) * 20.70;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 4:
            cout << "The demand is: 26";
            cout << endl;
            
            result = prediction * 26 + (1-prediction) * 22.13;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 26 + (1-prediction_2) * 22.;13;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 5:    
            cout << "The demand is: 33";
            cout << endl;
            
            result = prediction * 33 + (1-prediction) * 22.52;
            cout << "The prediction is:";
            cout << result;
            
            cout << endl; cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 33 + (1-prediction_2) * 22.52;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
             
            
            break;
            
        case 6:    
            cout << "The demand is: 23";
            cout << endl;
            
            result = prediction * 23 + (1-prediction) * 23.57;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 23 + (1-prediction_2) * 23.57;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 7:    
            cout << "The demand is: 43";
            cout << endl;
            
            result = prediction * 43 + (1-prediction) * 23.51;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 43 + (1-prediction_2) * 23.51;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 8:    
            cout << "The demand is: 22";
            cout << endl;
            
            result = prediction * 22 + (1-prediction) * 25.46;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 22 + (1-prediction_2) * 25.46;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 9:    
            cout << "The demand is: 33";
            cout << endl;
            
            result = prediction * 33 + (1-prediction) * 25.11;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
            cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 33 + (1-prediction_2) * 25.11;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
         case 10:    
            cout << "The demand is: 23";
            cout << endl;
            
            result = prediction * 23 + (1-prediction) * 25.90;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 23 + (1-prediction_2) * 25.90;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 11:    
            cout << "The demand is: 42";
            cout << endl;
            
            result = prediction * 42 + (1-prediction) * 25.61;
            cout << "The prediction is:";
            cout << result;
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
            if ( ans == 'Y' || ans == 'y')
             {   
                result = prediction_2 * 42 + (1-prediction_2) * 25.61;
                cout << "The prediction for 0.2 is:";
                cout << result;
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            break;
            
        case 12:           
            cout << "The prediction is:27.25";
            cout << endl;
            
             cout << " Do you wish to view the 0.2 prediction? (Y for yes and N for no)";
            cin >> ans;
            cout << endl;
            
             if ( ans == 'Y' || ans == 'y')
             {   
            
                cout << "The prediction for 0.2 is: 28.90";
                cout << endl;
             }  
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Thank you for viewing our demand forecasting system";
                cout << endl;
            }   
            else
             {   cout << "Error! Please input the right letter....";
                cout << endl;
             }
            
            
            break;
            
        default:
            cout << "Error! Please input the right number! Program Terminated.................";
            cout << endl;
    }
}
    
    
    
    
    
