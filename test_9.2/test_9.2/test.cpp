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
//		cout << "Phone�Ĺ��캯���ĵ���" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone�����������ĵ���" << endl;
//	}
//};
//class Person 
//{
//public:
//	string m_name;
//	Phone m_Phone;//�������������Ϊ�����Աʱ�����ȹ�������������ٹ�����������˳��͹���˳���෴
//
//	Person(string name, string pname):m_name(name),m_Phone(pname)//Phone m_Phone = pname;��ʽת����
//	{
//		cout << "Person�Ĺ��캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "Person�����������ĵ���" << endl;
//	}
//};
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p.m_name << "���ţ�" << p.m_Phone.m_pname << endl;
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
//	static int m_B;//��̬��Ա����Ҳ���з���Ȩ�޵�
//};
//
//int Person::m_A = 100;//�����ʼ��
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
//	//��̬��Ա������������ĳ�������ϣ����ж��󶼹���ͬһ�����ݣ���˾�̬��Ա���������ַ��ʷ�ʽ��
//	Person p;//1.ͨ��������з���
//	cout << p.m_A << endl;//100
//
//	cout << Person::m_A << endl;//100  //2.ͨ���������з���
//	//cout << Person::m_B << endl;//����������ʲ���˽�о�̬��Ա����
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
//		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
//		//m_B = 200;//������̬��Ա���������Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ������m_B����
//		cout << "static void func����" << endl;
//	}
//
//	static int m_A;
//	int m_B;
//private:
//	static void func1()//��̬��Ա����Ҳ�����������
//	{
//		cout << "static void func2����" << endl;
//	}
//};
//
//int Person::m_A = 0;
//void test01()
//{
//	Person p;//1.ͨ���������
//	p.func();
//	Person::func();//2.ͨ����������
//
//	//Person::func1();//����������ʲ���˽�о�̬��Ա����
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
//	cout << "size of p = :" << sizeof(p) << endl;//�ն���ռ���ڴ�ռ�Ϊ��1
//	//C++���������ÿ���ն������һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ�á���ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//}
//
//class Person2
//{
//	int m_A;//�Ǿ�̬��Ա������������Ķ�����
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
//	static int m_B;//��̬��Ա����,��������Ķ�����
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
//	static int m_B;//��̬��Ա����,��������Ķ�����
//
//	void func()//�Ǿ�̬��Ա��������������Ķ�����
//	{
//
//	}
//	void func()//��̬��Ա��������������Ķ�����
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
//	cout << "p1�������ǣ�" << p1.age << endl;//����
//}
//
//class Person1
//{
//public:
//	int age;
//	Person1(int age)
//	{
//		this->age = age;//thisָ��ָ�򱻵��õĳ�Ա��������������
//	}
//	void PersonAddPerson(Person1& p)
//	{
//		age += p.age;
//	}
//	Person1& PersonAddPerson01(Person1& p)
//	{
//		age += p.age;
//		return *this;//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
//	}
//};
//void test01()
//{
//	Person1 p1(18);//����this����p1���ó�Ա������thisָ��p1��this->age = age
//	cout << "p1�������ǣ�" << p1.age << endl;//18
//}
//void test02()
//{
//	Person1 p1(10);
//
//	Person1 p2(10);
//	p2.PersonAddPerson(p1);
//	cout << "p2�������ǣ�" << p2.age << endl;//20
//	//p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//�������Ǽ���return *this
//	p2.PersonAddPerson01(p1).PersonAddPerson01(p1).PersonAddPerson01(p1);//��ʽ���˼�� 
//	cout << "p2�������ǣ�" << p2.age << endl;
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
//		cout << "this is Person age = " << m_age << endl;//m_age�൱��this->m_age����test01�����Ŀ�ָ�룬��this�ǿյ�ֵ����Ȼ��������m_age���ԡ��ʳ���
//	}
//	int m_age;
//};
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();//������
//	p->showPersonage();//�����������һ���ж����if (this == NULL)
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
	void showPerson() const//���������൱��const Person* this
	{
		//m_A = 100;//����m_A�൱��this->m_A
		//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
		m_B = 100;
	}

	void func()
	{

	}
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�����޸�
	int m_A;

	mutable int m_B;//����mutable��

};
void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;//������
	//p.m_A = 100;//����
	p.m_B = 100;//������

	p.showPerson();
	//p.func();//����
}
int main()
{
	//test01();
	test01();

	system("pause");
	return 0;
}