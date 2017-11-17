#include <iostream>

using namespace std;


void merge(int v[], int l, int m, int r)
{
	int w[100];int k=0;
	int i = l;
	int j = m+1;
	while(i<=m && j<=r)
	{
		if(v[i]<=v[j])
			w[k++]=v[i++];
		else
			w[k++]=v[j++];
	}
	while(i<=m)
		w[k++]=v[i++];
	while(j<=r)
		w[k++]=v[i++];


	for(i=0; i<=k; i++)
		v[l+i]=w[i];
}

void mergeSort(int v[], int l, int r)
{
	if(r>l)
	{
		int m = l+(r-l)/2;
		mergeSort(v, l, m);
		mergeSort(v, m+1, r);
		merge(v, l, m, r);
	}
}


int main()
{
	int v[7]={38, 27, 43, 3, 9, 82, 10};

	mergeSort(v, 0, 6);
	for(int i=0; i<7; i++)
		cout<<v[i];

	return 0;
}