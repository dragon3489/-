#include<stdio.h>
int main()
{
	char arr1[]={"123"};
	char arr2[]={"abc"};
	int arr3[]={1,2,3};


	int arr4[]={'a','b','c'};
	printf("%d\n",sizeof(arr1)/sizeof(arr1[1]));
	printf("%d\n",sizeof(arr2)/sizeof(arr2[1]));
	printf("%d\n",sizeof(arr3)/sizeof(arr3[1]));
	printf("%d\n",sizeof(arr4)/sizeof(arr4[1]));

	printf("���ַ������У���������Ԫ�������ֻ����ַ���ĩβ��'\\0'��ռ��һ���ַ���\n");
	printf("�������������У���������Ԫ�������ֻ����ַ���ĩβ��'\\0'����ռ�ÿռ䡣\n");
	printf("'\\0'����ֹprintf�������������'\\0'������ݶ��������\n");
	while(1);
}