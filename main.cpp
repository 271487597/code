#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

void main()
{
	int a[30], b[30];
	char c[4];
	int d;
	int e[30], f[30], z;
	c[0] = '+';
	c[1] = '-';
	c[2] = '*';
	c[3] = '/';
	d = 0;	
for (int i = 0; i < 30; i++)
{
	a[i] = rand() % 10;
	b[i] = rand() % 10;
	e[i] = rand() % 10;
	f[i] = rand() % 10;
	z = rand() % 2;
	if (z == 0)						//�ж��Ƿ��Ƿ�����0Ϊ�������1Ϊ����
	{
		if (a[i] < b[i])				//������ı��ѭ��
		{
			if (e[i] < f[i])
				if(b[i]=!0&&f[i]!=0)
				{
					d = rand() % 4;
					cout << "��"<<i+1<<"��:" << a[i] << "/" << b[i] << c[d] << e[i] << "/" << f[i] << "="<<endl;
				}
				else
					i = i - 1;
			else
				i = i - 1;
			
		}
		else
			i = i - 1;
	}
	else							//�����ı��
		cout <<  "��"<<i+1<<"��:" << a[i] << c[d] << e[i] << "="<<endl;
	}
	system("pause");
}
