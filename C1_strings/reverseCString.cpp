//  "Reverse a C-style String"
//
//
//

#include <iostream>
#include <vector>

using namespace std;


void reverseStr(char * str);
void printStr(char *str);


int main(){

   char *oddLenStr = "abcdefg";
   char *evenLenStr = "abcdef";
   char *emptyString = NULL;
  
   cout << "oddLength String: ";
   printStr(oddLenStr);
   cout << endl;
   reverseStr(oddLenStr);
   cout << "Test Passed if the string is reversed: ";
   printStr(oddLenStr);
   cout << endl << endl;

   cout << "evenLength String: ";
   printStr(evenLenStr);
   cout << endl;
   reverseStr(evenLenStr);
   cout << " Test Passed if the string is reversed: ";
   printStr(evenLenStr);
   cout << endl << endl;


   reverseStr(emptyString);
   cout << "Test Passed for empty String if program is here without a seg fault " << endl << endl;


   return 0;
}


void reverseStr(char * str){

   char * front = str;
   char * back = str;
   char tmp;


   if( str != NULL){
      while( *back ){
         back++; 
      }
      back--;

      while( front < back ){
         tmp = *front;
         *front = *back;
         *back = tmp;      

         front++;
         back--;
      }
   }
}


void printStr(char *str){

   int i;

   for(i = 0; i < strlen(str); i++){
      cout << str[i];
   }
   cout << endl;
}









