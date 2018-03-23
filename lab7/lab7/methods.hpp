#pragma once
#include <vector>
#include <iostream>
class methods {
private:
	std::vector<int> myVector;
public:
	int sum(std::vector<int>&v) {
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			sum = sum + v[i];
		}
		return sum;
	}

};