// Nowcoder_sjjg.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
//#include <iostream>
//#include<set>
//#include<vector>
//using namespace std;

//
//int main()
//{
//    //std::cout << "Hello World!\n";
//	/*int c[4][5] = {
//		{1,2,3,4,5},
//		{1,2,3,4,5},
//		{1,2,3,4,5},
//		{1,2,3,4,5},
//	};*/
//	//int(*PC)[5] = c;
//	////*PC获取首地址
//	//cout << *(*PC);
//	set<int> Set_Price;
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int price;
//		cin >> price;
//		Set_Price.insert(price);
//	}
//	vector<int> s;
//	set<int>::iterator it;
//	//it = Set_Price.begin();
//	for (it = Set_Price.begin(); it != Set_Price.end(); it++) {
//		s.push_back(*it);
//	}
//	if(s.size() >= 3)
//		cout << s[2];
//	else
//	{
//		cout << -1;
//	}
//	return 0;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

//度度熊回家

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> points;
	for (int i = 0; i < N; i++) {
		int Xpint;
		cin >> Xpint;
		points.push_back(Xpint);
	}

	int dudu = points[0];
	int mindance = 9999;
	int length = points.size();
	int duduhome = points[length - 1];
	if (N == 2) {
		cout << abs(dudu - duduhome);
		return 0;
	}
	for (int i = 1; i < length - 1; i++) {
		int dantance = 0;
		int once = 1;
		int late = 0;
		int latemax = 0;
		int latepoint = 0;
		for (int j = 1; j < length - 1; j++) {
			if (j == i)
				continue;
			if (once == 1) {
				dantance += abs(dudu - points[j]);
			}
			once++;
			late++;
			if (j + 1 == i) {
				if (j + 2 < length - 1)
					dantance += abs(points[j + 2] - points[j]);
			}
			else if(j + 1 < length - 1){
				dantance += abs(points[j + 1] - points[j]);
			}
			if (late > latemax) {
				latemax = late;
				latepoint = points[j];
			}
		}
		dantance += abs(latepoint - duduhome);
		if (dantance < mindance)
			mindance = dantance;
	}
	cout << mindance;
	return 0;
}
