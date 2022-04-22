#include <iostream>
#include <iomanip>
#include<stdio.h>

using namespace std;

int main(){
//user input
	int choice;
	int num;
	int lengthFeet, lengthInch;
	int widthFeet, widthInch;
	int i;
	int regular;


//converts feet to inches
	int conversionLength = lengthFeet * 0.3048;
	int conversionWidth = widthFeet * 0.3048;

	int conversionLengthInches = lengthInch * 0.0254;
	int conversionWidthInches = widthInch * 0.0254;

	int length = conversionLength + conversionLengthInches;
	int width = conversionWidth + conversionWidthInches;

int slip (int length, int width);

if(length < 9 && width < 5 && num <= 30){
	return regular;
// } else if(length > 8 || < 16 && )


	



	while(1){
		cout << "Welcome to the Marina " << endl;
		cout << "________________________ \n";
	cout << " 1 - Enter the length of the boat (feet+inches) \n";
    cout << " 2 - Enter the beam (width) of the boat (feet+inches) \n";
    cout << " 3 - Enter the electrical requirement for the boat (None, 30Amp, 50Amp) \n";
    cout << " 4 - System Outputs the recommended Slip (dock) Assignment \n";
    cout << " Please enter a option: " ;

    cin >> choice;


	if(choice == 0 || choice > 4){
		cout << "Thats not a valid option... \n";
		}
	
	// if(length = )

	switch(choice){
		case 1:
			cout << "Enter how many feet is your boat is: ";
			cin >> lengthFeet;

			cout << "and now enter the inces of your boat: ";

			cout << "The length of the boat is: " << lengthFeet << conversionLength << "meters" << endl;
			break;

		case 2:
			cout << "Enter the width of your boat: " << endl;
			cin >> lengthWidth;

			cout << "The width of the boat is: " << lengthWidth << conversionWidth << "meters" << endl;
			break;
		
		case 3: 
			cout << "Enter the electrical requirements of your boat: " << endl;
			cin >> num;

			cout << "The electrical requirements of the boat are: " << num << "amps" << endl;
			break;

		case 4:
        	cout << "The recommended slips for your boat is " << regular;
			exit(0);
	}
	}
	cout << "Thanks for stopping by the Marina";
	return 0;
}