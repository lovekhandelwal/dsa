#include<iostream>
#include<vector>
using namespace std;


// ***************************  Some Basic Concept of Pointer ***************************//
int main(){
    int num = 5;
    cout<<"the address of the pointers is "<<&num<<endl;
    // address will upade by adding 1 to it
    cout<<"the address of the pointers is "<<&num + 1<<endl;
    
    num = num+1;
     // adding 1 to num and it will automatically updated on *ptr 
   int *ptr = &num ;
   cout<<  *ptr <<endl; 
   (*ptr)++;
   cout<<*ptr<<endl;

  //  // copying the pointer
   int *q = ptr;
   cout<<ptr<<" - "<<q<<endl;
   cout<<*ptr<<" - "<<*q<<endl;


   //  some different concept
   cout<<"NEXT"<<endl;
   int n = 5;
  //  cout<<&n<<endl;
   int *pp = &n;
   cout<<pp<<endl;
   cout<<*pp<<endl;
   cout<<&n<<endl;
  //  now it will tell the address of the pointer itself
   cout<<&pp<<endl; 


  //  // Now if we add integer direct in pointer
   pp = pp+1;         // as 1 int = 4 bits
   cout<<pp<<endl;
   cout<<*pp<<endl;
  int *ptr = pp  ;
  cout<< *ptr <<endl; 
  cout<<pp<<endl;
  cout<<ptr<<endl;
  ptr++;
  cout<<ptr<<endl;
  (*pp)++;         // adding the value to the same integer
  cout<<*pp<<endl;


  // get address of array through 
   int arr[10] = {2,4,5};
   cout<<"address of the zero position in array "<<arr<<endl;
   cout<<"address of the zero index in array "<<(*arr)<<endl;
      cout<<"value after adding in the address of array "<<(*arr +4)<<endl;
   // same address will be appear on both cout as in (arr)
   cout<<"address of the first index in array "<<&arr[0]<<endl;
   cout<<"position 1- "<<(*arr) + 1<<endl;
   cout<< "position 2- "<<*(arr +1)<<endl;
   cout<< "position 3- "<<0[arr]<<endl;
   int *ptr = &arr[0];
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   cout<<&ptr<<endl;
   ptr = ptr+1;   // ptr storing address of 0th location now it inc. by 4 bit
   cout<<ptr<<endl;



// -------------  POINTERS IN CHARACTER -----------------

char ch[3] = "ly";
print entire string
cout<<ch<<endl;
char temp = 'b';
char *c = &temp;
it will end when it will find null character
cout<<c<<endl;

error  bad practice
char *c = "abcde";
cout<<c<<endl;
   

// ----------------- functions in pointers --------------

void pfun(int *val){
  // will print value incremented by 1
  // *val = (*val)+1;
  cout<< val<<endl;
  val = val +1;
  cout<<val<<endl;
}

int main(){

  int fun = 5;
  int *poi = &fun;
  cout<<poi<<endl;
  pfun(poi);
  // it will print the same value of poi as previous one.
  cout<<poi<<endl;
}







/*-------------------------- double pointer ----------------------------*/

// PRACTICE

int arr[3]= {1,2,3};
int *p = &arr[0];
cout<<p<<endl;
int **f = &p;
cout<<**f<<endl;


// PRACTICE FOR CALING DOUBLE POINTER

void doit(int **p){

  p= p+1;  // no change 
  *p = *p +1;   // only p will change
  **p = **p + 1;   // only n value will change
}

int main(){
  int n =5;
  int *p = &n;
  int **p2 = &p;

  cout<<"before the calling of the function "<<endl;
  cout<<n<<endl;
  cout<<p<<endl;
  cout<<p2<<endl;
  doit(p2);
  cout<<"after the calling of function "<<endl;
  cout<<n<<endl;
  cout<<p<<endl;
  cout<<p2<<endl;


}


  
}    
