#include<iostream>
#include<queue>
// #include<string>
using namespace std;

string nonRepeating(string s){
int freq[26] = {0};
    queue<char> q;

    string ans = "";

    for(int i=0;i<s.length();i++){
        char ch = s[i];

        // increment frequency
        freq[ch  -'a']++;

        // push
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }

    
}


int main(){
    string s = "zarcaazrd";
    int freq[26] = {0};
    queue<char> q;

    string ans = "";

    for(int i=0;i<s.length();i++){
        char ch = s[i];

        // increment frequency
        freq[ch  -'a']++;

        // push
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }

    cout<<ans;

return 0;
}