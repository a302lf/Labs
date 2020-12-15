# include <iostream>
using namespace std;
int main()
{ int numb;
  cout << "Choose number of necessary currency\n";
  cout << "1 RUB\n";
  cout << "2 USD\n";
  cout << "3 EUR\n";
  cout << "4 UAH\n";
  cout << "5 CNY\n";
  cout << "6 AED\n";
  cin >> numb; 
  switch (numb)
{ case 1: 
   cout << "Full name: Russian ruble\n";
   cout << "Code: RUB\n";
   cout << "Country: Russian Federation\n";
  break;
  case 2: 
   cout << "Full name: United States dollar\n";
   cout << "Code: USD\n";
   cout << "Country: United States\n"; 
  break;
  case 3:
   cout << "Full name: Euro\n";
   cout << "Code: EUR\n";
   cout << "Country: European Union\n"; 
  break;
  case 4: 
   cout << "Full name: Ukrainian hryvnia\n";
   cout << "Code: UAH\n";
   cout << "Country: Ukraine\n";
  break;
  case 5:
   cout << "Full name: Yuan\n";
   cout << "Code: CNY\n";
   cout << "Country: China\n";
  break; 
  case 6: 
   cout << "Full name: United Arab Emirates dirham\n";
   cout << "Code: AED\n";
   cout << "Country: United Arab Emirates\n";
  break;
} }
