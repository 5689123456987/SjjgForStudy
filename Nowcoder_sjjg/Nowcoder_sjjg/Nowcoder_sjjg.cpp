// Nowcoder_sjjg.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
//#include <iostream>
//#include<set>
//#include<vector>
//using namespace std;
//
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
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int> points;
//	for (int i = 0; i < N; i++) {
//		int Xpint;
//		cin >> Xpint;
//		points.push_back(Xpint);
//	}
//
//	int dudu = points[0];
//	int mindance = 9999;
//	int length = points.size();
//	int duduhome = points[length - 1];
//	if (N == 2) {
//		cout << abs(dudu - duduhome);
//		return 0;
//	}
//	for (int i = 1; i < length - 1; i++) {
//		int dantance = 0;
//		int once = 1;
//		int late = 0;
//		int latemax = 0;
//		int latepoint = 0;
//		for (int j = 1; j < length - 1; j++) {
//			if (j == i)
//				continue;
//			if (once == 1) {
//				dantance += abs(dudu - points[j]);
//			}
//			once++;
//			late++;
//			if (j + 1 == i) {
//				if (j + 2 < length - 1)
//					dantance += abs(points[j + 2] - points[j]);
//			}
//			else if(j + 1 < length - 1){
//				dantance += abs(points[j + 1] - points[j]);
//			}
//			if (late > latemax) {
//				latemax = late;
//				latepoint = points[j];
//			}
//		}
//		dantance += abs(latepoint - duduhome);
//		if (dantance < mindance)
//			mindance = dantance;
//	}
//	cout << mindance;
//	return 0;
//}/*
//#include<iostream>
//#include<vector>
//using namespace std;
//数据初始化
//void inItvector(vector<int>& points) {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int Xpint;
//		cin >> Xpint;
//		points.push_back(Xpint);
//	}
//
//}
//
//
//
//void MinDance(vector<int>& points) {
//	初始化最小值
//	int mindance = 9999;
//	初始化路径值
//	int dance = 0;
//
//	当只有1或者2个点时
//	if (points.size() == 2 || points.size() == 1) {
//		mindance = abs(points.back() - points.front());
//		cout << mindance;
//		return;
//	}
//
//	for (int i = 1; i < points.size() - 1; i++) {
//		初始化路径值
//		int dance = 0;
//		for (int j = 1; j < points.size(); ) {
//			if (j == i) {
//				dance += abs(points[j + 1] - points[j - 1]);
//				j += 2;
//			}
//			else {
//				dance += abs(points[j] - points[j - 1]);
//				j++;
//			}
//		}
//		if (dance < mindance) {
//			mindance = dance;
//		}
//	}
//	cout << mindance << endl;
//}
//
//int main() {
//	数据初始化
//	vector<int> points;
//	inItvector(points);
//	MinDance(points);
//}*/
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using  namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//
//	unordered_map<char,vector<int>> Triangle;
//	vector<int> Triangle_copy;
//	for (int i = 0; i < N; i++)
//	{
//		char color;
//		cin >> color;
//		for (int j = 0; j < 3; j++)
//		{
//			int A;
//			cin >> A;
//			Triangle_copy.push_back(A);
//		}
//		Triangle[i] = Triangle_copy;
//		Triangle_copy.clear();
//		pair<char, vector<int>> value(color, Triangle[i]);
//		Triangle.insert(value);
//	}
//
//
//
//
//	return 0;
//}




#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include <iomanip>

using  namespace std;

double maxarea = -99999;
class point{
public:
	point(char cc, int xx, int yy, int zz) :color(cc), pointX(xx), pointY(yy), pointZ(zz) {} //析构函数
	char color;
	int  pointX;
	int pointY;
	int pointZ;
};

double HeronFormal(int a,int b,int c) {	
	//求q
	double p = (a + b + c) / 2;
	//求面积
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

void SideCal(vector<point> &s, set<char> &color_set) {
	//if (color_set.size() < 3) {//必须全部同色均R;或者均G
	//	for (int i = 0; i < s.size()-2; i++) {
	//		for (int j = i + 1; j < s.size() - 1; j++) {
	//			for (int k = j + 1; k < s.size(); k++) {
	//				if (s[i].color == s[j].color&& s[j].color == s[k].color) {
	//					//计算三边长；
	//					int side1 = sqrt(pow(s[i].pointX - s[j].pointX, 2) + pow(s[i].pointY - s[j].pointY, 2) + pow(s[i].pointZ - s[j].pointZ, 2));
	//					int side2 = sqrt(pow(s[i].pointX - s[k].pointX, 2) + pow(s[i].pointY - s[k].pointY, 2) + pow(s[i].pointZ - s[k].pointZ, 2));
	//					int side3 = sqrt(pow(s[k].pointX - s[j].pointX, 2) + pow(s[k].pointY - s[j].pointY, 2) + pow(s[k].pointZ - s[j].pointZ, 2));
	//					double calarea = HeronFormal(side1, side2, side3);
	//					maxarea = calarea > maxarea ? calarea : maxarea;
	//				}
	//			}
	//		}
	//	}
	//} 
	//if (color_set.size() == 3) {//必须全部同色均R;或者均G
	//	for (int i = 0; i < s.size() - 2; i++) {
	//		for (int j = i + 1; j < s.size() - 1; j++) {
	//			for (int k = j + 1; k < s.size(); k++) {
	//				if (s[i].color != s[j].color&& s[j].color != s[k].color && s[i].color != s[k].color ) {
	//					//计算三边长；
	//					int side1 = sqrt(pow(s[i].pointX - s[j].pointX, 2) + pow(s[i].pointY - s[j].pointY, 2) + pow(s[i].pointZ - s[j].pointZ, 2));
	//					int side2 = sqrt(pow(s[i].pointX - s[k].pointX, 2) + pow(s[i].pointY - s[k].pointY, 2) + pow(s[i].pointZ - s[k].pointZ, 2));
	//					int side3 = sqrt(pow(s[k].pointX - s[j].pointX, 2) + pow(s[k].pointY - s[j].pointY, 2) + pow(s[k].pointZ - s[j].pointZ, 2));
	//					double calarea = HeronFormal(side1, side2, side3);
	//					maxarea = calarea > maxarea ? calarea : maxarea;
	//				}
	//			}
	//		}
	//	}
	//}
	for (int i = 0; i < s.size() - 2; i++) {
		for (int j = i + 1; j < s.size() - 1; j++) {
			for (int k = j + 1; k < s.size(); k++) {
				if ((s[i].color == s[j].color && s[j].color == s[k].color) || (s[i].color != s[j].color&& s[j].color != s[k].color && s[i].color != s[k].color) ){
					int side1 = sqrt(pow(s[i].pointX - s[j].pointX, 2) + pow(s[i].pointY - s[j].pointY, 2) + pow(s[i].pointZ - s[j].pointZ, 2));
					int side2 = sqrt(pow(s[i].pointX - s[k].pointX, 2) + pow(s[i].pointY - s[k].pointY, 2) + pow(s[i].pointZ - s[k].pointZ, 2));
					int side3 = sqrt(pow(s[k].pointX - s[j].pointX, 2) + pow(s[k].pointY - s[j].pointY, 2) + pow(s[k].pointZ - s[j].pointZ, 2));
					double calarea = HeronFormal(side1, side2, side3);
					maxarea = calarea > maxarea ? calarea : maxarea;
				}
			}
		}
	}
}

int main() {
	int N;
	cin >> N;
	vector<point>input_point;
	set<char> color_set;
	for (int i = 0; i < N; i++) {
		char color;
		int x, y, z;
		cin >> color >> x >> y >> z;
		color_set.insert(color);
		input_point.push_back(point(color, x, y, z));
	}
	SideCal(input_point,color_set);
	cout << fixed << setprecision(5) << maxarea;
	return 0;
}