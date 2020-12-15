#include <iostream>
#include <string>
using namespace std;
class person
 {private:
 	int id, age, growth;
 	string name;
  bool leader;
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

  bool get_leader()
  {return leader;}
  void set_leader(bool ch_leader)
  {leader=ch_leader;}
  	
  void set_all(int ch_id, string ch_name, int ch_age, int ch_growth, bool ch_leader) 
  {id=ch_id;
   name=ch_name;
   age=ch_age;
   growth=ch_growth;
   leader=ch_leader;}
 };

 class group
 {private:
   int numb;
   string title;
   int members[7];
   int lead;
  public:
   string get_title()
   {return title;}
   void set_title(string ch_title)
   {title=ch_title;};

   int get_members(int ch_n)
   {numb=ch_n;
    return members[numb];}
   void set_members(int ch_i, int ch_id)
   {numb=ch_i;
    members[numb]=ch_id;}

   int get_lead()
   {return lead;}
   void set_lead(int ch_lead)
   {lead=ch_lead;}
  };
 
 int main() 
 { int a, b, n, i=0; 
   int in_id,in_age,in_growth; 
   string in_name, in_title;
   bool in_leader=0;
   person man [7];
   man[0].set_all(100000, "Mike", 18, 164, 0);
   man[1].set_all(100001, "Billie", 40, 180, 0);
   man[2].set_all(100002, "Derek", 36, 144, 0);
   man[3].set_all(100003, "Dolores", 21, 172, 0);
   man[4].set_all(100004, "Tailor", 27, 175, 0);
   man[5].set_all(100005, "Oliver", 48, 189, 0);
   man[6].set_all(100006, "Alex", 16, 166, 0);
   cout<<"Choose the number of action:\n"<<"1: output all names\n";
   cout<<"2: view full information\n"<<"3: change person's data\n";
   cout<<"4: create group\n"<<"5: view group data\n";
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
    cout<<"2: name\n"<<"3: age\n"<<"4: growth\n"<<endl;
    cin>> b;
     switch (b)
     {case 1:
      cin>>in_id;
      man[a].set_id(in_id);
      cout<<"new id: ";
      cout<< man[a].get_id();
     break;
     case 2:
      cin>>in_name;
      man[a].set_name(in_name);
      cout<<"new name: "; 
      cout<< man[a].get_name();
     break;
     case 3: 
      cin>>in_age;
      man[a].set_age(in_age);
      cout<<"new age: "; 
      cout<< man[a].get_age();
     break;
     case 4:
      cin>>in_growth;
      man[a].set_growth(in_growth);
      cout<<"new growth: "; 
      cout<< man[a].get_growth();
     break;
     }
    break;
    case 4:
    {group def;
    cout<<"Creating new group\n"<<"Input group's title\n";
    cin>>in_title;
    def.set_title(in_title);
    cout<<"Input number of participant\n";
    cin>>n;
    cout<<"Input id person you'd like to add in group\n";
    for (i;i<n;i++)
     {cout<<"Participant "<<i+1<<":";
	  cin>>a;
      def.set_members(i,a);
      if(in_leader)
        {cout<<"The leader is already exist\n";
         man[i].set_leader(0);}
      else 
        {cout<<"Leader?\n";
         cin>>in_leader;
         man[i].set_leader(in_leader);
         def.set_lead(a);};
     };
    cout<<"Group: "<<def.get_title()<<endl;
    cout<<"Leader: "<<def.get_lead()<<endl;
    for (i=0;i<n;i++)
     cout<<"Participant "<<i+1<<":"<<def.get_members(i)<<endl;}
    break;
    case 5:
    group inpt;
	inpt.set_title("Default");	
	inpt.set_lead(100002);
	man[2].set_leader(1);
	inpt.set_members(0,100006);
	inpt.set_members(1,100002);
	inpt.set_members(2,100005);
	inpt.set_members(3,100004);
    cout<<"Group: "<<inpt.get_title()<<endl;
    cout<<"Leader: "<<inpt.get_lead()<<endl;
    for (i=0;i<4;i++)
     cout<<"Participant "<<i+1<<":"<<inpt.get_members(i)<<endl;
    break;
    }
 }
