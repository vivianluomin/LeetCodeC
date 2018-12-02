#include "stdafx.h"
#include<vector>
#include<iostream>

using std::vector;

class Solution {
public:
	int candy(vector<int> &ratings) {

		int size = ratings.size();
		if (size == 1) {
			return 1;
		}
		int candyCount = 0;
		vector<int> child1(size,1);
		vector<int>child2(size, 1);
		
		for (int i = 0; i < size; i++) {
			if (i == 0) {
				if (ratings.at(i) > ratings.at(i + 1)) {
					child1.at(i)++;
				}
			}
			else
			{
				if (ratings.at(i) > ratings.at(i - 1)) {
					child1.at(i) += child1.at(i - 1);
				}
			}
		}

		for (int i = size - 1; i >= 0; i--) {
			if (i == size - 1) {
				if (ratings.at(i) > ratings.at(i -1)) {
					child2.at(i)++;
				}
			}
			else
			{
				if (ratings.at(i) > ratings.at(i + 1)) {
					child2.at(i) += child2.at(i +1);
				}
			}
		}

		for (int i = 0; i < size; i++) {
			candyCount += std::fmax(child1.at(i),child2.at(i));
		}

		return candyCount;

	}
};
