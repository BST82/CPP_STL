/*
C++ String replace()

syntax:-
str1.replace(pos,len,str2);  

*/
#include<iostream>  
using namespace std;  
int  main()  
{  
string str1 = "This is C language";  
string str2 = "C++";  
cout << "Before replacement, string is :"<<str1<<'\n';  
str1.replace(8,1,str2);   
//8 is starting index 
//change only 1 value
//with str2
cout << "After replacement, string is :"<<str1<<'\n';  

cout<<"\n";
/*-------------------------------*/

string str4 ="This is C language"  ;
 string str5= "java language";  
cout <<"Before replacement, String is "<<str4<<'\n';  
str4.replace(8,1,str5,0,4);  
//8 is starting index 
//change only 1 value
//with str5 
//0== str5 starting index
//4 == str5 till 4(j,a,v,a)(0,1,2,3) 
cout<<"After  replacement,String is "<<str4<<'\n';  




/*-------------------.*/
cout<<"\n";
string str6="This is C language";  
cout<<"Before replacement,string is"<<str6<<'\n';  
str6.replace(8,1,"C##ACD",4);   
cout<<"After replacement,string is"<<str6;  



return 0;  
}   