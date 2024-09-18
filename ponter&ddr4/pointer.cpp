//Напишіть програму, яка запитує користувача ввести число з клавіатури. Визначте та виведіть, чи це число додатне, від’ємне чи нуль.
// У програмі використовувати функцію та посилання(&).
#include <iostream>
using namespace std;

void cheknum(int& num) {
	if (num > 0) {
		cout << "Число Додатнє" << endl;
	}
	else if (num < 0) {
		cout<<"Число від’ємне"<< endl;
	}
	else if (num == 0) {
		cout << "Число=0" << endl;
	}
}


int main() {
	int number;
	cout << "enter a number: ";
	cin >>number;

	cheknum(number);
	return 0;
}