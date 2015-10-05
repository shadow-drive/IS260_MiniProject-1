// IS_260_Mini_Project_1
//Submitted By:Mervyn Edwin
//Submitted To:Edper Castro

#include <iostream>
using namespace std;
int main()
{
	int num;	   		
	int cnt=0;
	double result;
	const double prediction=0.1;

	do 
	{
		cout<<"Enter month (numeric): ";
		cin>>num;
		{
		if (num == 1)
			{
			cnt=cnt++;
			cout << "The demand is 21:";
			cout << endl;
			
			cout << "The prediction is 21:";
			cout << endl;
			}
			
		else if (num == 2)
		    {
		    cout << "The demand is:18";
		    cout << endl;
		    
		    result = prediction * 18 + (1-prediction) * 21.00;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;
		    }	
			
	
		    
		else if (num == 3)
		    {
		      cout << "The demand is:35";
		      cout << endl;
		      
		      
		      
		      result = prediction * 35 + (1-prediction) * 20.70;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;
		    }	
			
	
	        
	   else if (num == 4)
		    {
		      cout << "The demand is:26";
		      cout << endl;
		      
		      
		      
		      result = prediction * 26 + (1-prediction) * 22.13;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;
		    }
		else if (num == 5)
		    {
		      cout << "The demand is:33";
		      cout << endl;
		      
		      
		      
		      result = prediction * 33 + (1-prediction) * 22.52;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
		    
		else if (num == 6)
		    {
		      cout << "The demand is:23";
		      cout << endl;
		      
		      
		      
		      result = prediction * 23 + (1-prediction) * 23.57;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
		    
		    
		 else if (num == 7)
		    {
		      cout << "The demand is:43";
		      cout << endl;
		      
		      
		      
		      result = prediction * 43 + (1-prediction) * 23.51;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
	        
	    else if (num == 8)
		    {
		      cout << "The demand is:22";
		      cout << endl;
		      
		      
		      
		      result = prediction * 22 + (1-prediction) * 25.46;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
		    
		else if (num == 9)
		    {
		      cout << "The demand is:33";
		      cout << endl;
		      
		      
		      
		      result = prediction * 33 + (1-prediction) * 25.11;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
	        
	   else if (num == 10)
		    {
		      cout << "The demand is:23";
		      cout << endl;
		      
		      
		      
		      result = prediction * 23 + (1-prediction) * 25.90;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
	   
	    else if (num == 11)
		    {
		      cout << "The demand is:42";
		      cout << endl;
		      
		      
		      
		      result = prediction * 42 + (1-prediction) * 25.61;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;     
		    }
	  
	    else if (num == 12)
		    {
		      cout << "The prediction is:27.25";
		      cout << endl;
		           
		    }
	    else 
		    cout << endl;
		}
	
	}	
	while (num !=0);
	
	  cout << "Enter the right number!";
      cout << endl;
	
		
	return 0;
}

