#include <iostream>
#include <string>
using namespace std;
class person
 {private:
 	int id, age, growth;
 	string name;
  public:
 	int get_id()
 	{return id;}

  string get_name()
  {return name;}

	int get_age()
 	{return age;}
 	
	int get_growth()
 	{return growth;}
 	
  void set_id (int ch_id)	
  {id=ch_id;}	
  	
  void set_name (string ch_name)	
  {name=ch_name;}	
  	
  void set_age (int ch_age)	
  {age=ch_age;}
  	
  void set_growth (int ch_growth)	
  {growth=ch_growth;}	
  	
  void set_all(int ch_id, string ch_name, int ch_age, int ch_growth )	
  {id=ch_id;
   name=ch_name;
   age=ch_age;
   growth=ch_growth;}
 };
 
 int main() 
 { int a, b, i=0; int inid,inage,ingrowth; string inname;
   person man [7];
   man[0].set_all(100000, "Mike", 18, 164);
   man[1].set_all(100001, "Billie", 40, 180);
   man[2].set_all(100002, "Derek", 36, 144);
   man[3].set_all(100003, "Dolores", 21, 172);
   man[4].set_all(100004, "Tailor", 27, 175);
   man[5].set_all(100005, "Oliver", 48, 189);
   man[6].set_all(100006, "Alex", 16, 166); 
   cout<<"Choose the number of action:\n"<<"1: output all names\n";
   cout<<"2: view full information\n"<<"3: change person's data\n";
   cin>> a;
   switch(a) 
   {case 1:
   	 while (i<7)
      {cout<<man[i].get_name()<<endl;
       i+=1;}
    break;
    case 2:
     cout<<"Input number of person ";
     cin>> a;
     cout<< "id: "<< man[a].get_id()<<endl;
     cout<<"name: "<< man[a].get_name()<<endl;
     cout<<"age: "<< man[a].get_age()<<endl;
     cout<<"growth: "<< man[a].get_growth()<<endl;
     break;
    case 3:
    cout<<"Choose number of person you'd like to change;";
    cin>> a;
    cout<<"Choose data you'd like to change:\n"<<"1: id\n";
    cout<<"2: name\n"<<"3: age\n"<<"4: growth\n"<< endl;
    cin>> b;
     switch (b)
     {case 1:
      cin>>inid;
      man[a].set_id(inid);
      cout<<"new id: ";
      cout<< man[a].get_id();
     break;
     case 2:
      cin>>inname;
      man[a].set_name(inname);
      cout<<"new name: "; 
      cout<< man[a].get_name();
     break;
     case 3: 
      cin>>inage;
      man[a].set_age(inage);
      cout<<"new age: "; 
      cout<< man[a].get_age();
     break;
     case 4:
      cin>>ingrowth;
      man[a].set_growth(ingrowth);
      cout<<"new growth: "; 
      cout<< man[a].get_growth();
     break;
    break;}
   }
 }
