#include <iostream>
using namespace std;
int main(){
	int i=1,inp;
	float km,foot;
	while (true){
		cout<<"\n================================\n";
		cout<<"1. Meters to Kilometers\n2. Meters to Centimeters\n3. Meters to Millimeters\n4. Meters to Feet\n5. Meters to Inches\n6. Exit\n";
		cout<<"================================\n";
		cout<<"Enter choice: ";
		cin>>i;
		double len;
		double res;
		switch(i){
			case 1 :
			
			        cout<<"\nEnter the value:\n";
					cin>>len;
					res = len/1000.0;
					cout<<"The converted value is:"<<res;
					break;
			
			case 2:
				cout<<"Enter length in meters";
				cin>>length;
				
				result=rlength*100;
				
				cout<<"Length in centimeters:"<<result<<endl;
				break;
		}
	}

	return 0;
}