
#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h> 

using namespace std;

vector<int> allFactors(int A)
{
  vector<int> g1;
  vector<int> g2;
  int lim = sqrt(A);
  for (int i = 1; i <= lim; i++)
  {
    if (A % i == 0)
    {
      g1.push_back(i);
      if (sqrt(A) != i)
      {
        int m = A / i;
        g1.push_back(A / i);
      }
    }
  }

  sort(g1.begin(), g1.end()); 
  return g1;
}

int main()
{
  vector<int> g1;
  g1 = allFactors(84923);

  for (auto it = g1.begin(); it != g1.end(); ++it)
  {
    cout << ' ' << *it;
  }
  return 0;
}
