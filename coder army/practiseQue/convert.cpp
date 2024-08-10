#include<bits/stdc++.h>
using namespace std;
char convert(char name){
    char ans = name - 'a' + 'A';
    return ans;
}
int main(){
    char letter;
    cin>>letter;
    cout<<convert(letter)<<endl;
   
    return 0;
}