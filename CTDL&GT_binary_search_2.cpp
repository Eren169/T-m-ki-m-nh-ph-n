#include<stdio.h>
#include<iostream>
using namespace std;

int search( int a[], int l, int r, int x){
	
	int mid =(l+r)/2;
	if( a[mid] == x) return search(a,l,mid-1, x);
	else if( a[mid] > x) return search(a,l,mid-1, x);
	     else return search(a,r,mid+1, x);
}

bool binarySearch(int a[], int n, int x)
{
	int l = 0, r = n-1;
	while(l <= r)
	{
		int mid = (l+r)/2;
		if( a[mid] == x) return true;
		else if( a[mid] > x) r = mid-1;
		    else l = mid+1;
	}
	return false;
}

void sapxep(int a[], int n)
{
	for(int i = 0; i< n-1; i++ )
	    for( int j = n-1; j>i; j--)
	        if( a[j] < a[i])
	             swap( a[i], a[j]);
}

void xuat(int a[], int n)
{
	for(int i = 0; i< n; i++)
	    cout<< a[i] <<" ";
	cout<< endl;		
}

int main()
{
	int a[9] = {0, 3, 4, 1, 7, 2, 9, 6, 5};
	int x;
	cin>> x;
	sapxep( a, 9 );
	xuat( a, 9 );
	if( search( a, 9, x)) cout<< "Success!";
	else cout<< "Faied";
}
