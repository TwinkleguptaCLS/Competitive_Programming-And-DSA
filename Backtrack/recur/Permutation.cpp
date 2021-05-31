#include <bits/stdc++.h>
using namespace std;

// void generatePermutationHelper(string str, int start, int end, vector<string>& result) {
//     if (start >= end) {
//         result.push_back(str);
//     } else {
//         for (int i = start; i <= end; i++) {
//             swap(str[i], str[start]);
//             generatePermutationHelper(str, start+1, end, result);
//             swap(str[i], str[start]);
//         }
//     }
// }

// vector<string> generatePermutation(string str) {
//     vector<string> result;
//     generatePermutationHelper(str, 0, str.size() - 1, result); 
//     return result;
// }

// int main() {
//     vector<string> result = generatePermutation("ABC");
//     for (string str : result) {
//         cout << str << " ";
//     }
// }
void PrintPerm(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        string ros = left+right;
        PrintPerm(ros,ans+ch);
    }
}
int main()
{
    string s;
    cin>>s;
    PrintPerm(s,"");
}