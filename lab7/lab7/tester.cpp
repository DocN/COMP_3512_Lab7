#include "methods.hpp"
#include <iostream>

using namespace std;
int main() {
	methods test = methods();
	vector<int> testVec = vector<int>();
	testVec.push_back(1);
	testVec.push_back(1);
	testVec.push_back(2);
	testVec.push_back(3);
	testVec.push_back(4);
	testVec.push_back(5);
	
	//testing max
	cout << "expected max 5" << endl;
	cout << test.max(testVec) << endl;
	testVec.push_back(6);
	cout << "expected max 6" << endl;
	cout << test.max(testVec) << endl;
	

	//testing min
	cout << "expected min 1" << endl;
	cout << test.min(testVec) << endl;
	testVec.push_back(-1);
	cout << "expected min -1" << endl;
	cout << test.min(testVec) << endl;

	//testing average
	cout << "expected average 2" << endl;
	cout << test.average(testVec) << endl;

	//testing sum
	cout << "expected sum 21" << endl;
	cout << test.sum(testVec) << endl;
	testVec.push_back(21);
	cout << "expected sum 42" << endl;
	cout << test.sum(testVec) << endl;

	system("pause");
	return 0;
}