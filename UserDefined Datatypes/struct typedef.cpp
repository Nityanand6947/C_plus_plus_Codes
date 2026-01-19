// #include <bits/stdc++.h>// it works with these syntax also..

#include <iostream>

using namespace std;// This is used to not getting the conflict of names while programming



//user defined data

struct GFG{

    int G1;

    char G2;

    float G3;

};



//assigning the name to existing data type using typedef

typedef struct GFG tamsoy;



int main()

{

//   struct GFG nitya;

    tamsoy nitya;

   nitya.G1;

   nitya.G2;

   nitya.G3;



  cout<<"Give the value of G1 which is int "<<endl;

  cin>>nitya.G1;



  cout<<"Give the value of G2 which is char "<<endl;

  cin>>nitya.G2;



  cout<<"Give the value of G3 which is float ";

  cin>>nitya.G3;



   cout<<"The values of G1,G2,G3 are : "<<nitya.G1<<", "<<nitya.G2<<", "<<nitya.G3;



}
