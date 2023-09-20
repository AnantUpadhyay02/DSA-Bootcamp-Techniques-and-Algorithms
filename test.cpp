#include <iostream>  
#include <vector>  
#include<cstdlib>
using namespace std;  
int main()   
{  
  int ans=0;
  long long i=1, input1;
  vector<int> input2;
  cin>>input1;
  for(int i =0;i<input1;i++){
    int num;
    cin>>num;
    input2.push_back(num);
  }
  while((i+3)<=input1){
    if(input1>(i+3)){
      ans+=abs((input2[i]-input2[i+1]));
      // ans= abs(ans);
      i++;
    }
    if(input1 == i+3){
      ans+= abs((input2[i]-input2[i+3]));
      // ans = abs(ans);
      
    }
  }

  // for(int i =1;i<input1;i++){
  //   if(input2[a]> input2[i]){
  //     ans+= abs(input2[i]-input2[a]);
  //     a= i;
  //   }
  // }
  // ans+= abs(input2[input1]- input2[a]);

  cout<<ans;
  return -1;  
}  

