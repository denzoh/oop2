#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter n:";
cin >> n;
int a=0;
cin >>a;
int maxVal = a;
int minVal = a;
for(int i=1;i < n;++i)
{
int b;
cin >> b;
a+=b;
if (b<minVal)
{
minVal= b;
}
if (b>maxVal)
{
maxVal=b;
}
}
cout << "Mean:" << (double)a/n << "\n";
cout <<"Max:" << maxVal << "\n";
cout << "Min:" << minVal <<"\n";
cout << "Range:" << (maxVal-minVal) << "\n";
return 0;
}
