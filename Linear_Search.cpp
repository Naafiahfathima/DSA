// Linear Search
#include <iostream>
using namespace std;
int main()
{
  int n, find, a[50], flag = 0;
  cout << "Enter the number of elements:";
  cin >> n;
  cout << "Enter the elements of the array:";
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  cout << "Enter the element to be searched:";
  cin >> find;
  for (int i = 1; i <= n; i++)
  {
    if (a[i] == find)
    {
      cout << "The Element " << find << " found at " << i;
      flag = 1;
    }
  }
  if (flag == 0)
  {
    cout << "No Element Found!";
  }
}