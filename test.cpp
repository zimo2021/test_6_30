#include<iostream>
using namespace std;
//函数模板语法
//template<typename T>//建立一个模板T 当然也可以用其他字母代替 此处的typename可用class代替
//void Myswap(T& a, T&b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	//自动类型推导（即编译器自动推导出T的类型）
//	Myswap(a, b);
//	cout << " a = " << a << "  b= " << b << endl;//a=20 b=10  交换成功
//	//显示指定类型(即告诉编译器类型)
//	Myswap<int>(a, b);
//	cout << " a = " << a << "  b= " << b << endl;//a=10 b=20 交换成功
//}
//int main()
//{
//	test();
//	return 0;
//}
//函数模板注意事项
//1.自动推导类型：必须导出的数据类型一致才可以使用
//2.必须确定T的类型才能使用
//代码展示
//template<class T>
//void my_swap(T& a, T& b)
//{
//	//T& tmp = a;//错误  T& tmp=a;这种形式 当a改变则tmp也会改变
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'a';
//	//my_swap(a, b);
//	//my_swap(a, c);//报错 因为a和c的类型不相同 系统无法知道T的类型
//
//	cout << " a = " << a << " b = " << b << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//template<class T>
//void my_func()
//{
//	cout << "func函数的调用" << endl;
//}
//
//void test()
//{
//	//my_func();//报错 因为T的类型不明确 虽然func函数中没用到T但还是需要明确类型
//	my_func<int>();//这样就可以了 func函数的调用
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//利用函数模板做一个通用数组排序
//template<class T>
//void my_swap(T& a,T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//template<class T>
//void my_sort(T arr1[], int num)//注：T后不可加& 其实int & b=a;相当于int * b=&a;(系统转化) 之后调用b 相当于调用&b 就相当于调用a
//{
//	int i, j;
//	//选择排序(从大到小)
//	for (i = 0; i < num; i++)
//	{
//		int max = i;
//		for (j = i + 1; j < num; j++)
//		{
//			if (arr1[max] < arr1[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			my_swap(arr1[max], arr1[i]);
//		}
//	}
//}
//template<class T>
//void printarr(T arr, int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test1()
//
//{
//	int intarr[] = { 1,2,3,4,5,6,7,8,9 };
//	int num = sizeof(intarr) / sizeof(intarr[0]);
//	my_sort(intarr, num);
//	printarr(intarr, num);//9 8 7 6 5 4 3 2 1
//}
//void test2()
//{
//	char chararr[] = "abcdefg";
//	int num = sizeof(chararr) / sizeof(char);
//	my_sort(chararr, num);
//	printarr(chararr, num);//g f e d c b a
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//普通函数与函数模板的区别
/*
普通函数可以发生隐式类型转换
函数模板调用时，如果用自动推导，不会发生隐式转换
如果使用显示指定类型方式，可以发生隐式类型转换
*/
//代码展示
//普通函数
//int Add(int a, int b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	int ret = Add(a, b);
//	cout << ret << endl;//30
//	ret = Add(a, c);
//	cout << ret << endl;//109 因为c被隐式类型转换为99（ASCII码值）
//}
//int main()
//{
//	test();
//	return 0;
//}

//函数模板
//template<class T>
//int Add(T a, T b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	int ret = Add(a, b);
//	cout << ret << endl;//30
//	//ret = Add(a, c);//报错  a c类型不同且不能发生隐式转换
//	ret = Add<int>(a, c);
//	cout << ret << endl;//109 显示指定类型方式 可以将其他类型的数据转换为指定类型
//}
//int main()
//{
//	test();
//	return 0;
//}
//普通函数与函数模板的调用规则
/*
1.如果函数模板与普通函数都可以调用 则优先调用普通函数
2.可以通过空模板参数列表来强制调用模板函数
3.函数模板也可以发生重载
4.如果函数模板可以产生更好的匹配，优先调用函数模板
*/
//代码展示
//void my_print(int a, int b)
//{
//	cout << "普通函数调用" << endl;
//}
//template<class T>
//void my_print(T a, T b)
//{
//	cout << "函数模板调用" << endl;
//}
//template<class T>
//void my_print(T a, T b,T c)
//{
//	cout << "重载函数模板调用" << endl;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	my_print(a, b);//普通函数调用 规则1
//	my_print<>(a, b);//函数模板调用 规则2 <>强制调用
//	my_print(a, b, 10);//重载函数模板调用 规则3
//	my_print('a', 'b');//函数模板调用 这里虽然普通函数也可以被调用 但要发生隐式转换 说一系统自动调用函数模板 规则4
//}
//int main()
//{
//	test();
//	return 0;
//}
//模板的局限性
//模板不是万能的，有一些特殊的类型，需要用具体化方式实现
//#include<string>
//template<class T>
//bool my_compare(T&a, T&b)
//{
//	if (a == b)//报错 == 不能比较p类型是否相同 可以通过自定义== 
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//template<>bool my_compare(person &p1, person& p2)//template<>也相当于建立了一个模板  以后只要有person类型调用my_compare函数就会走这段
//{
//	if ( p1.m_name==p2.m_name&&p1.m_age==p2.m_age)//报错 == 不能比较p类型是否相同 可以通过自定义== 
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test()
//{
//	person p1("tom", 18);
//	person p2("tom", 18);
//	bool ret = my_compare(p1, p2);
//	if (ret)
//	{
//		cout << "p1==p2" << endl;
//	}
//	else
//	{
//		cout << "p1!=p2" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//类模板
//很简单 函数模板就是在template<class T>后加函数 类模板就是在template<class T>后加类
//代码展示
//#include<string>
//template<class Nametype,class Agetype>//这里有两个模板类型
//class person
//{
//public:
//	person(Nametype name, Agetype age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	person<string, int>p("tom", 17);//定义方式
//	cout << "name = " << p.m_name << " age = " << p.m_age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//类模板与函数模板的区别
//总结：
//1.类模板只能使用显示指定类型方式
//2.类模板中模板参数列表可以有默认参数
//#include<string>
//template<class Nametype,class Agetype>//这里有两个模板类型
//class person
//{
//public:
//	person(Nametype name, Agetype age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	person<string, int>p("tom", 17);//只能用显示指定类型方式
//	cout << "name = " << p.m_name << " age = " << p.m_age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<string>
//template<class Nametype, class Agetype = int>//这里将Agetype默认为了int 
//class person
//{
//public:
//	person(Nametype name, Agetype age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	person<string>p("tom", 17);// 这里就不用指定17的类型了
//	cout << "name = " << p.m_name << " age = " << p.m_age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//类模板中成员函数的创建时机
//普通类中成员函数一开始就可以创建
//类模板中成员函数在调用时才创建
//代码展示
//class show1
//{
//public:
//	void func1()
//	{
//		cout << "func1函数调用" << endl;
//	}
//};
//
//class show2
//{
//public:
//	void func2()
//	{
//		cout << "func2函数调用" << endl;
//	}
//};
//template<class T>
//class test01
//{
//public:
//	T abc;
//	void func1()
//	{
//		abc.func1();
//	}
//	void func2()
//	{
//		abc.func2();
//	}
//};
//
//void test()
//{
//	//test01<show1>p;//指定T的类型为show1  则abc的类型为show1
//	//p.func1();
//	//p.func2();//报错abc中无func2函数
//	//test01<show2>p;//指定T的类型为show2  则abc的类型为show2
//	//p.func1();//报错abc中无func1函数
//	//p.func2();
//	//通过上述示例可以说明类模板中成员函数在调用时才创建 即开始时func1 和func2并没有被创建 而是传了T的数据类型后才创建了func
//}
//
//int main()
//{
//	test();
//	return 0;
//}








