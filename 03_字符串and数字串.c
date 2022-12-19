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

	printf("在字符数组中，无论数组元素是数字还是字符，末尾的'\\0'都占用一个字符。\n");
	printf("而在整型数组中，无论数组元素是数字还是字符，末尾的'\\0'都不占用空间。\n");
	printf("'\\0'会终止printf函数的输出，即'\\0'后的内容都将不输出\n");
	while(1);
}