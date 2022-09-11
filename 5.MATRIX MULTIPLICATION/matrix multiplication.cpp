#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main ()
{
	int ra,ca,rb,cb,i,j,k;
	float **A,**B,**C;
	cout<<"----------MATRIX MULTIPLICATION----------";
	cout<<"\n\nEnter number of rows for matrix A: ";
	cin>>ra;
	cout<<"\nEnter number of column for matrix A: ";
	cin>>ca;
	cout<<"\n\nEnter number of rows for matrix B: ";
	cin>>rb;
	cout<<"\nEnter number of column for matrix B: ";
	cin>>cb;
	A=(float**)malloc(ra*sizeof(int*));
	for(i=0;i<ra;i++)
	{
		A[i]=(float*)malloc(ca*sizeof(int*));
	}
	B=(float**)malloc(rb*sizeof(int*));
	for(i=0;i<rb;i++)
	{
		B[i]=(float*)malloc(cb*sizeof(int*));
	}
	C=(float**)malloc(ra*sizeof(int*));
	for(i=0;i<ra;i++)
	{
		C[i]=(float*)malloc(cb*sizeof(int*));
	}
	if(ca != rb)
	{
		cout<<"\n\nMatrix multiplication not possible.";
	}
	else
	{
		cout<<"\n\n----------Inputs for matrix A----------";
		for(i=0;i<ra;i++)
		{
			for(j=0;j<ca;j++)
			{
				cout<<"\nEnter the value of A"<<i+1<<j+1<<": ";
				cin>>A[i][j];
			}
		}	
		cout<<"\n\n----------Inputs for matrix B----------";
		for(i=0;i<rb;i++)
		{
			for(j=0;j<cb;j++)
			{
				cout<<"\nEnter the value of B"<<i+1<<j+1<<": ";
				cin>>B[i][j];
			}
		}		
		//Matrix c
		for(i=0;i<ra;i++)
		{
			for(j=0;j<cb;j++)
			{
				C[i][j]=0;
			}
		}
		for(i=0;i<ra;i++)
		{
			for(j=0;j<cb;j++)
			{
				for(k=0;k<ca;k++)
				{
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		cout<<"\n\nMATRIX A:";
		for(i=0;i<ra;i++)
		{
			cout<<"\n";
			for(j=0;j<ca;j++)
			{
				cout<<A[i][j]<<"\t";
			}
		}
		cout<<"\n\nMATRIX B:";
		for(i=0;i<rb;i++)
		{
			cout<<"\n";
			for(j=0;j<cb;j++)
			{
				cout<<B[i][j]<<"\t";
			}
		}
		cout<<"\n\nResultant MATRIX C:";
		for(i=0;i<ra;i++)
		{
			cout<<"\n";
			for(j=0;j<cb;j++)
			{
				cout<<C[i][j]<<"\t";
			}
		}
	}
	free(A);
	free(B);
	free(C);
	return 0;
}
