//
// Created by banya on 2022-01-20.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main (){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num,num2;
    string word,word2;
    cin >> num >> num2;

    map<int,string> result;
    map<string,int> result2;
    for(int i=0;i<num;i++){
        cin >> word;
        result[i+1]=word;
        result2[word]=i+1;
    }



    for(int i=0;i<num2;i++){
        cin >> word2;
        if (isdigit((word2[0])))
            cout << result[stoi(word2)]<<endl;
        else
            cout << result2[word2]<<endl;

    }

}