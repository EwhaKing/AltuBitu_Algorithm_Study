


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int check(string a){
    char cur = '.';
    vector<bool> alphabet(26, false);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == cur)
            continue;

        if (alphabet[a[i] - 'a'])
            return false;
        cur = a[i];
        alphabet[a[i] - 'a'] = true;
    }
    return 1;


}
int main(){
    int n,cnt;
    vector<string> word;
    cin >> n;
    cnt =0;
    word.assign(n," ");
    for(int i=0;i<n;i++){
        cin >> word[i];
        if(1==check(word[i]))
            cnt++;

    }
    cout << cnt;
}