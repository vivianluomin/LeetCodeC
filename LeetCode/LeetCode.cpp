// LeetCode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Candy.h"
#include<iostream>

int main()
{

	Solution s;
	vector<int> ratings{ 3,2,5,8,4,7,6,9 };

	int count = s.candy(ratings);
	std::cout << count << std::endl;

    return 0;
}

