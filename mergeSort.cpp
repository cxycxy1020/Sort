#include <iostream>
#include <vector>
using namespace std;

//归并排序
void merge(vector<int> &data,int start,int mid,int end)
{
  vector<int>tmp;
  int i=start,j= mid +1;
  while(i != mid +1 && j!= end  +1)
  {
    if(data[i]<=data[j])
	  tmp.push_back(data[i++]);
	else
	  tmp.push_back(data[j++]);
  }
  while(i!= mid +1)
   tmp.push_back(data[i++]);
   
  while(j!= end +1)
   tmp.push_back(data[j++]);
   
  for(int i=0;i<tmp.size();i++)
   data[start+i]=tmp[i];
}

void merge_sort(vector<int> &data,int start,int end)
{
   if(start < end)
   {
      int mid=(start + end)/2;
      merge_sort(data,start,mid);
	  merge_sort(data,mid+1,end);
	  merge(data,start,mid,end);
   }
}

int main()
{
   int ArrayElem;
   vector<int>InputArray;
   while(cin>>ArrayElem)
	   InputArray.push_back(ArrayElem);
   merge_sort(InputArray,0,InputArray.size()-1);
   for(auto it=InputArray.begin();it!=InputArray.end();it++)
	   cout<<*it<<" ";
   cout<<endl;
   return 0;	
}
