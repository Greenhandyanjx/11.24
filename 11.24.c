#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str1[1000] = { '\0' }, str2[1000] = { '\0' }, str3[1000] = {'\0'};
	int a = 0, b = 0,c=0, m= 0,n=0,len=0;
	scanf("%s", str3);
	len = strlen(str3);
	for (n = 0; n < len; n += 5)
	{
		str1[m] = str3[n];
			m++;
	}
	m = 0;
	for (n = 3; n < len; n += 5)
	{
		str2[m] = str3[n];
		m++;
	}
	for (n = 0; n < m; n++)
	{
		if (str1[n] == 'a')
		{
			if (str2[n] == 'b')
				a = b;
			else if (str2[n] == 'c')
				a = c;
			else if (str2[n] >= '0' && str2[n] <= '9')
				a = str2[n] - '0';
		}
		else if (str1[n] == 'b')
		{
			if (str2[n] == 'a')
				b = a;
			else if (str2[n] == 'c')
				b = c;
			else if (str2[n] >= '0' && str2[n] <= '9')
				b = str2[n] - '0';
		}
		else if (str1[n] == 'c')
		{
			if (str2[n] == 'b')
				c = b;
			else if (str2[n] == 'a')
				c=a;
			else if (str2[n] >= '0' && str2[n] <= '9')
				c = str2[n] - '0';
		}
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
	//scanf("%s", str1);
	//b = strlen(str1);
	//for (a = 0; a< b; a++)
	//{
	//	if ((str1[a] == 'b' || str1[a] == 'o' || str1[a] == 'y'))
	//	{
	//		for (c = 0; c < 3; c++)
	//		{
	//			if (str1[a] == str2[c]&&str1[a+1]!=str2[c+1])
	//			{
	//				count1++;
	//				break;
	//			}
	//			else if (str1[a] == str2[c] && str1[a + 1] == str2[c + 1] && str1[a + 2] != str2[c + 2])
	//			{
	//				count1++;
	//				a++;
	//				break;
	//			}
	//			else if (str1[a] == str2[c] && str1[a + 1] == str2[c + 1] && str1[a + 2] == str2[c + 2])
	//			{
	//				count1++;
	//				a += 2;
	//				break;
	//			}
	//		}
	//	}
	//	else if ((str1[a] == 'g' || str1[a] == 'i' || str1[a] == 'r'||str1[a]=='l'))
	//	{
	//		for (c = 0; c < 4; c++)
	//		{
	//			if (str1[a] == str3[c] && str1[a + 1] != str3[c + 1])
	//			{
	//				count2++;
	//				break;
	//			}
	//			else if (str1[a] == str3[c] && str1[a + 1] == str3[c + 1] && str1[a + 2] != str3[c + 2])
	//			{
	//				count2++;
	//				a++;
	//				break;
	//			}
	//			else if (str1[a] == str3[c] && str1[a + 1] == str3[c + 1] && str1[a + 2] == str3[c + 2]&&str1[a+3]!=str3[c+3])
	//			{
	//				count2++;
	//				a += 2;
	//				break;
	//			}
	//			else if (str1[a] == str3[c] && str1[a + 1] == str3[c + 1] && str1[a + 2] == str3[c + 2] && str1[a + 3] == str3[c + 2])
	//			{
	//				count2++;
	//				a += 3;
	//				break;
	//			}
	//		}

	//	}
	//}