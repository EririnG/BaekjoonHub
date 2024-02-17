#include <bits/stdc++.h>
using namespace std;


constexpr unsigned int Hash(const char* str) 
{
	return str[0] ? static_cast<unsigned int>(str[0]) + 0xEDB8832Full * Hash(str + 1) : 8603;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char grade[50];
	string subject;
	float my_grade,sum_grade=0,major_GPA=0;
	for (int i = 0; i < 20; ++i)
	{
		cin >> subject >> my_grade >> grade;
		switch (Hash(grade))
		{
		case Hash("A+"):
			sum_grade += my_grade;
			major_GPA += my_grade * 4.5;
			break;
		case Hash("A0"):
			sum_grade += my_grade;
			major_GPA += my_grade * 4.0;
			break;
		case Hash("B+"):
			sum_grade += my_grade;
			major_GPA += my_grade * 3.5;
			break;
		case Hash("B0"):
			sum_grade += my_grade;
			major_GPA += my_grade * 3.0;
			break;
		case Hash("C+"):
			sum_grade += my_grade;
			major_GPA += my_grade * 2.5;
			break;
		case Hash("C0"):
			sum_grade += my_grade;
			major_GPA += my_grade * 2.0;
			break;
		case Hash("D+"):
			sum_grade += my_grade;
			major_GPA += my_grade * 1.5;
			break;
		case Hash("D0"):
			sum_grade += my_grade;
			major_GPA += my_grade * 1.0;
			break;
		case Hash("F"):
			sum_grade += my_grade;
			major_GPA += my_grade * 0.0;
			break;
		case Hash("P"):
			break;
		default:
			break;
		}
	}
	
	cout << major_GPA/sum_grade;
	return 0;
}
