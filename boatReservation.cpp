#include <iostream>
#include <iomanip>
#include<stdio.h>

using namespace std;





int main(){
//user input
	int choice;
	int num;
	int i;

	unsigned long int fact;

	int conversion = num * 30.48;
	int slip;


	while(1){
		cout << "Welcome to the Marina " << endl;
		cout << "________________________ \n";
	cout << " 1 - Enter the length of the boat (Meters) \n";
    cout << " 2 - Enter the beam (width) of the boat (meters) \n";
    cout << " 3 - Enter the electrical requirement for the boat (None, 30Amp, 50Amp) \n";
    cout << " 4 - System Outputs the recommended Slip (dock) Assignment \n";
    cout << " Please enter a option: " ;

    cin >> choice;


	if(choice == 0 || choice > 4){
		cout << "Thats not a valid option... \n";
		}
	
	switch(choice){
		case 1:
			cout << "Enter the length of your boat: " << endl;
			cin >> num;

			cout << "The length of the boat is: " << num << conversion << "cm" << endl;
			break;

		case 2:
			cout << "Enter the width of your boat: " << endl;
			cin >> num;

			cout << "The width of the boat is: " << num << conversion << "cm" << endl;
			break;
		
		case 3: 
			cout << "Enter the electrical requirements of your boat: " << endl;
			cin >> num;

			cout << "The electrical requirements of the boat are: " << num << "amps" << endl;
			break;

		case 4:
        	cout << "The recommended slips for your boat is " << num;
			exit(0);
	}
	}
	cout << "Thanks for stopping by the Marina";
	return 0;
}