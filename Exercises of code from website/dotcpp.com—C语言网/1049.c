#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct date
{
	int year;
	int mounth;
	int day;
};

int main()
{
	int days = 0;
	struct date d1 = { {0},{0},{0} };
	scanf("%d %d %d", &d1.year, &d1.mounth, &d1.day);
	if ((d1.year % 4 == 0 && d1.year % 400 != 0) || d1.year % 100 == 0)
	{
		//Ϊ����
		switch (d1.mounth)
		{
			case 1:
				days = d1.day;  //һ�¹�31��
				break;
			case 2:
				days = 31 + d1.day; //���¹�29��
				break;
			case 3:
				days = 60 + d1.day; //���¹�31��
				break;
			case 4:
				days = 91 + d1.day; //���¹�30��
				break;
			case 5:
				days = 121 + d1.day; //���¹�31��
				break;
			case 6:
				days = 152 + d1.day; //���¹�30��
				break;
			case 7:
				days = 182 + d1.day; //���¹�31��
				break;
			case 8:
				days = 213 + d1.day; //���¹�31��
				break;
			case 9:
				days = 244 + d1.day; //���¹�30��
				break;
			case 10:
				days = 274 + d1.day; //ʮ�¹�31��
				break;
			case 11:
				days = 305 + d1.day; //ʮһ�¹�30��
				break;
			case 12:
				days = 335 + d1.day;
				break;
		}
	}
	else
	{
		//Ϊƽ��
		switch (d1.mounth)
		{
		case 1:
			days = d1.day;  //һ�¹�31��
			break;
		case 2:
			days = 31 + d1.day; //���¹�28��
			break;
		case 3:
			days = 59 + d1.day; //���¹�31��
			break;
		case 4:
			days = 90 + d1.day; //���¹�30��
			break;
		case 5:
			days = 120 + d1.day; //���¹�31��
			break;
		case 6:
			days = 151 + d1.day; //���¹�30��
			break;
		case 7:
			days = 181 + d1.day; //���¹�31��
			break;
		case 8:
			days = 212 + d1.day; //���¹�31��
			break;
		case 9:
			days = 243 + d1.day; //���¹�30��
			break;
		case 10:
			days = 273 + d1.day; //ʮ�¹�31��
			break;
		case 11:
			days = 304 + d1.day; //ʮһ�¹�30��
			break;
		case 12:
			days = 334 + d1.day;
			break;
		}
	}
	printf("%d", days);
	return 0;
}