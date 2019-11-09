#include <iostream>
#include <vector>
using namespace std;
//插入排序
vector<int> insertSort(vector<int> arr)
{
  //从第一个元素作为基准元素，从第二个元素开始把其插到正确的位置
  for(int i=1;i<arr.size();i++)
  {  
     //如果第i个元素比前面的元素大，则不需要做改变
	 //如果第i个元素比前面的元素小，需要在前面已经排好序的序列中找到第i个元素的位置
     if(arr[i]<arr[i-1])
	 {
	   int j=i-1;
	   //因为后面元素后移会覆盖掉第i个元素，所以先将其保存到一个变量中
	   int waitInsertElem=arr[i]; 
	   //比第i个元素大的元素依次后移，直到找到第一个比第i个元素小的元素，在该元素后插入第i个元素
	   while(j>=0 && arr[j]>waitInsertElem)
	   {
	     arr[j+1]=arr[j];
		 j--;
	   }
	   arr[j+1]=waitInsertElem;
	 }
  }
  return arr;
}

int main()
{
  int ArrElem;
  vector<int> InputArray;
  while(cin>>ArrElem)
   InputArray.push_back(ArrElem);

  InputArray=insertSort(InputArray);
 for(auto it=InputArray.begin();it!=InputArray.end();it++)
   cout<<*it<<" ";
 cout<<endl;   
  return 0;
}