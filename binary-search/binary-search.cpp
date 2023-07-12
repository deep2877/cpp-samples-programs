#include <iostream>
using namespace std;

int binarySerach(int arr[], int size, int key)
{

  int start = 0;
  int end = size - 1;

  int mid = (start + end) / 2;

  while (start <= end)
  {

    if (arr[mid] == key)
    {
      return mid;
    }

    if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }

    mid = (start + end) / 2;
  }
  return -1;
}

int main()
{
  int even[6] = {1, 2, 5, 16, 31, 34};
  int odd[7] = {5, 6, 7, 12, 24, 35, 90};

  int evenIndex = binarySerach(even, 6, 5);

  cout << "Index of 5 is : " << evenIndex << endl;

  int oddIndex = binarySerach(odd, 7, 24);

  cout << "Index of 24 is : " << oddIndex << endl;

  return 0;
}