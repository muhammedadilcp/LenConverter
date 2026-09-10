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
		switch(i){
			
								case 3:
					
					cout<<"give the value to be converted: "<<endl;
					cin>>meter;
					
					millimeters = meter * 1000;
					cout<<"final answer after converting to millimeters = "<<millimeters;
					break;
			
		}
	}
	return 0;
}