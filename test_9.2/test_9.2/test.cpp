#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//#include<string>
//class Phone
//{
//public:
//	string m_pname;
//
//	Phone(string pname)
//	{
//		m_pname = pname;
//		cout << "Phone的构造函数的调用" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数的调用" << endl;
//	}
//};
//class Person 
//{
//public:
//	string m_name;
//	Phone m_Phone;//当其它类对象作为本类成员时，会先构造其他类对象，再构造自身。析构顺序和构造顺序相反
//
//	Person(string name, string pname):m_name(name),m_Phone(pname)//Phone m_Phone = pname;隐式转换法
//	{
//		cout << "Person的构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//};
//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << p.m_name << "拿着：" << p.m_Phone.m_pname << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//class Person
//{
//public:
//	static int m_A;
//private:
//	static int m_B;//静态成员变量也是有访问权限的
//};
//
//int Person::m_A = 100;//类外初始化
//int Person::m_B = 200;
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;//100
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;//200
//}
//
//void test02()
//{
//	//静态成员变量，不属于某个对象上，所有对象都共享同一份数据，因此静态成员变量有两种访问方式。
//	Person p;//1.通过对象进行访问
//	cout << p.m_A << endl;//100
//
//	cout << Person::m_A << endl;//100  //2.通过类名进行访问
//	//cout << Person::m_B << endl;//报错：类外访问不到私有静态成员变量
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//静态成员函数可以访问静态成员变量
//		//m_B = 200;//报错：静态成员函数不可以访问非静态成员变量，无法区分到底是哪个对象的m_B属性
//		cout << "static void func调用" << endl;
//	}
//
//	static int m_A;
//	int m_B;
//private:
//	static void func1()//静态成员函数也是有作用域的
//	{
//		cout << "static void func2调用" << endl;
//	}
//};
//
//int Person::m_A = 0;
//void test01()
//{
//	Person p;//1.通过对象访问
//	p.func();
//	Person::func();//2.通过类名访问
//
//	//Person::func1();//报错：类外访问不到私有静态成员函数
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//class Person1
//{
//};
//void test01()
//{
//	Person1 p;
//	cout << "size of p = :" << sizeof(p) << endl;//空对象占用内存空间为：1
//	//C++编译器会给每个空对象分配一个字节空间，是为了区分空对象占内存的位置。。每个空对象也应该有一个独一无二的内存地址
//}
//
//class Person2
//{
//	int m_A;//非静态成员变量，属于类的对象上
//};
//void test02()
//{
//	Person2 p;
//	cout << "size of p = :" << sizeof(p) << endl;//4
//}
//
//class Person3
//{
//	int m_A;
//	static int m_B;//静态成员变量,不属于类的对象上
//};
//int Person3::m_B = 0;
//void test03()
//{
//	Person3 p;
//	cout << "size of p = :" << sizeof(p) << endl;//4
//}
//
//class Person4
//{
//public:
//	int m_A;
//	static int m_B;//静态成员变量,不属于类的对象上
//
//	void func()//非静态成员函数，不属于类的对象上
//	{
//
//	}
//	void func()//静态成员函数，不属于类的对象上
//	{
//
//	}
//};
//int Person4::m_B = 0;
//void test04()
//{
//	Person4 p;
//	cout << "size of p = :" << sizeof(p) << endl;//4
//}
//int main()
//{
//	//test01();
//	//test02();
//	test04();
//	system("pause");
//	return 0;
//}


//class Person
//{
//public:
//	int age;
//	Person(int age)
//	{
//		age = age;
//	}
//};
//void test()
//{
//	Person p1(18);
//	cout << "p1的年龄是：" << p1.age << endl;//出错
//}
//
//class Person1
//{
//public:
//	int age;
//	Person1(int age)
//	{
//		this->age = age;//this指针指向被调用的成员函数的所属对象
//	}
//	void PersonAddPerson(Person1& p)
//	{
//		age += p.age;
//	}
//	Person1& PersonAddPerson01(Person1& p)
//	{
//		age += p.age;
//		return *this;//this指向p2的指针，而*this指向的就是p2这个对象本体
//	}
//};
//void test01()
//{
//	Person1 p1(18);//不加this报错：p1调用成员函数，this指向p1：this->age = age
//	cout << "p1的年龄是：" << p1.age << endl;//18
//}
//void test02()
//{
//	Person1 p1(10);
//
//	Person1 p2(10);
//	p2.PersonAddPerson(p1);
//	cout << "p2的年龄是：" << p2.age << endl;//20
//	//p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//报错，除非加上return *this
//	p2.PersonAddPerson01(p1).PersonAddPerson01(p1).PersonAddPerson01(p1);//链式编程思想 
//	cout << "p2的年龄是：" << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void showPersonage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "this is Person age = " << m_age << endl;//m_age相当于this->m_age，但test01创建的空指针，即this是空的值，仍然访问其中m_age属性。故出错
//	}
//	int m_age;
//};
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();//不报错
//	p->showPersonage();//报错。因此增加一个判断语句if (this == NULL)
//}
//int main()
//{
//	//test01();
//	test01();
//
//	system("pause");
//	return 0;
//}

class Person
{
public:
	void showPerson() const//常函数：相当于const Person* this
	{
		//m_A = 100;//报错，m_A相当于this->m_A
		//this指针的本质：是指针常量，指针的指向是不可以修改的
		m_B = 100;
	}

	void func()
	{

	}
	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不能修改
	int m_A;

	mutable int m_B;//加上mutable，

};
void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;//常对象
	//p.m_A = 100;//报错
	p.m_B = 100;//不报错

	p.showPerson();
	//p.func();//报错
}
int main()
{
	//test01();
	test01();

	system("pause");
	return 0;
}