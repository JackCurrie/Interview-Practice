
#include <iostream>
#include <vector>

using namespace std;



void reverse(char * str);
void reverseStr(char * str);
void printStr(char *str);


void printIntMatrix(int mat[5][5], int cols, int rows);

void propagateZeros(int matrix[5][5], int rows, int columns);


int main(){

   int matrix[5][5] = {{0, 3, 4, 2, 9}, {1, 3, 1, 2, 3}, {2, 9, 2, 7, 1}, {1, 2, 4, 0, 3}, {2, 3, 4, 7, 9}};  

   cout << " Original Matrix : " << endl 
        << "_______________" << endl;    
   printIntMatrix(matrix, 5, 5);
  
   cout << endl
        << "All Rows and columns in the matrix where a 0 " << endl
        << "exists have been made into all zeros. " << endl
        << "______________" << endl; 

   propagateZeros(matrix, 5, 5); 
   printIntMatrix(matrix, 5, 5);

   return 0;
}


void propagateZeros(int matrix[5][5], int rows, int columns){

   vector<int> zeroRowIndex;   
   vector<int> zeroColIndex;   
   int i;
   int j;
   int tmp;

   for(i = 0; i < rows; i++){
      for( j = 0; j < columns; j++){
       
         if(matrix[i][j] == 0){
            zeroRowIndex.push_back(j);     
            zeroColIndex.push_back(i); 
         }
      }
   }

   while( !zeroColIndex.empty() ){
      tmp = zeroColIndex.back();
      zeroColIndex.pop_back();
      for( i = 0; i < rows; i++){
         matrix[i][tmp] = 0;
      }     
   }
   
   while( !zeroRowIndex.empty() ){
      tmp = zeroRowIndex.back();
      zeroRowIndex.pop_back();
      for( j = 0; j < columns; j++){
         matrix[tmp][j] = 0;
      }     
   }



}


void printIntMatrix(int mat[5][5], int cols, int rows){

   int i;
   int j;

   for(i = 0; i < cols; i++){
      cout << "| ";    
  	
      for(j = 0; j < cols; j++){
         cout << mat[i][j] << " ";
      }
      cout << " |" << endl;
   }
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

void reverse(char * str){

   char * end = str;
   char tmp;

   if(str){
      while(*end){
         end++;
      }
      end--;

      while(str < end){
         tmp = *str;
         *str = *end;
         *end = tmp;

         str++;
         end--;
      }
   }
}


void printStr(char *str){

   int i;

   cout << "in Print Function:  ";

   for(i = 0; i < strlen(str); i++){
      cout << str[i];
   }
   cout << endl;
}


