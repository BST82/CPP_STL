#include<iostream>  
#include <sstream>
#include<string>
#include <algorithm> 
using namespace std; 

  string reverseWords(string &s) {
        stringstream ss(s);
        string t, ans;
        
         while (getline(ss, t, ' ')) {
            reverse(t.begin(), t.end());
            ans += t + ' ';
        }
        // We will take substring of one less size as there will be space after last word which is not required.
        return ans.substr(0, ans.size() - 1); 
    }
int main(){
string s;
getline(cin,s);

cout<<reverseWords(s)<<"\n";


}
//learn all about stringstream
//https://www.softwaretestinghelp.com/stringstream-class-in-cpp/