#include <iostream>
#include <iomanip>

using namespace std;



int main(){
// user input options                                                        
	const int length = 1, width = 2, electrical = 3, recommendation = 4; 
//user input
	int choice;


	cout << "Welcome to the Marina " << endl;
		cout << "________________________";
	cout << " 1 - Enter the length of the boat (feet + inches or meters) \n";
    cout << " 2 - Enter the beam (width) of the boat (feet + inches or meters) \n";
    cout << " 3 - Enter the electrical requirement for the boat (None, 30Amp, 50Amp) \n";
    cout << " 4 - System Outputs the recommended Slip (dock) Assignment \n";
    cout << " Please enter a option... \n";

    cin >> choice;


	if (choice > 0 && choice < 8)
		cout << choice;
	else if (choice == 8)
		cout << " Sorry, please choose a valid option.";

	else if (choice == 1){
		cout << "the length of your boat is " << choice;
	    }
	else if (choice == 2){
        cout << "The width of the boat is " << choice;
	    }
    else if (choice == 3){
        cout << "the Amps of the boat are " << choice;
	    }
    else if (choice += 4){
        cout << "The recommended slips for your boat is " << choice;
	
	    }
    else if (choice == 8)
		cout << " Sorry, please choose a valid option.";




	}