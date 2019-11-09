#include<iostream>
#include<vector>
using namespace std;

//改进版的冒泡排序
vector<int> bubbleSort(vector<int>arr)
{
   for(int i=0;i<arr.size()-1;i++)
   {
     bool hasSwap=false;
	 for(int j=0;j<arr.size()-1-i;j++)
	 {
	    if(arr[j]>arr[j+1])
		{
		  hasSwap=true;
		  int tmp=arr[j];
		  arr[j]=arr[j+1];
		  arr[j+1]=tmp;
		}
	 }
	 if(!hasSwap)
	   return arr;
   }
   return arr;
}

int main()
{
  int i;
  vector<int>InputArr;
  while(cin>>i)
  {
     InputArr.push_back(i);
  }
  InputArr=bubbleSort(InputArr);
  for(auto it=InputArr.begin();it!=InputArr.end();it++)
    cout<<*it<<" ";
  cout<<endl;
  
  return 0;
}

