#include <iostream>
#incldue <bits/stdc++.h>

using namespace std;

void insert(int idx,int num,int arr[],int& len)
{
	for (int i = len; i > idx;i--)
	{
		arr[i+1]=arr[i];		
	}
	arr[index]=num;
	len++;
	
}
void erase(int idx,int arr[],int& len)
{
	len--;
	for (int i=idx;i<len;i++)
	{
		arr[i]=arr[i+1];	
	}
}


int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
		
}
