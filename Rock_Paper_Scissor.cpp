#include <iostream>
#include <string>
using namespace std;
int main(){
  cout<<"** Introducing Rock, Paper and Scissor Game **\n";
  cout<<endl;
  cout<<"* You have to choose b/w rock, paper and scissor *\n";
  cout<<endl;
  cout<<"* Each player will get 3 chances *\n";
  cout<<endl;
  cout<<" So let's begin..... \n";
  cout<<endl;
  cout<<"* note: input must be lowercase only *\n";
  cout<<endl;
  string c1="";
  string c2="";
  int n=0;
  for(int i=1;i<=3;i++){
    cout<<"..chance("<<i<<").. "<<"player 1: ";
    cin>>c1;
    cout<<endl;
    cout<<"..chance("<<i<<").. "<<"player 2; ";
    cin>>c2;
    cout<<endl;
    if(c1=="rock" && c2=="scissor"){
      cout<<"player 1 won!"<<endl;
      n=n+1;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="rock" && c2=="paper"){
      cout<<"player 2 won!"<<endl;
      n=n-1;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="rock" && c2=="rock"){
      cout<<"It's a draw!"<<endl;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="paper" && c2=="scissor"){
      cout<<"player 2 won!"<<endl;
      n=n+1;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="paper" && c2=="rock"){
      cout<<"player 1 won!"<<endl;
      n=n-1;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="paper" && c2=="paper"){
      cout<<"It's a draw!"<<endl;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="scissor" && c2=="paper"){
      cout<<"player 1 won!"<<endl;
      n=n+1;
      cout<<endl;
      cout<<endl;
    }
    else if(c1=="scissor" && c2=="rock"){
      cout<<"player 2 won!"<<endl;
      n=n-1;
      cout<<endl;
      cout<<endl;
    }
    else{
      cout<<"It's a draw!"<<endl;
      cout<<endl;
      cout<<endl;
    }
  }
  cout<<"Overall...\n";
  cout<<endl;
  if(n>0){
    cout<<".... player 1 won! ....";
  }
  else if(n<0){
    cout<<".... paper 2 won! ....";
  }
  else{
    cout<<".... It's a draw ....";
  }
}

