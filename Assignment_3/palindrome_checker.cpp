#include <iostream>
using namespace std;
 
bool isPalindrome(string s, int i){
        
    if(i > s.size()/2){
       return true ;
    }
    
    return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;
    
}
     
     
int main()
{
    string str1 = "palindrome" ;
    if (isPalindrome(str1, 0))
    cout << "The word " << str1 << " is a palindrome" << endl;
    else
    cout << "The word " << str1 << " is not a palindrome" << endl;

    string str2 = "racecar" ;
    if (isPalindrome(str2, 0))
    cout << "The word " << str2 << " is a palindrome" << endl;
    else
    cout << "The word " << str2 << " is not a palindrome" << endl;
 
    return 0;
 
}