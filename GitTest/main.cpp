#include <iostream>

using namespace std;

int PowerOfTwo(int y) {
	int result = 0;
	result = std::pow(2, y);
	return result;
}

int main() {

	cout << "Hellow World" << endl;
	int input = 4;
	int output = PowerOfTwo(input);
	cout << "The result of power two is: " << output << endl;
	system("pause");
	return 0;
}