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
		if (num>=1 && num<=12)
			{
			cnt=cnt++;
			}
		else if (num == 1)
		    {
		    cout << "The demand is:21";
		    cout << endl;
		    
		    cout << "The prediction is:21";
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
		      
		      
		      
		      result = prediction * 18 + (1-prediction) * 22.52;
		      cout << "The prediction is:";
		      cout << result;
		      cout << endl;
		    }	
		
		else 
			cout<<endl;		
		}
	
	}	
	while (num!=0);
	  cout << "Enter the right number!";
      cout << endl;

	
	return 0;
}
