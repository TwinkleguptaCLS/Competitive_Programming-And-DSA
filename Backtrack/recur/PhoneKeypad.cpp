// #include <bits/stdc++.h>
// using namespace std;

// vector<string> keypad ={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
// // "23", 0
// void generatePossibleCombinationsHelper(string digits, vector<string>& result, int index,vector<string> keypad, string resSoFar) {
//     if (index == digits.size()) {
//         result.push_back(resSoFar);
//         return;
//     } 

//     string possibleMoves = keypad[digits[index] - '0']; // 2 -> "abc" '2'-> int 2
//     for (int i = 0; i < possibleMoves.size(); i++) {
//         //resSoFar.push_back(possibleMoves[i]);
//         // resSoFar += possibleMoves[i];
//         generatePossibleCombinationsHelper(digits, result, index + 1, keypad,resSoFar+possibleMoves[i]);
//         // backtracking
//         //resSoFar.pop_back();
//         // resSoFar = resSoFar.substring(0,)
//     }

// }
// vector<string> generatePossibleCombinations(string digits) { 
//     if (digits.empty()) {
//         return vector<string>{};
//     }
//     vector<string> result;
//     generatePossibleCombinationsHelper(digits, result, 0,keypad, "");
//     return result;
// }

// int main() {
//     string digits="23";
//     vector<string> res = generatePossibleCombinations(digits);
//     for(auto i:res)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
vector<string>codes = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


vector<string>getKeypad(string s)
{
    if(s.length()==0)
    {
        return {""}; //empty vector of string
    }
    char ch = s[0]; //2
    string ros = s.substr(1); //3

    vector<string>rres = getKeypad(ros);
    vector<string>mres;

    string codeforch = codes[ch-'0']; // '6'-'0' = 6
    for(int i=0;i<codeforch.length();i++)
    {
        for(auto rstr:rres)
        {
            mres.push_back(codeforch[i]+rstr);
        }
    }
    return mres;

}
int main()
{
    string s;
    cin>>s;
    vector<string>ans = getKeypad(s);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }

  return 0;
}