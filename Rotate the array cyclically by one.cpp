//first method is to store the last element of array and then push all elements from 2nd element onwardsforward by 1.
//This method's TC => O(n)

//We can do it a bit more faster by using 2 pointer approach:
//keep 2 pointers at two ends of array and keep swapping them till left<right.THE TRICK is to increment left pointer ONLY
//This method's TC => O(n/2) => O(n)

#include<iostream>                       
#include<cstdlib>       //to dynamically allocate memory

using namespace std;

void PrintArray(int a[],int n)
{
	cout<<"\n";
	cout<<" { ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<" } ";
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void Rotate(int a[],int n)
{

	int l=0;      //left pointer
	int r=n-1;    //right pointer (FIXED)
	
	while(l<r)
	{
		swap(&a[l],&a[r]);
		l++;                    
	}
	
	cout<<"\nRotated array => ";
	PrintArray(a,n);
}

int main()
{
	int *a,n;
	
	cout<<"\nHow many elements do you want in the array? => ";
	cin>>n;
	
	//corner cases:
	if(n<0)
	{
		cout<<"\nSize can't be negative!";
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		//feeding the array 
		for(int i=0;i<n;i++)
		{
			cout<<"\n\nElement no "<<i+1<<" ";
			cin>>a[i];
		}
		Rotate(a,n);
	}
	
return 0;	
}
