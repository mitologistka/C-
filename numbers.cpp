
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int l, a, o;
	
	string bin = "";

	cout << "Select a system:" << endl;
	cout << "1. binary system" << endl;
	cout << "2. base-3 " << endl;
	cout << "3. base-4" << endl;
	cout << "4. base-5" << endl;
	cout << "5. base-6" << endl;
	cout << "6. base-7" << endl;
	cout << "7. octal" << endl;
	cout << "8. base-9" << endl;
	cin >> a;
	cout << "Enter the number" << endl;
	cin >> l;

	switch (a)
	{
	case 1:
		while (l > 0)
		{
			if (l % 2 == 0)
				bin += "0";
			else
				bin += "1";
			l /= 2;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 2:
		while (l > 0)
		{
			if (l % 3 == 0)
				bin += "0";
			else if (l % 3 == 1)
				bin += "1";
			else
				bin += "2";
			l /= 3;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 3:
		while (l > 0)
		{
			if (l % 4 == 0)
				bin += "0";
			else if (l % 4  == 1)
				bin += "1";
			else if (l % 4 == 2)
				bin += "2";
			else
				bin += "3";
			l /= 4;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 4:
		while (l > 0)
		{
			if (l % 5 == 0)
				bin += "0";
			else if (l % 5 == 1)
				bin += "1";
			else if (l % 5 == 2)
				bin += "2";
			else if (l % 5== 3 )
				bin += "3";
			else
				bin += "4";
			l /= 5;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 5:
		while (l > 0)
		{
			if (l % 6 == 0)
				bin += "0";
			else if (l % 6 ==1 )
				bin += "1";
			else if (l % 6==2 )
				bin += "2";
			else if (l % 6 == 3 )
				bin += "3";
			else if (l % 6 == 4 )
				bin += "4";
			else
				bin += "5";
			l /= 6;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 6:
		while (l > 0)
		{
			if (l % 7 == 0)
				bin += "0";
			else if (l % 7== 1 )
				bin += "1";
			else if (l % 7 ==2 )
				bin += "2";
			else if (l % 7==3 )
				bin += "3";
			else if (l % 7 == 4 )
				bin += "4";
			else if (l % 7== 5 )
				bin += "5";
			else
				bin += "6";
			l /= 7;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 7:
		while (l > 0)
		{
			if (l % 8 == 0)
				bin += "0";
			else if (l % 8 == 1)
				bin += "1";
			else if (l % 8 == 2)
				bin += "2";
			else if (l % 8 == 3)
				bin += "3";
			else if (l % 8 == 4)
				bin += "4";
			else if (l % 8 == 5)
				bin += "5";
			else if (l % 8 == 6)
				bin += "6";
			else
				bin += "7";
			l /= 8;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	case 8:
		while (l > 0)
		{
			if (l % 9 == 0)
				bin += "0";
			else if (l % 9 == 1)
				bin += "1";
			else if (l % 9 == 2)
				bin += "2";
			else if (l % 9 == 3)
				bin += "3";
			else if (l % 9 == 4)
				bin += "4";
			else if (l % 9 == 5)
				bin += "5";
			else if (l % 9 == 6)
				bin += "6";
			else if (l % 9 == 7)
				bin += "7";
			else
				bin += "8";
			l /= 9;
		}
		reverse(bin.begin(), bin.end());
		cout << bin;
		break;
	}

	return 0;
}