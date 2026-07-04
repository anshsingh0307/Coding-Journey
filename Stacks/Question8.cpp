// Daily temperatures (Leetcode--->>>> 739)
//Brute force

#include<bits/stdc++.h>
using namespace std ;

int main (){
    vector<int> input={73,74,75,71,69,72,76,73};
    vector<int> output={};
    
    for(int i=0 ; i<input.size() ; i++){
        int ans = 0 ;
        for(int j=i+1 ; j<input.size() ; j++){
                if(input[i]<input[j]){
                ans=j-i ;
                break ;
        }
    }
    output.push_back(ans);
}
    for(int i=0 ; i<output.size();i++){
        cout << output[i] << " ";
    }
}