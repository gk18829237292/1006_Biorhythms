#include<stdio.h>

int main()
{
	int p, e, i, d;
	int index = 1;
	while (scanf("%d%d%d%d",&p,&e,&i,&d) &&(p != -1 || e!= -1 || i != -1 || d!= -1))
	{
		int temp = d +1;
		while ((temp -p) % 23 != 0 || (temp - e) % 28 != 0 || (temp - i) % 33 != 0)
		{
			temp++;
		}
		printf("Case %d: the next triple peak occurs in %d days.\n",index++,temp - d);
	}
	return 1;
}