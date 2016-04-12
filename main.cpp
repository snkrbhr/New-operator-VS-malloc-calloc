#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{

    cout<<"Using MALLOC Function : \n";
 /******************* MALLOC Function *************************/
    //creating an array dynamically of size 5 using malloc;
    int *mPtr = (int*) malloc(sizeof(int) * 5);  // malloc needed Explicit type casting;
    for(int i=0;i<5;i++)
       {
         *(mPtr+i)=i+1;     //input
         cout<<*(mPtr+i)<<" ";   //Output
       }

   cout<<endl<<endl;
   cout<<"Using NEW Operator : \n";
 /******************* NEW Operator *************************/


 int *nPtr= new int [5];           // new operator don't read any type casting; it have implicit type casting;
 for(int i=0;i<5;i++)
      {
        *(nPtr+i)=i+1;     //input
        cout<<*(nPtr+i)<<" ";   //Output
      }

 return 0;
}
