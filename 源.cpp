#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//struct Student
//{
//	// 成员列表
//	string name;  // 名字
//	int age;	  // 年龄
//	int score;	  // 分数
//};

//struct Teacher
//{	// 老师的成员列表
//	string name;
//	int id;
//	int age;
//	struct Student Array[50];
//};
//
////struct Student1
////{
////	// 成员列表
////	string name;  // 名字
////	int age;	  // 年龄
////	int score;	  // 分数
////}s3; // 这里直接创建变量 s3
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

struct Student	// 学生结构体
{
	string Sname;
	int score;
};
struct Teacher	// 老师结构体
{
	string Tname;
	struct Student Sarray[5];
};

void AllocatorSpace(Teacher Tarray[], int size)
{
	string NameSeed = "ABCDE";
	for (int i = 0; i < size; i++)
	{
		// 给老师名字赋值
		Tarray[i].Tname = "Teacher_";
		Tarray[i].Tname += NameSeed[i];
		// 给老师的学生赋值
		for (int j = 0; j < 5; j++)
		{
			// 姓名赋值
			Tarray[i].Sarray[j].Sname = "Student_";
			Tarray[i].Sarray[j].Sname += NameSeed[j];
			// 成绩赋值
			int random = rand() % 61 + 40;	// 代表随机数40~100，不+40，则是0~60，不过要提前加随机数种子
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
	//struct Student s1;  // 创建变量s1
	//s1.name = "Joyce";  // 变量s1中的name赋值
	//s1.age = 20;		// 变量s1中的age赋值
	//s1.score = 100;		// 变量s1中的score赋值
	//cout << s1.name << " " << s1.age << " " << s1.score << endl;

	//struct Student s2 = { "Tatina",21,99 };
	//cout << s2.name << " " << s2.age << " " << s2.score << endl;

	//s3.name = "Rose";
	//s3.age = 35;
	//s3.score = 98;
	//cout << s3.name << " " << s3.age << " " << s3.score << endl;

	//Student s4;

	// 创建结构体数组，并直接初始化
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

	//StrArray[2] = { "Baby",3,100 }; // 赋值
	//// 下面打印
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
