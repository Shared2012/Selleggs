#include<stdio.h>
#include<math.h>
#define zero 0.000001

int main()
{
	 int x,y;
	 long double a,b;
	
	for(x=0;x<=150;x++)			//150为两人共有的蛋数，X为其中一个人的
	{
		y=150-x;				//另一个人的蛋数（总数减第一个人）
		a=1.0*32/y;				//价格1
		b=1.0*24.5/x;			//价格2
	
		if((a*x-b*y)>=zero*-1 && (a*x-b*y)<=zero)
		{
			printf("x=%d;y=%d\n",x,y);
			printf("a=%f;b=%f\n",a,b);
		}
			
			
	}

	//%.xlf

	
	return 0;
}