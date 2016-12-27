// ConsoleApplication5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


using namespace std;

bool CheckStrToDouble(const std::string & numberStr)
{
	double number = atof(numberStr.c_str());
	std::stringstream ss;
	ss << number;
	return (numberStr == ss.str());
}

bool IsParametersCorrect(int argc, char ** argv)
{
	if (argc == 4)
	{
		if (CheckStrToDouble(argv[1]) && CheckStrToDouble(argv[2]) && CheckStrToDouble(argv[3]))
		{
			return true;
		}
	}
	return false;
}

string TriangleTypeDefinition(char ** argv)
{
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double c = atof(argv[3]);
	string triangleType = "";
	if ((a > 0) && (b > 0) && (c > 0))
	{
		if ((a + b > c) && (b + c > a) && (a + c > b))
		{
			if ((a == b) && (b == c))
			{
				triangleType += "��������������";
			}
			else
			{
				if ((a == b) || (b == c) || (a == c))
				{
					triangleType += "��������������";
				}
				else
				{
					triangleType += "��������������";
				}
			}
			triangleType += " �����������";
		}
		else
		{
			triangleType = "������! ����� ���� ���� ������ ������ ���� ������ ����� ������� �������!";
		}
	}
	else
	{
		triangleType = "������! ���� ��� ����� ������ �� ������������ ��� ����� ����!";
	}
	return triangleType;
}

int main(int argc, char ** argv)
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	if (IsParametersCorrect(argc, argv))
	{
		cout << TriangleTypeDefinition(argv);
	}
	else
	{
		cout << "������! ������� �� ���������� ���������! ���������� ���������� - 3, ������ ������ 0. ������ �����: triangle.exe 2 2 3";
	}
}

