#include <iostream>
#include <string>
#include <vector>

using namespace std;




bool isSubString(string s1, string s2);



int main(){

   string str1 = "four score and seven years ago";
   string str2 = "sdfjhsdfkjsjdfjksdnfjknsdjkfnjksdnf"; // Too long
   string str3 = "squad"; // Just not a substring 
   string str4 = "score"; // A substring
   string str5 = "ago";  // Substring at end to check for off-by-ones

   cout << "Testing the isSubString function " << endl
        << "================================" << endl; 
   if( isSubString(str1, str2)){
      cout << "Test 1 FAILED: str2 is longer than str1, not a substring " << endl;
   } else {
      cout << "Test 1 passed " << endl; 
   }  
   if( isSubString(str1, str3)){
      cout << "Test 2 FAILED: invalid substring incorrectly recognized" << endl; 
   } else {
      cout << "Test 2 passed" << endl;
   }  
   if( str1.find(str4) != string::npos ){
      cout << "Test 3 passed " << endl;
   } else {
      cout << "Test 3 FAILED: valid substring not recognized" << endl;
   }  
   if( isSubString(str1, str5)){
      cout << "Test 4 passed " << endl;
   } else {
      cout << "Test 4 FAILED: valid substring not recognized, possibly because of a +1 error" << endl;
   }  







   return 0;
}



bool isSubString(string s1, string s2){
   if(s1.find(s2) != string::npos){
      return true;
   }
   return false;
}





























