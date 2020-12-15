#include <iostream>
#include <string>
using namespace std;
int main()
{string n1 [10];
 n1[0]="zero";
 n1[1]="one"; 
 n1[2]="two";
 n1[3]="three";
 n1[4]="four"; 
 n1[5]="five"; 
 n1[6]="six"; 
 n1[7]="seven"; 
 n1[8]="eight"; 
 n1[9]="nine"; 
 
 string n2 [10];
 n2[0]="ten";
 n2[1]="eleven"; 
 n2[2]="twelve";
 n2[3]="thirteen";
 n2[4]="fourteen"; 
 n2[5]="fifteen"; 
 n2[6]="sixteen"; 
 n2[7]="seventeen"; 
 n2[8]="eighteen"; 
 n2[9]="nineteen"; 
 

 string n3 [10]; 
 n3[0]=" ";
 n3[1]=" "; 
 n3[2]="twenty";
 n3[3]="thirty";
 n3[4]="fourty"; 
 n3[5]="fifty"; 
 n3[6]="sixty"; 
 n3[7]="seventy"; 
 n3[8]="eighty"; 
 n3[9]="ninety"; 
 
 unsigned long int numb, n;
 string ns;
 int r=0, i=0;
 cin>>ns;
 numb = stoi(ns);
 if(numb==0) cout<<numb<<": "<<n1[0];
 n=numb;
 while (n>0)
  {n=(n/10); r+=1;}
 switch(r)
  {case 1:
   cout<<numb<<": "<<n1[numb]; 
   break;
   case 2:
   if (numb<20)
   	cout<<numb<<": "<<n2[numb%10];
   else
   {cout<<numb<<": "<<n3[numb/10];
    cout<<" "<<n1[numb%10];} 
   break;
   case 3:
    cout<<numb<<": "<<n1[numb/100]<<" hundred";

    if ((numb%100)<10)//from 1 to 9
   	 cout<<" "<<n1[numb%100];
    else
    if (((numb%100)>9)and((numb%100)<20))//from 10 to 19
   	 cout<<" "<<n2[numb%10];
    else
    {cout<<" "<<n3[(numb/10)%10];//from 20 to 90
     if ((numb%10)!=0)
      cout<<" "<<n1[numb%10];}  
   break;
   case 4:
    cout<<numb<<": "<<n1[numb/1000]<<" thousand";

    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";
    if ((numb%100)!=0)
    {if ((numb%100)<10)
   	 cout<<" "<<n1[numb%100];
    else
    if (((numb%100)>10)and((numb%100)<20))
   	 cout<<" "<<n2[numb%100];
    else
    {cout<<" "<<n3[(numb/10)%10];
     if ((numb%10)!=0)
      cout<<" "<<n1[numb%10];}}   
   break;
   case 5:
    if ((numb/1000)<20)
   	 cout<<numb<<": "<<n2[(numb/1000)%10]<<" thousand";
    else
    {cout<<numb<<": "<<n3[numb/10000];
     if ((numb/1000)%10)
      cout<<" "<<n1[(numb/1000)%10]<<" thousand";
     else cout<<" thousand";}

    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";

    if ((numb%100)!=0)
     {if ((numb%100)<10)
   	  cout<<" "<<n1[numb%10];
     else
     if (((numb%100)>9)and((numb%100)<20))
   	  cout<<" "<<n2[numb%10];
     else
     {cout<<" "<<n3[(numb/10)%10];
      if ((numb%10)!=0)
       cout<<" "<<n1[numb%10];}}    
   break;
   case 6:
    cout<<numb<<": "<<n1[numb/100000]<<" hundred"; 

    if (((numb/1000)%100)!=0)
    {if (((numb/1000)%100)<10)
      cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
     else 
      if ((((numb/1000)%100)>9)and(((numb/1000)%100)<20))
      cout<<" "<<n2[((numb/1000)%10)]<<" thousand";
      else
       {cout<<" "<<n3[((numb/1000)%100)/10];
        if ((((numb/1000)%100)%10)!=0)
         cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
        else cout<<" thousand";}} 

    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";
   
    if((numb%100)!=0)
     {if ((numb%100)<10)
   	   cout<<" "<<n1[numb%10];
      else
      if (((numb%100)>9)and((numb%100)<20))
   	   cout<<" "<<n2[numb%10];
      else
      {cout<<" "<<n3[(numb/10)%10];
       if ((numb%10)!=0)
        cout<<" "<<n1[numb%10];}}     
   break;
   case 7:
    cout<<numb<<": "<<n1[numb/1000000]<<" million";

    cout<<" "<<n1[(numb/100000)%10]<<" hundred"; 

    if (((numb/1000)%100)!=0)
    {if (((numb/1000)%100)<10)
      cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
     else 
      if ((((numb/1000)%100)>9)and(((numb/1000)%100)<20))
      cout<<" "<<n2[((numb/1000)%10)]<<" thousand";
      else
       {cout<<" "<<n3[((numb/1000)%100)/10];
        if ((((numb/1000)%100)%10)!=0)
         cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
        else cout<<" thousand";}} 
    else cout<<" thousand";

    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";
   
    if((numb%100)!=0)
     {if ((numb%100)<10)
       cout<<" "<<n1[numb%10];
      else
      if (((numb%100)>9)and((numb%100)<20))
       cout<<" "<<n2[numb%10];
      else
      {cout<<" "<<n3[(numb/10)%10];
       if ((numb%10)!=0)
        cout<<" "<<n1[numb%10];}}  
   break;
   case 8:
    if (((numb/1000000)%100)<20)
     cout<<numb<<": "<<n2[(numb/1000000)%10]<<" million";
    else
     {cout<<numb<<": "<<n3[numb/10000000];
      if (((numb/1000000)%10)!=0)
       cout<<" "<<n1[(numb/1000000)%10]<<" million";
      else cout<<" million";}

    if (((numb/100000)%10)!=0)
    cout<<" "<<n1[(numb/100000)%10]<<" hundred"; 

    if (((numb/1000)%100)!=0)
    {if (((numb/1000)%100)<10)
      cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
     else 
      if ((((numb/1000)%100)>9)and(((numb/1000)%100)<20))
      cout<<" "<<n2[((numb/1000)%10)]<<" thousand";
      else
       {cout<<" "<<n3[((numb/1000)%100)/10];
        if ((((numb/1000)%100)%10)!=0)
         cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
        else cout<<" thousand";}} 
    else cout<<" thousand";
    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";
   
    if((numb%100)!=0)
     {if ((numb%100)<10)
       cout<<" "<<n1[numb%10];
      else
      if (((numb%100)>9)and((numb%100)<20))
       cout<<" "<<n2[numb%10];
      else
      {cout<<" "<<n3[(numb/10)%10];
       if ((numb%10)!=0)
        cout<<" "<<n1[numb%10];}} 
   break;
   case 9:
    if ((numb/100000000)<10)
      cout<<numb<<": "<<n1[numb/100000000]<<" hundred";

    if (((numb/1000000)%100)!=0)
     {if (((numb/1000000)%100)<10)
      cout<<numb<<" "<<n1[(numb/1000000)%10]<<" million";
     else  
     if ((((numb/1000000)%100)>9)and(((numb/1000000)%100)<20))
      cout<<" "<<n2[(numb/1000000)%10]<<" million";
     else
      {cout<<" "<<n3[(numb/10000000)%10];
       if (((numb/1000000)%10)!=0)
        cout<<" "<<n1[(numb/1000000)%10]<<" million";
       else cout<<" million";}}
    else cout<<" million";

    if (((numb/100000)%10)!=0)
    cout<<" "<<n1[(numb/100000)%10]<<" hundred"; 

    if (((numb/1000)%100)!=0)
    {if (((numb/1000)%100)<10)
      cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
     else 
      if ((((numb/1000)%100)>9)and(((numb/1000)%100)<20))
      cout<<" "<<n2[((numb/1000)%10)]<<" thousand";
      else
       {cout<<" "<<n3[((numb/1000)%100)/10];
        if ((((numb/1000)%100)%10)!=0)
         cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
        else cout<<" thousand";}} 
    else cout<<" thousand";
    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";
   
    if((numb%100)!=0)
     {if ((numb%100)<10)
       cout<<" "<<n1[numb%10];
      else
      if (((numb%100)>9)and((numb%100)<20))
       cout<<" "<<n2[numb%10];
      else
      {cout<<" "<<n3[(numb/10)%10];
       if ((numb%10)!=0)
        cout<<" "<<n1[numb%10];}} 
   break;
   case 10:
    cout<<numb<<": "<<n1[numb/1000000000]<<" billion";
    if ((numb%1000000000)!=0)
    {if (((numb/100000000)%10)!=0) 
      if (((numb/100000000)%10)<10)
       cout<<" "<<n1[(numb/100000000)%10]<<" hundred";

    if (((numb/1000000)%100)!=0)
     {if (((numb/1000000)%100)<10)
      cout<<" "<<n1[(numb/1000000)%10]<<" million";
     else  
     if ((((numb/1000000)%100)>9)and(((numb/1000000)%100)<20))
      cout<<" "<<n2[(numb/1000000)%10]<<" million";
     else
      {cout<<" "<<n3[(numb/10000000)%10];
       if (((numb/1000000)%10)!=0)
        cout<<" "<<n1[(numb/1000000)%10]<<" million";
       else cout<<" million";}}
    else cout<<" million";

    if (((numb/100000)%10)!=0)
    cout<<" "<<n1[(numb/100000)%10]<<" hundred"; 

    if (((numb/1000)%100)!=0)
    {if (((numb/1000)%100)<10)
      cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
     else 
      if ((((numb/1000)%100)>9)and(((numb/1000)%100)<20))
      cout<<" "<<n2[((numb/1000)%10)]<<" thousand";
      else
       {cout<<" "<<n3[((numb/1000)%100)/10];
        if ((((numb/1000)%100)%10)!=0)
         cout<<" "<<n1[((numb/1000)%10)]<<" thousand";
        else cout<<" thousand";}} 
    else cout<<" thousand";
    if (((numb/100)%10)!=0)
     cout<<" "<<n1[(numb/100)%10]<<" hundred";
   
    if((numb%100)!=0)
     {if ((numb%100)<10)
       cout<<" "<<n1[numb%10];
      else
      if (((numb%100)>9)and((numb%100)<20))
       cout<<" "<<n2[numb%10];
      else
      {cout<<" "<<n3[(numb/10)%10];
       if ((numb%10)!=0)
        cout<<" "<<n1[numb%10];}}}
   break;
  }
}
