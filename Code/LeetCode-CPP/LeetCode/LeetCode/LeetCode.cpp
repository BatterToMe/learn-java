// LeetCode.cpp: 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//#include <iostream>
////#include "TargetSum_494.h"
//using namespace std;

//void test494() {
//	Solution solution;
//	vector<int> nums;
//	nums.push_back(1);
//	nums.push_back(1);
//	nums.push_back(1);
//	nums.push_back(1);
//	nums.push_back(1);
//	cout << solution.findTargetSumWays(nums,3);
//	system("pause");
//}

//int main()
//{
//
//	int n;
//	cin >> n;
//
//	
//	//test494();
// //   return 0;
//}


#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int space = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
		space--;
	}
	space = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * (n - i - 2) + 1; j++) {
			cout << "*";
		}
		cout << "\n";
		space++;
	}
	system("pause");
}

//void printSpace(int n) { //打印n个空格
//	for (int i = 0; i < n; i++) {
//		cout << " ";
//	}
//}
//
//void printStar(int n) { //打印n个*号
//	for (int i = 0; i < n; i++) {
//		cout << "*";
//	}
//}

//#include "stdafx.h"
//#include <iostream> 
//
//using namespace std;
//int main() {
//	int i, j, n;
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n - i; ++j)
//			cout << " ";
//		for (j = 1; j <= i; ++j)
//			cout << "* ";
//		cout << endl;
//	}
//	for (i = n; i >= 1; --i)
//	{
//		for (int j = 1; j <= n - i; ++j)
//			cout << " ";
//		for (j = 1; j <= i; ++j)
//			cout << "* ";
//		if (i > 1)
//			cout << endl;
//	}
//	return 0;
//}