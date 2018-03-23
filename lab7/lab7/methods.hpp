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

	int max(std::vector<int>&v) {
		int max = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}
		return max;
	}

	int min(std::vector<int>&v) {
		int min = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i] < min) {
				min = v[i];
			}
		}
		return min;
	}


};