#include<iostream>
using namespace std;
//����ģ���﷨
//template<typename T>//����һ��ģ��T ��ȻҲ������������ĸ���� �˴���typename����class����
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
//	//�Զ������Ƶ������������Զ��Ƶ���T�����ͣ�
//	Myswap(a, b);
//	cout << " a = " << a << "  b= " << b << endl;//a=20 b=10  �����ɹ�
//	//��ʾָ������(�����߱���������)
//	Myswap<int>(a, b);
//	cout << " a = " << a << "  b= " << b << endl;//a=10 b=20 �����ɹ�
//}
//int main()
//{
//	test();
//	return 0;
//}
//����ģ��ע������
//1.�Զ��Ƶ����ͣ����뵼������������һ�²ſ���ʹ��
//2.����ȷ��T�����Ͳ���ʹ��
//����չʾ
//template<class T>
//void my_swap(T& a, T& b)
//{
//	//T& tmp = a;//����  T& tmp=a;������ʽ ��a�ı���tmpҲ��ı�
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
//	//my_swap(a, c);//���� ��Ϊa��c�����Ͳ���ͬ ϵͳ�޷�֪��T������
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
//	cout << "func�����ĵ���" << endl;
//}
//
//void test()
//{
//	//my_func();//���� ��ΪT�����Ͳ���ȷ ��Ȼfunc������û�õ�T��������Ҫ��ȷ����
//	my_func<int>();//�����Ϳ����� func�����ĵ���
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//���ú���ģ����һ��ͨ����������
//template<class T>
//void my_swap(T& a,T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//template<class T>
//void my_sort(T arr1[], int num)//ע��T�󲻿ɼ�& ��ʵint & b=a;�൱��int * b=&a;(ϵͳת��) ֮�����b �൱�ڵ���&b ���൱�ڵ���a
//{
//	int i, j;
//	//ѡ������(�Ӵ�С)
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

//��ͨ�����뺯��ģ�������
/*
��ͨ�������Է�����ʽ����ת��
����ģ�����ʱ��������Զ��Ƶ������ᷢ����ʽת��
���ʹ����ʾָ�����ͷ�ʽ�����Է�����ʽ����ת��
*/
//����չʾ
//��ͨ����
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
//	cout << ret << endl;//109 ��Ϊc����ʽ����ת��Ϊ99��ASCII��ֵ��
//}
//int main()
//{
//	test();
//	return 0;
//}

//����ģ��
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
//	//ret = Add(a, c);//����  a c���Ͳ�ͬ�Ҳ��ܷ�����ʽת��
//	ret = Add<int>(a, c);
//	cout << ret << endl;//109 ��ʾָ�����ͷ�ʽ ���Խ��������͵�����ת��Ϊָ������
//}
//int main()
//{
//	test();
//	return 0;
//}
//��ͨ�����뺯��ģ��ĵ��ù���
/*
1.�������ģ������ͨ���������Ե��� �����ȵ�����ͨ����
2.����ͨ����ģ������б���ǿ�Ƶ���ģ�庯��
3.����ģ��Ҳ���Է�������
4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
*/
//����չʾ
//void my_print(int a, int b)
//{
//	cout << "��ͨ��������" << endl;
//}
//template<class T>
//void my_print(T a, T b)
//{
//	cout << "����ģ�����" << endl;
//}
//template<class T>
//void my_print(T a, T b,T c)
//{
//	cout << "���غ���ģ�����" << endl;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	my_print(a, b);//��ͨ�������� ����1
//	my_print<>(a, b);//����ģ����� ����2 <>ǿ�Ƶ���
//	my_print(a, b, 10);//���غ���ģ����� ����3
//	my_print('a', 'b');//����ģ����� ������Ȼ��ͨ����Ҳ���Ա����� ��Ҫ������ʽת�� ˵һϵͳ�Զ����ú���ģ�� ����4
//}
//int main()
//{
//	test();
//	return 0;
//}
//ģ��ľ�����
//ģ�岻�����ܵģ���һЩ��������ͣ���Ҫ�þ��廯��ʽʵ��
//#include<string>
//template<class T>
//bool my_compare(T&a, T&b)
//{
//	if (a == b)//���� == ���ܱȽ�p�����Ƿ���ͬ ����ͨ���Զ���== 
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
//template<>bool my_compare(person &p1, person& p2)//template<>Ҳ�൱�ڽ�����һ��ģ��  �Ժ�ֻҪ��person���͵���my_compare�����ͻ������
//{
//	if ( p1.m_name==p2.m_name&&p1.m_age==p2.m_age)//���� == ���ܱȽ�p�����Ƿ���ͬ ����ͨ���Զ���== 
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
//��ģ��
//�ܼ� ����ģ�������template<class T>��Ӻ��� ��ģ�������template<class T>�����
//����չʾ
//#include<string>
//template<class Nametype,class Agetype>//����������ģ������
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
//	person<string, int>p("tom", 17);//���巽ʽ
//	cout << "name = " << p.m_name << " age = " << p.m_age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//��ģ���뺯��ģ�������
//�ܽ᣺
//1.��ģ��ֻ��ʹ����ʾָ�����ͷ�ʽ
//2.��ģ����ģ������б������Ĭ�ϲ���
//#include<string>
//template<class Nametype,class Agetype>//����������ģ������
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
//	person<string, int>p("tom", 17);//ֻ������ʾָ�����ͷ�ʽ
//	cout << "name = " << p.m_name << " age = " << p.m_age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<string>
//template<class Nametype, class Agetype = int>//���ｫAgetypeĬ��Ϊ��int 
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
//	person<string>p("tom", 17);// ����Ͳ���ָ��17��������
//	cout << "name = " << p.m_name << " age = " << p.m_age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//��ģ���г�Ա�����Ĵ���ʱ��
//��ͨ���г�Ա����һ��ʼ�Ϳ��Դ���
//��ģ���г�Ա�����ڵ���ʱ�Ŵ���
//����չʾ
//class show1
//{
//public:
//	void func1()
//	{
//		cout << "func1��������" << endl;
//	}
//};
//
//class show2
//{
//public:
//	void func2()
//	{
//		cout << "func2��������" << endl;
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
//	//test01<show1>p;//ָ��T������Ϊshow1  ��abc������Ϊshow1
//	//p.func1();
//	//p.func2();//����abc����func2����
//	//test01<show2>p;//ָ��T������Ϊshow2  ��abc������Ϊshow2
//	//p.func1();//����abc����func1����
//	//p.func2();
//	//ͨ������ʾ������˵����ģ���г�Ա�����ڵ���ʱ�Ŵ��� ����ʼʱfunc1 ��func2��û�б����� ���Ǵ���T���������ͺ�Ŵ�����func
//}
//
//int main()
//{
//	test();
//	return 0;
//}








