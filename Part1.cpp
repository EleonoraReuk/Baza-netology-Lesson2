#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
	double num1;
	double num2;

public:
	Calculator() : num1(0.0), num2(0.0) {}

	double add() {
		return num1 + num2;
	}
	double subtract1_2() {
		return num1 - num2;
	}
	double subtract2_1() {
		return num2 - num1;
	}
	double multiply() {
		return num1 * num2;
	}
	double divide1_2() {
		if (num2 != 0) {
			return num1 / num2;
		}
		else {
			cout << "Деление на ноль!" << endl;
			return 0.0;
		}
	}
	double divide2_1() {
		if (num1 != 0) {
			return num2 / num1;
		}
		else {
			cout << "Деление на ноль!" << endl;
			return 0.0;
		}
	}



	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		return false;
	}
	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		}
		return false;
	}
};



int main() {
	Calculator calc;
	double input1, input2;

	while (true) {
		cout << "Введите num1: ";
		cin >> input1;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Неверный ввод!" << endl;
			continue;
		}

		if (!calc.set_num1(input1)) {
			cout << "Неверный ввод!" << endl;
			continue;
		}

		cout << "Введите num2: ";
		cin >> input2;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Неверный ввод!" << endl;
			continue;
		}

		if (!calc.set_num2(input2)) {
			cout << "Неверный ввод!" << endl;
			continue;
		}

		cout << input1 << " + " << input2 << " = " << calc.add() << endl;
		cout << input1 << " - " << input2 << " = " << calc.subtract1_2() << endl;
		cout << input2 << " - " << input1 << " = " << calc.subtract2_1() << endl;
		cout << input1 << " * " << input2 << " = " << calc.multiply() << endl;

		if (input2 != 0) {
			cout << input1 << " / " << input2 << " = " << calc.divide1_2() << endl;
		}
		else {
			cout << input1 << " / " << input2 << " = деление на ноль невозможно!" << endl;
		}

		if (input1 != 0) {
			cout << input2 << " / " << input1 << " = " << calc.divide2_1() << endl;
		}
		else {
			cout << input2 << " / " << input1 << " = деление на ноль невозможно!" << endl;
		}
	}
	return 0;
}
