#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;
//普通函数
void myPlus(int a, int b)
{
	cout << "普通函数" << endl;
}

template<class T>
void myPlus(T a, T b)
{
	cout << "函数模板" << endl;
}

template<class T>
void myPlus(T a, T b)
{
	cout << "函数模板 T c" << endl;
}
//1.函数模板和普通函数可以重载
void test()
{
	int a = 10;
	int b = 20;
	//2.如果普通函数和模板函数都可以实现的功能，普通函数优先调用
	myPlus(a, b);

	//3.可以使用<>空参数列表强制调用函数模板
	myPlus<>(a, b);

	//4.函数模板之间也可以进行重载

	//5.如果函数模板可以生产更好的匹配，那么优先使用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPlus(c1, c2);
}
int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}