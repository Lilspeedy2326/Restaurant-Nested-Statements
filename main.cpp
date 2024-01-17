#include<iostream>
using namespace std;
int main() {
	char input1;
	char input2;


	cout << "What would you prefer for dinner? (I)talian or (M)exican cuisine" << endl;
	cin >> input1;

	if (input1 == 'I') {
		cout << "What would you prefer to eat? (P)izza or (p)asta" << endl;
		cin >> input2;
		if (input2 == 'P')
			cout << "You should go to Mondo's Pizzza" << endl;
		else if (input2 == 'p')
			cout << "You should go to Mama louise Italian restaurant" << endl;
	}
	else if (input1 == 'M') {
		cout << "What would you prefer to eat? (T)acos or (B)urritos" << endl;
		cin >> input2;
		if (input2 == 'T')
			cout << "You should go to a Taco truck" << endl;
		else if (input2 == 'B')
			cout << "You should go to Santiago's Mexican restaurant" << endl;
	}
	else
		cout << "Sorry Not a Option" << endl;

}
