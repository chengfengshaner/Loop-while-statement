//ѭ�����
// while
// for
// do while
//
//whileѭ��

#include <stdio.h>
//int main()
//{
//	while (1)
//		printf("hehe\n");//��ѭ��������ֹͣ
//
//	return 0;
//}

//while �﷨�ṹ
//while�����ʽ�� - ���ʽ�ṹΪ�棨��0����ѭ�����Ҫ��ִ�У�����Ͳ��ᱻִ��
//    ѭ�����;

int main()
{
	int i = 1;
	//��whileѭ���У�break�������õ���ֹѭ��
	//��whileѭ���У�continue������������ѭ��continue����Ĵ���

	while (i <= 10)
	{
		if (5 == i)
			/*break*/continue;//ʹ��i = 5��ʹ������������continue�Ĵ��룬ֱ��ȥ�ж��Ƿ�����´ε�ѭ��
		                      //�˴�ǡ��������i++���������4 - 5֮����������

		printf("%d ", i);
		i++;
	}
	return 0;
}