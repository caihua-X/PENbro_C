#define _CRT_SECURE_NO_WARNINGS 1
////有一些整数想通过变身伪装自己，假设它们至少都是三位数，变身的规则是从右侧数依次取其偶数位上的数字，
//// 构成它的变身数。例如：123456 的变身数为 135，12345 的变身数是 24。
////请编程实现，读入一个整数，输出它的变身数。
////输入格式
////一个至少三位的正整数，不超出 int 型范围。
////输出格式
////变身后的整数。
////输入样例1 :
////101
////输出样例1 :
////	0
////
////	输入样例2 :
////	2019
////	输出样例2 :
////	21
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////    
////	//char arr[100];
////	//char arr2[100];
////	//char arr3[100];
////	//gets_s(arr);
////	//int i, j = 0, m;
////	//m = strlen(arr);
////	////	printf("%d\n",m); 
////	//for (i = m - 1; i >= 0; i--)
////	//{
////	//	arr2[j] = arr[i];
////	//	j++;
////	//}
////
////	//j = 0;
////	//for (i = 0; i < m; i++)
////	//{
////	//	if (i % 2 == 1)
////	//	{
////
////	//		arr3[j] = arr2[i];
////	//		j++;
////	//	}
////	//}
////
////	//puts(arr3);
////	return 0;
////}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int a,i=0,m=1;
//	scanf("%d", &a);
//	while (a /10 != 0)
//	{
//		arr[i] = a%10;
//		m++;
//		i++;
//	}
//
//	for (i = 0; i < m; i++)
//	{
//
//		printf("%d ",arr[i]);
//	}
//
//	/*if (m % 2 == 1)
//	{
//		
//	}*/
//
//
//	return 0;
//}

