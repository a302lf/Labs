# include <iostream> 
using namespace std;
void fibb(int count2)
 {int count1, sv, pred=0,sum=1;
  cout << sum;
  while (count1 < (count2-1))
  {count1+=1;
   sv=sum;
   sum=sum+pred;
   pred=sv;
   cout << ", " << sum;}
 }
int main()
 {int count;
  cin >> count;
  cout <<"fibb("<<count<<")-> ";
  fibb(count);
  return 0;
 }
