#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
for (int i =2; n>0;++i)
{
bool isPrime = true;
for(int j =2;j <i; ++j)
{
if(i % j ==0)
{
isPrime = false;
break;
}
}
if (iisPrime)
{
--n;
cout << i << "\n";
}
}
return 0;
}