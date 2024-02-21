//循环语句
// while
// for
// do while
//
//while循环

#include <stdio.h>
//int main()
//{
//	while (1)
//		printf("hehe\n");//死循环：不会停止
//
//	return 0;
//}

//while 语法结构
//while（表达式） - 表达式结构为真（非0），循环语句要被执行，否则就不会被执行
//    循环语句;

int main()
{
	int i = 1;
	//在while循环中，break用于永久的终止循环
	//在while循环中，continue用于跳过本次循环continue后面的代码

	while (i <= 10)
	{
		if (5 == i)
			/*break*/continue;//使用i = 5会使跳过本次运行continue的代码，直接去判断是否进行下次的循环
		                      //此处恰好跳过了i++，代码会在4 - 5之间永久运行

		printf("%d ", i);
		i++;
	}
	return 0;
}