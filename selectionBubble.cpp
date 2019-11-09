#include <iostream>
#include <vector>
using namespace std;
//选择排序
vector<int> selectionSort(vector<int>arr)
{
  for(int i=0;i<arr.size()-1;i++)
  {
    int current_min_index=i;
	int current_min=arr[i];
	bool needSwap=false;
    for(int j=i+1;j<arr.size();j++)
	{
	  if(arr[j]<current_min)
	  {
	     needSwap=true;
	     current_min_index=j;
		 current_min=arr[j];
	  }
	}
	if(needSwap)
	  {
	    int tmp=arr[i];
		arr[i]=arr[current_min_index];
		arr[current_min_index]=tmp;
	  }
  }
  return arr;
}

int main()
{
  int ArrElem;
  vector<int>InputArr;
  while(cin>>ArrElem)
    InputArr.push_back(ArrElem);
  InputArr=selectionSort(InputArr);
  for(auto it=InputArr.begin();it!=InputArr.end();it++)
     cout<<*it<<" ";
  cout<<endl;
  return 0;
}
