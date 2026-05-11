#include <iostream>
#include <string>
using namespace std;

class Counter {
private:
	int value;
public:
	Counter() : value(1) {}

	Counter(int initial_value) : value(initial_value) {}

	void increment() {
		value++;
	}

	void decrement() {
		value--;
	}

	int get_value() const {
		return value;
	}
};

int main() {

	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	string answer;
	cin >> answer;

	Counter counter;


	if (answer == "да") {
		int initial_value;
		cout << "Введите начальное значение счётчика: ";
		cin >> initial_value;
		counter = Counter(initial_value);
	}

	while (true) {
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		char command;
		cin >> command;

		if (command == '+') {
			counter.increment();
		}
		else if (command == '-') {
			counter.decrement();
		}
		else if (command == '=') {
			cout << counter.get_value() << endl;
		}
		else if (command == 'x') {
			cout << "До свидания!" << endl;
			break;
		}
	}
	return 0;
}