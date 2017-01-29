//
// Write code to remove duplicates from an unsorted Linked List
//    Assumptions: The linked list is the same as the doubly linked list
//                 implementation from the STL
//                 All sother STL data structures are OK to use
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <list>
#include <map>

using namespace std;




// 1.  Fills List with give number of random integers 
// 2.  Outputs this list
void fillIntList(list<int> &emptyList, int length);
void printIntList(list<int> &myList, int length);



void duplicateRemove(list<int> &myList);
void testDuplicateRemove(int testLen);



int main(){
 
   int i;
   
   for(i = 5; i < 50; i +=5){
      cout << "TEST " << i/5 << endl;
      testDuplicateRemove(i);  
      cout << endl; 
   }


   return 0;
}




// Function Implementations
void fillIntList(list<int> &emptyList, int length){

   int i;
   int ranNum; 

   srand(time(NULL));

   for(i = 0; i < length; i++){
      ranNum = rand() % 10 ;
      emptyList.push_back(ranNum);
   }
}

void printIntList(list<int> &myList, int length){

   int i;
   list<int>::iterator listIterator;
 
   cout << "[ ";   
   for(listIterator = myList.begin(); listIterator != myList.end(); ++listIterator){
      cout << *listIterator << " "; 
   }
   cout << "]" << endl;
}



void duplicateRemove(list<int> &myList){
  
   map<int, bool> bufferMap; 
   list<int>::iterator listIterator;

   for(listIterator = myList.begin(); listIterator != myList.end(); ++listIterator){
    
      if( bufferMap.count(*listIterator) == 0){
         bufferMap.insert(pair<int, bool>(*listIterator, true)); 
      } else {
         myList.erase(listIterator); 
      }
   }
}


void testDuplicateRemove(int testLen){

   list<int> testList;

   fillIntList(testList, testLen);
   cout << "List with Length: " << testLen << "   ";
   printIntList(testList, testLen);

   cout << "Same List with duplicates removed: ";
   duplicateRemove(testList); 
   printIntList(testList, testLen);
}








