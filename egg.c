#include<stdio.h>
#include<math.h>
#define zero 0.000001

int main()
{
	 int x,y;
	 long double a,b;
	
	for(x=0;x<=150;x++)			//150Ϊ���˹��еĵ�����XΪ����һ���˵�
	{
		y=150-x;				//��һ���˵ĵ�������������һ���ˣ�
		a=1.0*32/y;				//�۸�1
		b=1.0*24.5/x;			//�۸�2
	
		if((a*x-b*y)>=zero*-1 && (a*x-b*y)<=zero)
		{
			printf("x=%d;y=%d\n",x,y);
			printf("a=%f;b=%f\n",a,b);
		}
			
			
	}

	//%.xlf

	
	return 0;
}