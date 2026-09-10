#include <iostream>
using namespace std;
int main(){
	int i=1,inp;
	float km,foot;
	while (i!=6){
		cout<<"\n================================\n";
		cout<<"1. Meters to Kilometers\n2. Meters to Centimeters\n3. Meters to Millimeters\n4. Meters to Feet\n5. Meters to Inches\n6. Exit\n";
		cout<<"================================\n";
		cout<<"Enter choice: ";
		cin>>i;
		double len;
		double res;
		switch(i){
			case 5:
				cout<<"Enter the length: ";
				cin>>len;
				res=len*39.37;
				cout<<"Result: "<<res;
				break;
			case 1 :
			
			        cout<<"\nEnter the value:\n";
					cin>>len;
					res = len/1000.0;
					cout<<"The converted value is:"<<res;
					break;
			
			case 2:
				cout<<"Enter length in meters";
				cin>>len;
				
				res=len*100;
				
				cout<<"Length in centimeters:"<<res<<endl;
				break;
				
			case 3:
					
					cout<<"give the value to be converted: "<<endl;
					cin>>len;
					
					res = len * 1000;
					cout<<"final answer after converting to millimeters = "<<res;
					break;
			
			case 4:
	                   cout<<"Enter the length(in metres): ";
	                   cin>>len;
					   foot= len/30;
					   cout<<"Length in foot is: "<<foot<<"\n";
					   break;
		}
	}

	return 0;
}