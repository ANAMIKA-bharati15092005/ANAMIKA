#include<iostream>
using namespace std;
int main(){
int first,second,choice;
while(1){
cout<<" 1.addition:"<<endl;
cout<<" 2.Subtraction:"<<endl;
cout<<" 3.Multiplication:"<<endl;
cout<<" 4.Division:"<<endl;
cout<<"enter your choice :"<<endl;
cin>>choice;
switch (choice)
{
case 1:
cout<<"enter two number :";
cin>>first>>second;
cout<<" sum is:"<<"="<<first+second<<endl;
break;
case 2:
cout<<"enter two number :";
cin>>first>>second;
cout<<"sub is:"<<"="<<first-second<<endl;
break;
case 3:
cout<<"enter two number :";
cin>>first>>second;
cout<<" mul is:"<<"="<<first*second<<endl;
break;
case 4:
cout<<"enter two number :";
cin>>first>>second;
cout<<"division is:"<<"="<<first/second<<endl;
break;
default :
cout<<"Invalid choice enter again:"<<endl;
}
}
cout<<endl;
return 0;
}