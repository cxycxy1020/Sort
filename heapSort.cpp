#include <iostream>
#include <vector>
using namespace std;

void maxHeapIfy(vector<int> &arr, int i, int n)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest = i;
	if (l<n && arr[l] > arr[largest])
	{
		largest = l;
	}

	if (r<n && arr[r] > arr[largest])
	{
		largest = r;
	}

	if (largest != i)
	{
		swap(arr[i],arr[largest]);
		//上层结构进行了调整，需要检测下层的结构是否也需要调整
		maxHeapIfy(arr, largest, n);
	}
}

void buildMaxHeap(vector<int> &arr)
{
	//从最后一个非叶节点开始自底向下构建
	for (int i = arr.size() / 2 - 1; i >= 0; i--)
	{
		maxHeapIfy(arr,i,arr.size());
	}
}

void heapSort(vector<int> & arr)
{
	buildMaxHeap(arr);
	for (int i = arr.size() - 1; i > 0; i--)
	{
		swap(arr[0], arr[i]);
		maxHeapIfy(arr, 0, i);
	}
}

int main()
{
	int ArrElem;
	vector<int> InputArr;
	while (cin >> ArrElem)
		InputArr.push_back(ArrElem);
	heapSort(InputArr);
	for (auto it = InputArr.begin(); it != InputArr.end(); it++)
		cout << *it << " ";
	cout << endl;
}