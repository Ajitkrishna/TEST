#include "pch.h"
#include "stringckeck.h"

int stringCheck::checkString(string &s,string &d)
{
	for (i = 0; i < s.size(); i++)
		num1[s[i] - 'A']++;

	 
	for (i = 0; i < d.size(); i++)
		num2[d[i] - 'A']++;

	for (int i = 0; i < 58; i++)
	{
		if (num1[i] < num2[i])
		{
			check = false;
			break;
		}
	}

	if (check)
		return 1;
	else
		return 0;
}








