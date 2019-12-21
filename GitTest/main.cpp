#include <iostream>

using namespace std;

int add(int x, int y) {
	int result = 0;
	result = x + y;
	return result;
}

int substract(int x, int y) {
	int result = 0;
	result = x - y;
	return result;
}

int main() {

	cout << "Hellow World" << endl;
	int input_x = 5;
	int input_y = 3;
	int result = add(input_x , input_y);
	cout << "The addition is: " << result << endl;
	result = substract(input_x, input_y);
	cout << "The substraction is: " << result << endl;
	system("pause");
	return 0;
}