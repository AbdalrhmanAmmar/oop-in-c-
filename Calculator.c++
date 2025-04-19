using namespace std;
#include <iostream>;





class Clculator {
private:
	int result = 0;

public:
	int add(int number) {
		return result=result+number;
	};

	int clear() {
		return result = 0;
	}
	int PrintResult() {
		return result;
	}
	int Multiplied(int number) {
		return result=number * result;
	}
	void divide(int number) {
		if (number == 0) {
			cout << "❌ لا يمكن القسمة على صفر!" << endl;
			return;
		}
		result /= number;
	}
	int minus(int number) {
		return result -= number;
}
};



int main() {
	Clculator calc;
	calc.add(20);
	calc.Multiplied(2);
	cout << calc.PrintResult();
	cout << endl;
	cout << calc.minus(20);
}