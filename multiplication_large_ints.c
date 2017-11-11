#include <iostream>

using namespace std;

int main()
{
	int a[6] = {0, 9, 9, 9, 9, 9};
	int b[3] = {0, 9, 9};
	int w[100]={0};

	int n = 5;
	int m = 2;
	int o = n + m;
	for(int i = 1; i <= m; i++)
	{
		int aux = 0; 
		for(int j = i; j <= n+i-1; j++)
		{
			int x = w[o-j+1];
			w[o-j+1] = (w[o-j+1] + b[m-i+1] * a[n-(j-i)] + aux) % 10;
			aux = (x + b[m-i+1] * a[n-(j-i)] + aux) / 10;
			cout<<w[o-j+1]<<' ';
		}
		cout<<endl;
		if(aux)
		{
			w[o-n-i+1] = aux;
		}
		
	}


	for(int l=0; l<=o; l++)
	{
		cout<<w[l]<<' ';
	}
	return 0;
}