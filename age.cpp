#include<iostream>
using namespace std;
int main()
{
	int day, month, year, bday, bmonth, byear, dayr, monthr, yearr;
	char dash;
	bool valid = false;
	cout << "Enter a valid birth date in dd/mm/yyyy :" << endl;
	cin >> bday >> dash >> bmonth >> dash >> byear;
	cout << "Enter a valid current date in dd/mm/yyyy :" << endl;
	cin >> day >> dash >> month >> dash >> year;
	if (day <= 31 && day >= 1 && bday <= 31 && bday >= 1)
	{
		if (month <= 12 && month >= 1 && bmonth <= 12 && bmonth >= 1)
		{
			if (year < 10000 && year>0 && byear < 10000 && byear>0)
			{
				valid = true;
			}
		}
	}
	else
	{
		valid = false;
	}
	if (valid == true)
	{
		dayr = day - bday;
		monthr = month - bmonth;
		yearr = year - byear;
		if (dayr < 0)
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				dayr += 31;
			}
			else if (month == 2)
			{
				dayr += 28;
			}
			else
			{
				dayr += 30;
			}
			monthr--;
		}
		if (monthr < 0)
		{
			monthr += 12;
			year--;
		}

		cout << "The age is " << yearr << " years, " << monthr << " months and " << dayr << " days" << endl;
	}
	else
	{
		cout << "The date is not valid, try again" << endl;
	}
	system("pause");
	return 0;
}