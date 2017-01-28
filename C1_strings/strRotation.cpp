
/**
*
* Given a function to check if one string is a substring of another,
* write a function to see if one string (s2) is a rotation of  
* another string (s1).
*
*/



#include <iostream>
#include <string>
#include <vector>

using namespace std;




bool isSubString(string s1, string s2);
bool isRotation(string s1, string s2);


int main(){

   // Initialize variables for testing the "isSubString" function
   string str1 = "four score and seven years ago";
   string str2 = "sdfjhsdfkjsjdfjksdnfjknsdjkfnjksdnf"; // Too long
   string str3 = "squad"; // Just not a substring 
   string str4 = "score"; // A substring
   string str5 = "ago";  // Substring at end to check for off-by-ones

   // Initialize variables for testing "isRotation" function
   string str1A = "rotation";
   string str2A = "askjdalskjdlak";
   string str3A = "ationrot";
   string str4A = "tation";




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
      cout << "Test 4 FAILED: valid substring not recognized, possibly because of a +1 error"<< endl; 
   }  




   cout << endl << endl
        << "Testing the isRotation function " << endl
        << "================================" << endl; 

   if( isRotation(str1A, str2A)){
      cout << "Test 1 Failed: str2A is longer than str1 and not a rotation" << endl; 
   } else{
      cout << "Test 1 passed " << endl;
   }
   if( isRotation(str1A, str3A)){
      cout << "Test 2 passed " << endl;
   } else{
      cout << "Test 2 Failed: actual rotation not recognized" << endl; 
   }
   if( isRotation(str1A, str4A)){
      cout << "Test 3 failed: substring mistaken for a rotation " << endl;
   } else{
      cout << "Test 3 Passed " << endl;
   }







   return 0;
}



bool isSubString(string s1, string s2){
   if(s1.find(s2) != string::npos){
      return true;
   }
   return false;
}


// Checks is string (s2) is a rotation of string (s1)
//
bool isRotation(string s1, string s2)
{

    if(s2.length() > 0 && s1.length() == s2.length()){
       s2 = s2+s2;
       if( isSubString(s2, s1) ){
          return true;
       }    
    }
   return false;
}



























