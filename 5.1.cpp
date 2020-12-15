#include <iostream>
#include <string>
using namespace std;
class electronics
 {private :
	string name, brand, model;
	int numb, coast;
  public : 
  string get_name()
  {return name;}
  void set_name(string ch_name)
  {name=ch_name;}

  string get_brand()
  {return brand;}
  void set_brand(string ch_brand)
  {brand=ch_brand;}

  string get_model()
  {return model;}
  void set_model(string ch_model)
  {model=ch_model;} 

  int get_numb()
  {return numb;}
  void set_numb(int ch_numb)
  {numb=ch_numb;}

  int get_coast()
  {return coast;}
  void set_coast(int ch_coast)
  {coast=ch_coast;}

  void set_all(string ch_name, string ch_brand, string ch_model, int ch_numb, int ch_coast)
  {name=ch_name;
   brand=ch_brand;
   model=ch_model;
   numb=ch_numb;
   coast=ch_coast;}
};

class office_equipment : public electronics
 {private :
	string system, ram, space, cpu, gpu, display;
  public:
  string get_system()
  {return system;} 
  void set_system(string ch_system)
  {system=ch_system;}

  string get_ram()
  {return ram;} 
  void set_ram(string ch_ram)
  {ram=ch_ram;}

  string get_space()
  {return space;} 
  void set_space(string ch_space)
  {space=ch_space;} 

  string get_cpu()
  {return cpu;} 
  void set_cpu(string ch_cpu)
  {cpu=ch_cpu;} 

  string get_gpu()
  {return gpu;} 
  void set_gpu(string ch_gpu)
  {gpu=ch_gpu;} 

  string get_display()
  {return display;} 
  void set_display(string ch_display)
  {display=ch_display;} 

  void set_all1(string ch_system, string ch_ram, string ch_space, string ch_cpu, string ch_gpu, string ch_display)
  {system=ch_system;
   ram=ch_ram;
   space=ch_space;
   cpu=ch_cpu;
   gpu=ch_gpu;
   display=ch_display;
  }
 };

class accessories : public electronics
 {private:
	string color;
	bool wire, light;
 public:
 string get_color()
 {return color;} 
 void set_color(string ch_color)
 {color=ch_color;}  
 
 bool get_wire()
 {return wire;}
 void set_wire(bool ch_wire) 
 {wire=ch_wire;} 

 bool get_light()
 {return light;}
 void set_light(bool ch_light) 
 {light=ch_light;}

 void set_all2(string ch_color, bool ch_wire, bool ch_light)
 {color=ch_color;
  wire=ch_wire;
  light=ch_light;}
}; 
int main()
 {int a,b,c,m,k,i;
  string in_name, in_brand, in_model, in_ram, in_space, in_cpu, in_gpu, in_display, in_system, in_color;
  int in_coast, in_numb;
  bool in_wire, in_light, ch;
   office_equipment laptop [3];
   office_equipment tablet [1];
   office_equipment phone [2]; 
   accessories headphones[3];
   accessories mouse[1];
   accessories keyboards [1];

   laptop[0].set_all("laptop", "Maibenben", "Z5", 3, 50000);
   laptop[0].set_all1("DOS", "8Gb", "SSD 128Gb + HDD: 1Tb", "Intel Core i5-8300H", "NVIDIA GeForce GTX 1050", "15,6 IPS FullHD");
   laptop[1].set_all("laptop", "HP", "Spectre x360 Convertable", 1, 150000);
   laptop[1].set_all1("Windows 10", "16Gb", "SSD 521Gb", "Intel Core i7-10510U", "NVIDIA GeForce MX330", "15,6 AMOLED 3840x2160");
   laptop[2].set_all("laptop", "Aser", "Predator Triton 500", 1, 214990);
   laptop[2].set_all1("Windows 10", "32Gb", "SSD 2Tb", "Intel Core i7-10875H", "NVIDIA GeForce RTX 2080 Super Max-Q", "15,6 IPS FullHD");
   
   phone[0].set_all("Smartphone", "F(x)tec", "Pro 1", 2, 52000);
   phone[0].set_all1("Android 9", "6Gb", "128Gb", "Snapdragon 835", "Adreno 540", "5,99 AMOLED 2160x1080");
   phone[1].set_all("Smartphone", "ASUS", "ROG Phone", 5, 72000);
   phone[1].set_all1("ROG Gaming ZenUI Android 8.1", "8Gb", "128/512Gb", "Snapdragon 845", "Adreno 630", "6 AMOLED 2160x1080");

   tablet[0].set_all("Tablet", "Lenovo", "Smart Tab M10+", 4, 18320);
   tablet[0].set_all1("Android 9", "2/4Gb", "32/64/128Gb", "MediaTek Helio P22T", "IMG GE8320", "10,33 FullHD ");
   
   //work
   headphones[0].set_all("Headphones", "ASUS", "TUF Gaming H3", 8, 4000);
   headphones[0].set_all2("Black", 1,0);
   headphones[1].set_all("Headphones", "ASUS", "ROG Strix Fusion Wireless", 6, 10000);
   headphones[1].set_all2("Black", 0,0);
   headphones[2].set_all("Headphones", "ASUS", "ROG Sdelta", 13, 15000);
   headphones[2].set_all2("Black", 1,1);

   // don't work
   keyboards[0].set_all("Keyboards", "SteelSeries", "Apex 7 Red Switch", 9, 13990);
   keyboards[0].set_all2("Black", 1,1);
   
   //work
   mouse[0].set_all("Mouse", "Razer", "Mamba Wireless", 18, 7990);
   mouse[0].set_all2("Black", 0,1);

   cout<<"Coose what would you like to do\n"<<"1: see kind of goods and number of one\n";
   cout<<"2: see full date about goods\n"<<"3: Change data\n"<<"4: Add data\n"<<"5: Sell goods\n";
   cin>> a;
   switch (a)
   {case 1:
   	cout<<"Coose kind of goods\n"<<"1: laptops "<<"2: phones "<<"3: tablet\n"<<"4: headphones "<<"5: keyboards "<<"6: mice\n";
   	cin>>b;
   	 switch(b)
   	  {case 1:
   	    cout<<"Number of laptops: ";
   	  	cout<<laptop[0].get_numb()+laptop[1].get_numb()+laptop[2].get_numb();
   	   break;
   	   case 2:
        cout<<"Number of phones: ";
   	  	cout<<phone[0].get_numb()+phone[1].get_numb();
   	   break;
   	   case 3:
        cout<<"Number of tablet: ";
   	  	cout<<tablet[0].get_numb();
   	   break;
   	   case 4:
   	   	cout<<"Number of headphones: ";
   	  	cout<<headphones[0].get_numb()+headphones[1].get_numb()+headphones[2].get_numb();
   	   break;
   	   case 5:
   	   	cout<<"Number of keyboards: ";
   	  	cout<<keyboards[0].get_numb();
   	   break;
   	   case 6:
   	   	cout<<"Number of mice: ";
   	  	cout<<mouse[0].get_numb();
   	   break;
   	  }
   break;
   case 2:
    cout<<"Coose kind of goods\n"<<"1: laptops "<<"2: phones "<<"3: tablet\n"<<"4: headphones "<<"5: keyboards "<<"6: mice\n";
    cin>>b;
   	 switch(b)
   	  {case 1:
   	    cout<<"Laptops\n"<<endl;
   	    for (i=0;i<3;i++)
   	  	{cout<<laptop[i].get_brand()<<" "<<laptop[i].get_model()<<endl;
   	  	 cout<<"ram: "<<laptop[i].get_ram()<<endl;
   	  	 cout<<"space: "<<laptop[i].get_space()<<endl;
   	  	 cout<<"cpu: "<<laptop[i].get_cpu()<<endl;
   	  	 cout<<"gpu: "<<laptop[i].get_gpu()<<endl;
   	  	 cout<<"display: "<<laptop[i].get_display()<<endl;
   	  	 cout<<"system: "<<laptop[i].get_system()<<endl;
   	  	 cout<<"coast: "<<laptop[i].get_coast()<<endl;
   	  	 cout<<"number: "<<laptop[i].get_numb()<<endl;
   	  	 cout<<"***********************************"<<endl;}
   	   break;
   	   case 2:
        cout<<"Phones: "<<endl;
        for (i=0;i<2;i++)
   	  	{cout<<phone[i].get_brand()<<" "<<phone[i].get_model()<<endl;
   	  	 cout<<"ram: "<<phone[i].get_ram()<<endl;
   	  	 cout<<"space: "<<phone[i].get_space()<<endl;
   	  	 cout<<"cpu: "<<phone[i].get_cpu()<<endl;
   	  	 cout<<"gpu: "<<phone[i].get_gpu()<<endl;
   	  	 cout<<"display: "<<phone[i].get_display()<<endl;
   	  	 cout<<"system: "<<phone[i].get_system()<<endl;
   	  	 cout<<"coast: "<<phone[i].get_coast()<<endl;
   	  	 cout<<"number: "<<phone[i].get_numb()<<endl;
   	  	 cout<<"***********************************"<<endl;}
   	   break;
   	   case 3:
        cout<<"Tablet: "<<endl;
   	  	cout<<tablet[0].get_brand()<<" "<<tablet[0].get_model()<<endl;
   	  	cout<<"ram: "<<tablet[0].get_ram()<<endl;
   	  	cout<<"space: "<<tablet[0].get_space()<<endl;
   	  	cout<<"cpu: "<<tablet[0].get_cpu()<<endl;
   	  	cout<<"gpu: "<<tablet[0].get_gpu()<<endl;
   	  	cout<<"display: "<<tablet[0].get_display()<<endl;
   	  	cout<<"system: "<<tablet[0].get_system()<<endl;
   	  	cout<<"coast: "<<tablet[0].get_coast()<<endl;
   	  	cout<<"number: "<<tablet[0].get_numb()<<endl;
   	  	break;
   	   case 4:
   	   	cout<<"Headphones: "<<endl;
   	   	for (i=0;i<3;i++)
   	  	{cout<<headphones[i].get_brand()<<" "<<headphones[i].get_model()<<endl;
   	     cout<<"color: "<<headphones[i].get_color()<<endl;
   	     if (headphones[i].get_wire()) cout<<"Type: "<<"Wire\n";
   	     else cout<<"Type: "<<"Wireless\n";
   	     if (headphones[i].get_light()) cout<<"Adds: "<<"Light\n";
   	     else cout<<"Adds: "<<"Without light\n";
   	     cout<<"coast: "<<headphones[i].get_coast()<<endl;
   	  	 cout<<"number: "<<headphones[i].get_numb()<<endl;
   	     cout<<"***********************************"<<endl;}
   	   break;
   	   case 5:
   	   	cout<<"Keyboards: "<<endl;
   	  	cout<<keyboards[0].get_brand()<<" "<<keyboards[0].get_model()<<endl;
   	    cout<<"color: "<<keyboards[0].get_color()<<endl;
   	    if (keyboards[0].get_wire()) cout<<"Type: "<<"Wire\n";
   	    else cout<<"Type: "<<"Wireless\n";
   	    if (keyboards[0].get_light()) cout<<"Adds: "<<"Light\n";
   	    else cout<<"Adds: "<<"Without light\n";
   	    cout<<"coast: "<<keyboards[0].get_coast()<<endl;
   	  	cout<<"number: "<<keyboards[0].get_numb()<<endl;
   	   break;
   	   case 6:
   	   	cout<<"Mice: "<<endl;
   	  	cout<<mouse[0].get_brand()<<" "<<mouse[0].get_model()<<endl;
   	    cout<<"color: "<<mouse[0].get_color()<<endl;
   	    if (mouse[0].get_wire()) cout<<"Type: "<<"Wire\n";
   	    else cout<<"Type: "<<"Wireless\n";
   	    if (mouse[0].get_light()) cout<<"Adds: "<<"Light\n";
   	    else cout<<"Adds: "<<"Without light\n";
   	    cout<<"coast: "<<mouse[0].get_coast()<<endl;
   	  	cout<<"number: "<<mouse[0].get_numb()<<endl;
   	   break;
	  }
   break;
   case 3:
    {cout<<"Coose kind of goods\n"<<"1: laptops "<<"2: phones "<<"3: tablet\n"<<"4: headphones "<<"5: keyboards "<<"6: mice\n";
    cin>>b;
   	 switch(b)
   	  {case 1:
   	    cout<<"Choose goods\n";
   	    for (i=0;i<3;i++)
   	  	{cout<<i+1<<": "<<laptop[i].get_brand()<<" "<<laptop[i].get_model()<<endl;};
   	  	 cout<<"***********************************"<<endl;
   	  	cin>>c;
   	  	cout<<"You can change only coast or numbers\n";
   	  	cout<<"Change coast? "; 
   	  	cin>>ch;
   	  	if (ch) 
   	  	 {cout<<"new coast: ";
   	  	  cin>>in_coast; 
   	  	  laptop[c].set_coast(in_coast);};
   	  	cout<<"Change number?\n";
   	    cin>>ch;
   	      if (ch)
   	  	   {cout<<"new number: ";
   	  	   	cin>>in_numb; 
   	  	    laptop[c].set_numb(in_numb);}
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"coast: "<<laptop[c].get_coast()<<endl;
   	  	cout<<"number: "<<laptop[c].get_numb()<<endl;
   	   break;
   	   case 2:
   	    cout<<"Choose goods\n";
   	    for (i=0;i<2;i++)
   	  	{cout<<i+1<<": "<<phone[i].get_brand()<<" "<<phone[i].get_model()<<endl;};
   	     cout<<"***********************************"<<endl;
   	  	cin>>c;
   	  	cout<<"You can change only coast or numbers\n";
   	  	cout<<"Change coast? "; 
   	  	cin>>ch;
   	  	if (ch) 
   	  	 {cout<<"new coast: ";
   	  	  cin>>in_coast; 
   	  	  phone[c].set_coast(in_coast);};
   	  	cout<<"Change number?\n";
   	    cin>>ch;
   	      if (ch)
   	  	   {cout<<"new number: ";
   	  	   	cin>>in_numb; 
   	  	    phone[c].set_numb(in_numb);}
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"coast: "<<phone[c].get_coast()<<endl;
   	  	cout<<"number: "<<phone[c].get_numb()<<endl;
   	  break;
   	  case 3:
        cout<<tablet[0].get_brand()<<" "<<tablet[0].get_model()<<endl;
        cout<<"***********************************"<<endl;
   	  	cout<<"You can change only coast or numbers\n";
   	  	cout<<"Change coast? "; 
   	  	cin>>ch;
   	  	if (ch) 
   	  	 {cout<<"new coast: ";
   	  	  cin>>in_coast; 
   	  	  tablet[0].set_coast(in_coast);};
   	  	cout<<"Change number?\n";
   	    cin>>ch;
   	      if (ch)
   	  	   {cout<<"new number: ";
   	  	   	cin>>in_numb; 
   	  	    tablet[0].set_numb(in_numb);}
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"coast: "<<tablet[0].get_coast()<<endl;
   	  	cout<<"number: "<<tablet[0].get_numb()<<endl;
       break;
      case 4:
   	   cout<<"Choose goods\n";
   	   for (i=0;i<3;i++)
   	   {cout<<i+1<<": "<<headphones[i].get_brand()<<" "<<headphones[i].get_model()<<endl;};
   	   cout<<"***********************************"<<endl;
   	  	cin>>c;
   	  	cout<<"You can change only coast or numbers\n";
   	  	cout<<"Change coast? "; 
   	  	cin>>ch;
   	  	if (ch) 
   	  	 {cout<<"new coast: ";
   	  	  cin>>in_coast; 
   	  	  headphones[c].set_coast(in_coast);};
   	  	cout<<"Change number?\n";
   	    cin>>ch;
   	      if (ch)
   	  	   {cout<<"new number: ";
   	  	   	cin>>in_numb; 
   	  	    headphones[c].set_numb(in_numb);}
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"coast: "<<headphones[c].get_coast()<<endl;
   	  	cout<<"number: "<<headphones[c].get_numb()<<endl;
   	  break;
      case 5:
   	    cout<<keyboards[0].get_brand()<<" "<<keyboards[0].get_model()<<endl;
   	    cout<<"***********************************"<<endl;
   	  	cout<<"You can change only coast or numbers\n";
   	  	cout<<"Change coast? "; 
   	  	cin>>ch;
   	  	if (ch) 
   	  	 {cout<<"new coast: ";
   	  	  cin>>in_coast; 
   	  	  keyboards[0].set_coast(in_coast);};
   	  	cout<<"Change number?\n";
   	    cin>>ch;
   	      if (ch)
   	  	   {cout<<"new number: ";
   	  	   	cin>>in_numb; 
   	  	    keyboards[0].set_numb(in_numb);}
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"coast: "<<keyboards[0].get_coast()<<endl;
   	  	cout<<"number: "<<keyboards[0].get_numb()<<endl;
   	  break;
      case 6:
   	    cout<<mouse[0].get_brand()<<" "<<mouse[0].get_model()<<endl;
   	    cout<<"***********************************"<<endl;
   	  	cout<<"You can change only coast or numbers\n";
   	  	cout<<"Change coast? "; 
   	  	cin>>ch;
   	  	if (ch) 
   	  	 {cout<<"new coast: ";
   	  	  cin>>in_coast; 
   	  	  mouse[0].set_coast(in_coast);}
   	  	cout<<"Change number?\n";
   	    cin>>ch;
   	      if (ch)
   	  	   {cout<<"new number: ";
   	  	   	cin>>in_numb; 
   	  	    mouse[0].set_numb(in_numb);}
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"coast: "<<mouse[0].get_coast()<<endl;
   	  	cout<<"number: "<<mouse[0].get_numb()<<endl;
   	  break;}}
   break;
   case 4:
    cout<<"Choose kind of goods\n"<<"1: office_equipment\n"<<"2: accessories\n";
    cin>>b;
    switch (b)
    {case 1:
     {cout<<"Input number of goods\n";
      cin>>m;
      office_equipment *add = new office_equipment[m];
      for(i=0; i<m;i++)
       {cout<<"Kind of office equipment: "; cin>>in_name; add[i].set_name(in_name);
       	cout<<"brand: "; cin>>in_brand; add[i].set_brand(in_brand);
        cout<<"model: "; cin>>in_model; add[i].set_model(in_model);
   	  	cout<<"ram: "; cin>>in_ram; add[i].set_ram(in_ram);
   	  	cout<<"space: "; cin>>in_space; add[i].set_space(in_space);
   	  	cout<<"cpu: "; cin>>in_cpu; add[i].set_cpu(in_cpu);
   	  	cout<<"gpu: "; cin>>in_gpu; add[i].set_gpu(in_gpu);
   	  	cout<<"display: "; cin>>in_display; add[i].set_display(in_display);
   	  	cout<<"system: "; cin>>in_system; add[i].set_system(in_system);
   	  	cout<<"coast: "; cin>>in_coast; add[i].set_coast(in_coast);
   	  	cout<<"number: "; cin>>in_numb; add[i].set_numb(in_numb);
   	  	cout<<"***********************************"<<endl;}
   	  	for(i=0; i<m;i++)
   	  	 {cout<<"Kind of office equipment: "<<add[i].get_name()<<endl;
		  cout<<add[i].get_brand()<<" "<<add[i].get_model()<<endl;
		  cout<<"ram: "<<add[i].get_ram()<<endl;
		  cout<<"space: "<<add[i].get_space()<<endl;
  		  cout<<"cpu: "<<add[i].get_cpu()<<endl;
		  cout<<"gpu: "<<add[i].get_gpu()<<endl;
		  cout<<"display: "<<add[i].get_display()<<endl;
  		  cout<<"system: "<<add[i].get_system()<<endl;
 		  cout<<"coast: "<<add[i].get_coast()<<endl;
		  cout<<"number: "<<add[i].get_numb()<<endl;
		  cout<<"***********************************"<<endl;}}
     break;
     case 2:
      cout<<"Input number of goods\n";
      cin>>m;
      accessories *add = new accessories[m];
      for(i=0; i<m;i++)
       {cout<<"Kind of accessories: "; cin>>in_name; add[i].set_name(in_name);
       	cout<<"brand: "; cin>>in_brand; add[i].set_brand(in_brand);
        cout<<"model: "; cin>>in_model; add[i].set_model(in_model);
        cout<<"color: "; cin>>in_color; add[i].set_color(in_color);
        cout<<"wire?: "; cin>>in_wire; add[i].set_wire(in_wire);
        cout<<"light?: "; cin>>in_light; add[i].set_light(in_light);
        cout<<"coast: "; cin>>in_coast; add[i].set_coast(in_coast);
   	  	cout<<"number: "; cin>>in_numb; add[i].set_numb(in_numb);
   	  	cout<<"***********************************"<<endl;}
   	  	for(i=0; i<m;i++)
   	  	 {cout<<"Kind of accessories: "<<add[i].get_name()<<endl;
		  cout<<add[i].get_brand()<<" "<<add[i].get_model()<<endl;
          cout<<"color: "<<add[i].get_color()<<endl;
		  if (add[i].get_wire()) cout<<"Type: "<<"Wire\n";
   	      else cout<<"Type: "<<"Wireless\n";
   	      if (add[i].get_light()) cout<<"Adds: "<<"Light\n";
   	      else cout<<"Adds: "<<"Without light\n";
          cout<<"coast: "<<add[i].get_coast()<<endl;
		  cout<<"number: "<<add[i].get_numb()<<endl;
		  cout<<"***********************************"<<endl;}
     break;
    }
   break;
   case 5:
    cout<<"Choose what you'd like to sell\n"<<"1: laptops "<<"2: phones "<<"3: tablet\n"<<"4: headphones "<<"5: keyboards "<<"6: mice\n";
    cin>>b;
    switch(b)
   	  {case 1:
   	    cout<<"Choose goods\n";
   	    for (i=0;i<3;i++)
   	  	{cout<<i+1<<": "<<laptop[i].get_brand()<<" "<<laptop[i].get_model()<<endl;
         cout<<"coast: "<<laptop[i].get_coast()<<endl;
   	  	 cout<<"number: "<<laptop[i].get_numb()<<endl;
   	  	 cout<<"***********************************"<<endl;}
   	  	cin>>c;
   	  	cout<<"Input number of selling goods: ";
   	  	cin>>m;
   	  	k=laptop[c-1].get_numb();
   	  	laptop[c-1].set_numb(k-m);
   	  	cout<<"Sold!\n"<<"Number of goods: "<<k-m<<endl;
   	   break;
   	   case 2:
   	    cout<<"Choose goods\n";
   	    for (i=0;i<2;i++)
   	  	{cout<<i+1<<": "<<phone[i].get_brand()<<" "<<phone[i].get_model()<<endl;
         cout<<"coast: "<<phone[i].get_coast()<<endl;
   	  	 cout<<"number: "<<phone[i].get_numb()<<endl;
   	  	 cout<<"***********************************"<<endl;}
   	  	cin>>c;
   	  	cout<<"Input number of selling goods: ";
   	  	cin>>m;
   	  	k=phone[c-1].get_numb();
   	  	phone[c-1].set_numb(k-m);
   	  	cout<<"Sold!\n"<<"Number of goods: "<<k-m<<endl;
   	   break;
   	   case 3:
        cout<<tablet[0].get_brand()<<" "<<tablet[0].get_model()<<endl;
	    cout<<"coast: "<<tablet[0].get_coast()<<endl;
   	  	cout<<"number: "<<tablet[0].get_numb()<<endl;
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"Input number of selling goods: ";
   	  	cin>>m;
   	  	k=tablet[0].get_numb();
   	  	tablet[0].set_numb(k-m);
   	  	cout<<"Sold!\n"<<"Number of goods: "<<k-m<<endl;
   	   break;
   	   case 4:
   	   	cout<<"Choose goods\n";
   	    for (i=0;i<3;i++)
   	  	{cout<<i+1<<": "<<headphones[i].get_brand()<<" "<<headphones[i].get_model()<<endl;
         cout<<"coast: "<<headphones[i].get_coast()<<endl;
   	  	 cout<<"number: "<<headphones[i].get_numb()<<endl;
   	  	 cout<<"***********************************"<<endl;}
   	  	cin>>c;
   	  	cout<<"Input number of selling goods: ";
   	  	cin>>m;
   	  	k=headphones[c-1].get_numb();
   	  	headphones[c-1].set_numb(k-m);
   	  	cout<<"Sold!\n"<<"Number of goods: "<<k-m<<endl;
   	   break;
   	   case 5:
   	   	cout<<keyboards[0].get_brand()<<" "<<keyboards[0].get_model()<<endl;
	    cout<<"coast: "<<keyboards[0].get_coast()<<endl;
   	  	cout<<"number: "<<keyboards[0].get_numb()<<endl;
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"Input number of selling goods: ";
   	  	cin>>m;
   	  	k=keyboards[0].get_numb();
   	  	keyboards[0].set_numb(k-m);
   	  	cout<<"Sold!\n"<<"Number of goods: "<<k-m<<endl;
   	   break;
   	   case 6:
   	   	cout<<mouse[0].get_brand()<<" "<<mouse[0].get_model()<<endl;
	    cout<<"coast: "<<mouse[0].get_coast()<<endl;
   	  	cout<<"number: "<<mouse[0].get_numb()<<endl;
   	  	cout<<"***********************************"<<endl;
   	  	cout<<"Input number of selling goods: ";
   	  	cin>>m;
   	  	k=mouse[0].get_numb();
   	  	mouse[0].set_numb(k-m);
   	  	cout<<"Sold!\n"<<"Number of goods: "<<k-m<<endl;
   	   break;
   	  }
   break;
  }

}
