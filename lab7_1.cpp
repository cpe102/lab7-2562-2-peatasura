#include <iostream>
using namespace std;
#include<string>

int main()
{
  char rank;
  cout << "Input your rank:";
  cin >> rank;
  string s,a,b,c,d;
  //switch(rank){
    s =  "You have received Super Ultra Rare Unit!!!\n";
    a =   "You have received 5 gems.\n";
    b =  "You have received 1 gems.\n";
    c= "You have received 2000 coins.\n";
    d="You have received very KAK items.\n";
 // }*/
  if (rank=='S')
  {
    cout << s << a << b << c << d ;
  }
  else if (rank == 'A')
  {
    cout << a << b << c << d;
  }
  else if (rank == 'B')
  {
    cout << b << c << d;
  }
  else if (rank == 'C')
  {
    cout << c << d;
  }
  else
  {
    cout << d;
  }

  return 0;
}
