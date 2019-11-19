#include <iostream>
#include <vector>
using namespace std;
//希尔排序
void shellSort(vector<int> &arr)
{
  int d=arr.size();
  while(d>1)
   {
     //使用希尔增量的方式，每次折半
	 d=d/2;
	 for(int x=0;x<d;x++)
	 {
	    for(int i=x+d;i<arr.size();i=i+d)
		  {
		     int tmp=arr[i];
			 int j;
			 for(j=i-d;j>=0 && arr[j] >tmp;j=j-d)
			 arr[j+d]=arr[j];
			 
			 arr[j+d]=tmp;
		  }
	 }
   }
}

int main()
{
   int arrElem;
   vector<int>arr;
   while(cin>>arrElem)
     arr.push_back(arrElem);
   shellSort(arr);
   for(auto it=arr.begin();it!=arr.end();it++)
     cout<<*it<<" ";
	cout<<endl;
}