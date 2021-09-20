#include <iostream> 

using namespace std; 

int main() {
	int e, c, s, x, z, k, temp, total;
	
	total = 0;
	e = 35;
	c = 45;
	s = 95;
	
	
	cout << "Hello. We offer 3 different types of vehicles \nEconomy = $35 per day | Compact = $45 per day | Standard = $95 per day\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\nPlease choose the rental car (1 for Economy, 2 for Compact, 3 for Standard): "; 
	
	cin >> x;
	
	switch(x) {
		case 1:
		 total = 35;
		break;
		
		case 2:
		 total = 45;
		break;
		
		case 3:
		 total = 95; 
		break;
		
		default:
		cout << "please enter one of the correct numbers" << endl; 
		
	}
	
	
	cout << "Please enter the number of rental days: ";
	
	cin >> k;
	total = total * k;
	
	
	cout << "Are you a club member? (1 for yes, 2 for no): ";
	cin >> z;
	
	cout << "\nYour base cost is: " << total << endl;
	
	if (z == 1) {
		total = total - (total * .15);
		
	}
	
	
	cout << "\nYour total estimate after discount is: " << total << endl; 
	
	
	return 0;
} 