/*
wE HAVE TO FIND MINIMUM NO OF MOVES TO REACH TO TARGET STRING
FOR EVERY STRING WE HAVE TWO OPTION EITHER CONVERT IT +1 OR -1
FOR EG : 0 -> 1 OR 0->9 
WE CAN APPLY BFS AS IT GIVES SHORTEST PATH TO REACH TO DESTIINATION NODE 
? CREATE A UNORDERED SET OF STRING AND PUSH ALL DEADENDS TO IT
? WE ALSO NEED ONE VISITED SET TO KEEP TRACKS OF ALL EXPLORED STRINGS
* EX - FROM "0000"->"0202"
1. TAKE OUT FIRST CHARACTER OF "0000" AND REPLACE IT TO ONE "1000" AND PUSH IT INTO THE QUEUE IF IT IS NOT VISITED .NOW, REPLACE FIRST CHARACTER TO 9 "0000"->"9000"AND PUSH IT IN QUEUE IF NOT VISITED
2. DO THE SAME WITH REST THREE CHARACTERS OF THE STRING
3. TRY EVERY POSSIBILITY OF STRNG FROM THE QUEUE UNTIL TARGET NOT ACHIVED
4. IF UNABLE TO REACH TO THE TARGET RETURN -1;
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>deads(deadends.begin(),deadends.end());
        unordered_set<string>visited;
        if(deads.find("0000")!=deads.end()) //if string"0000" is deadend return -1
        {
            return -1;
        }
        queue<string>q;
        q.push("0000");
        visited.insert("0000");
        int count=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                string cur = q.front();
                q.pop();
                if(cur==target)
                {
                    return count;
                }
                for(int i=0;i<4;i++)
                {
                    char temp = cur[i];
                    cur[i] = temp=='9'?'0':temp+1;
                    if(deads.find(cur)==deads.end() && visited.find(cur)==visited.end())
                    {
                        visited.insert(cur);
                        q.push(cur);
                    }
                    cur[i] = temp=='0'?'9':temp-1;
                    if(deads.find(cur)==deads.end() && visited.find(cur)==visited.end())
                    {
                        visited.insert(cur);
                        q.push(cur);
                    }
                    cur[i]=temp;
                }
            }
            count++;
        }
        return -1;
        
    }
};