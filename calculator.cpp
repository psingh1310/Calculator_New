#include<iostream>
using namespace std;

void displayMenu() {
	cout << "~~~~~~~~CALCULATOR PROGRAM~~~~~~~~~~~~~~~\n";
	cout << "TO ADD NUMBERS------------->PRESS 1\n";
	cout << "TO SUBTRACT NUMBERS-------->PRESS 2\n";
	cout << "TO MULTIPLY NUMBERS-------->PRESS 3\n";
	cout << "TO DIVIDE NUMBERS---------->PRESS 4\n";
	cout << "PS: ANY OTHER KEY IS CONSIDERED AS EXIT\n";
}

double addFunc(double v1, double v2) {
	
	return v1 + v2;
}

double subFunc(double v1, double v2) {
	return v1 - v2;
}

double mulFunc(double v1, double v2) {
	return v1 * v2;
}

double divideFunc(double v1, double v2) {
	double res = v2 != 0 ? v1 / v2 : 0;
	return res;
}



bool processMenu(int choice,int v1,int v2) {
	//Fallthrough feature in switch...
	switch (choice)
	{
	case 1:
		cout << "Adding" << addFunc(v1,v2) << endl;
		break;
	case 2:
		cout << "Substracting" << subFunc(v1,v2) << endl;
		break;
	case 3:
		cout << "Multiplying" << mulFunc(v1,v2) <<endl;
		break;
	case 4:
		cout << "Dividing" << divideFunc(v1,v2)<< endl;
		break;
	default:
		return false;
	}
	return true;
}


int main() {
	double a, b;
	cout << "Enter the value" << endl;
	cin >> a >> b;
    bool continuing = true;
	do
	{
		displayMenu();
		int choice = 0;
		cin >> choice;
		cout << "Choice is " << choice << endl;
		continuing = processMenu(choice,a,b);
	} while (continuing); //bool condition....

}
