
#include <iostream>
using namespace std;
//1、线性表静态分配内存
#define MaxSize 50
#define ElemType  int 
int length = 25;
typedef struct {
	ElemType data[MaxSize];
	int length;
}Sqlist;


//2、动态分配内存
#define initsize 100
typedef struct {
	ElemType *data;
	int length,Maxsize;
}Seqlist;

//初始化静态线性表
int initSqlist(Seqlist &L) {
	
	L.length = initsize / sizeof(ElemType);
	L.Maxsize = initsize;
	for (int i = 0; i < length; i++) {
		L.data[i] = i;
		cout << L.data[i];
	}
	return L.length;
}

int main()
{
   //1、动态分配内存
	Seqlist L;
	L.data = new ElemType[initsize];
	//L.data = (ElemType *)malloc(sizeof(ElemType)*length);
	initSqlist(L);
	//cout << &L<<sizeof(ElemType);
}
