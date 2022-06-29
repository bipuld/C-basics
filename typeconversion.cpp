#include<iostream>
using namespace std;
// template <class T> //multipe catch stat dments
// int main(){
//   int res,a,b;
//   cout<<"Enter the number for  operation"<<endl;
//   cin>>a>>b;
//   try{
//     if(b==1){
//       throw b;
//     }
//     else if(b==2)
//       throw char(b);
//     else if(b==3)
//       throw float(b);
//     else
//       res=a/b;
//       cout<<"Division : "<<res<<endl;
//   }
//   catch(int  d) {
//     cout<<"Exception occur due to this integrs  value:"<<d<<endl;

//   }
//    catch(char d) {
//     cout<<"Exception occur due to this char value:"<<endl;

//   }
//    catch(float d) {
//     cout<<"Exception occur due to this float value:"<<endl;

//   }
//   cout<<"Bye";
// }
//function exceptional handling
void sum(int a,int b){
  int num;
  if(b==0){
    throw b;
  }
  else{
  num=a/b;

  cout<<"Division value are :"<<num<<endl;   
  }
}
int main(){
int x,y;
cout<<"Enter the value for operation"<<endl;
cin>>x>>y;
try{
  div(x,y);
}
catch(int e){
  cout<<"Exception due to  this value in program "<<e;
}
  cout<<"ok! bye see you later in main"<<endl;
  return 0;
}




















}