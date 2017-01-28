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
      cout << "Test 1 FAILED, str2 is longer than str1 " << endl;
   } else {
      cout << "Test 1 passed " << endl; 
   }  
   if( isSubString(str1, str3)){
      cout << "Test 2 FAILED, invalid substring incorrectly recognized" << endl; 
   } else {
      cout << "Test 2 passed" << endl;
   }  
   if( isSubString(str1, str4)){
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

   // Initialize Function/variables
   int i;

   // Check That S2 is not longer than S1, otherwise return false 
   if( s2.length() > s1.length() ){
   
      // Iterate through s1 until the first character of s2 is found
      //    When found, check that the s2 can possibly be a substring
      //    of s1 by checking if s2 can fit in the rest of the length
      //    of s1. 
      //       If so, Check if the Substring of s1 from that index to
      //       the end of s2's length is equal to s2. Return true if so.
      for( i = 0; i < s1.length(); i++){
         if( s1.at(i) == s2.at(0) ){
            if( (i + s2.length()) <=  s1.length()){
               if( s1.substr(i, i + s2.length()) == s2){
                  return true; 
               }
            } 
         } 
      }
   }

   return false;
}





























