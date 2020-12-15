# include <iostream>
using namespace std;
void fact (int numb1)
{ int i,res;
 while (i < numb1)
  	  {res=res*(numb1-i);
  	  i+=1;};
  cout<< numb1;
  cout<< "!=";	    
  cout << res;;
};
void simple (int numb2)
{ int i, j; int k;
 for (i=1; i<=numb2;i++)
  { k=0;
  	{for(j=1; j<=i;j++)
     if (i%j==0) k=k+1;}
    if (k<3) cout<<i<<" ";}
}
int main()
{ int act, numb;
  cout << "Choose number of action:\n";
  cout << "1:factorial of a number\n";
  cout << "2:sequence of numbers from zero\n";
  cin >> act;
 switch (act)
  {case 1:
    {cout << "Input number\n";
  	 cin >> numb;
     fact(numb);
   break;}
   case 2: 
    {cout << "Input the last number of sequence\n";
     cin >> numb;
     simple(numb);  
   break;}
  }
}
