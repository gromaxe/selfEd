#include <iostream>

using namespace std;

int main()
{
  for(int i=99;i > 0;i--)
  {
    cout << i << " bottle(s) of beer on the wall,\n"
         << i << " bottle(s) of beer.\n"
         << "Take one down and pass it around,\n"
         << i-1 << " bottle(s) of beer on the wall.\n\n";
  }
  cout <<"Go to the store and buy some more.\n";
  return 0;
}
