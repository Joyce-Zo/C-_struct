#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//struct Student
//{
//	// ��Ա�б�
//	string name;  // ����
//	int age;	  // ����
//	int score;	  // ����
//};

//struct Teacher
//{	// ��ʦ�ĳ�Ա�б�
//	string name;
//	int id;
//	int age;
//	struct Student Array[50];
//};
//
////struct Student1
////{
////	// ��Ա�б�
////	string name;  // ����
////	int age;	  // ����
////	int score;	  // ����
////}s3; // ����ֱ�Ӵ������� s3
//
//void Print1(Student s1)
//{
//	s1.age = 100;
//	cout << s1.age <<" "<< s1.name <<" "<< s1.score;
//}
//void Print2(const Student *s1)
//{
//	//s1->age = 200;
//	cout << s1->age << " " << s1->name << " " << s1->score;
//}

struct Student	// ѧ���ṹ��
{
	string Sname;
	int score;
};
struct Teacher	// ��ʦ�ṹ��
{
	string Tname;
	struct Student Sarray[5];
};

void AllocatorSpace(Teacher Tarray[], int size)
{
	string NameSeed = "ABCDE";
	for (int i = 0; i < size; i++)
	{
		// ����ʦ���ָ�ֵ
		Tarray[i].Tname = "Teacher_";
		Tarray[i].Tname += NameSeed[i];
		// ����ʦ��ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			// ������ֵ
			Tarray[i].Sarray[j].Sname = "Student_";
			Tarray[i].Sarray[j].Sname += NameSeed[j];
			// �ɼ���ֵ
			int random = rand() % 61 + 40;	// ���������40~100����+40������0~60������Ҫ��ǰ�����������
			Tarray[i].Sarray[j].score = random;
		}
	}
}

void Print(Teacher Tarray[],int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Tarray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t";
			cout << Tarray[i].Sarray[j].Sname << " ";
			cout << Tarray[i].Sarray[j].score << endl;
		}
		cout << endl;
	}
}
int main()
{
	//struct Student s1;  // ��������s1
	//s1.name = "Joyce";  // ����s1�е�name��ֵ
	//s1.age = 20;		// ����s1�е�age��ֵ
	//s1.score = 100;		// ����s1�е�score��ֵ
	//cout << s1.name << " " << s1.age << " " << s1.score << endl;

	//struct Student s2 = { "Tatina",21,99 };
	//cout << s2.name << " " << s2.age << " " << s2.score << endl;

	//s3.name = "Rose";
	//s3.age = 35;
	//s3.score = 98;
	//cout << s3.name << " " << s3.age << " " << s3.score << endl;

	//Student s4;

	// �����ṹ�����飬��ֱ�ӳ�ʼ��
	//struct Student StrArray[3]
	//{
	//	{"Joyce",21,200},
	//	{"Tatina",20,190},
	//	{"Rose",35,150}
	//};

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << StrArray[i].name << " " << StrArray[i].age << " " << StrArray[i].score << endl;
	//}
	//cout << endl;

	//StrArray[2] = { "Baby",3,100 }; // ��ֵ
	//// �����ӡ
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << StrArray[i].name << " " << StrArray[i].age << " " << StrArray[i].score << endl;
	//}

	//struct Student s1 = { "Joyce",21,100 };
	//struct Student* ps = &s1;
	//cout << ps->name << " " << ps->age << " " << ps->score << endl;

	//Teacher T;
	//T.age = 35;	T.id = 1993232913;	T.name = "Knaz";
	//T.Array[0].age = 21;	T.Array[0].name = "Tatina";	T.Array[0].score = 98;
	//T.Array[1].age = 20;	T.Array[1].name = "Joyce";	T.Array[1].score = 100;
	//
	//cout << T.age << " " << T.id << " " << T.name << endl;
	//for (int i = 0; i < 50; i++)
	//{
	//	cout << T.Array[i].name << " " << T.Array[i].age << " " << T.Array[i].score << endl;
	//}
	//	 

	//Student s1 = { "Joyce",21,100 };
	////Print1(s1);
	//Print2(&s1);	cout << endl;
	//cout << s1.age << " " << s1.name << " " << s1.score;	

	srand((unsigned int)time(NULL));
	Teacher Tarray[3];
	int size = sizeof(Tarray) / sizeof(Tarray[0]);
	AllocatorSpace(Tarray, size);

	Print(Tarray,size);


















	return 0;
}
