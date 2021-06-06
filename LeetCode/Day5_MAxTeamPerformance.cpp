// class Solution {
// public:
//     int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
//        vector<pair<int,int>>perf;
//         for(int i=0;i<n;i++)
//         {
//            perf.push_back({efficiency[i],speed[i]});
//         }
            //sorting based on efficiency
//         sort(perf.rbegin(),perf.rend());
//         long int totalspeed=0,ans=0;
//         priority_queue<int,vector<int>,greater<int>>pq; //min heap
//         for(auto i:perf)
//         {
//             totalspeed+=i.second;
                //if size become equal or greater than k exclude the speed of min in heap ans add the new speed
//             if(pq.size()>=k)
//             {
//                 totalspeed = totalspeed - pq.top();
//                 pq.pop();
//                 pq.push(i.second);
//             }
//             else
//             {
//                 pq.push(i.second);
//             }
//             ans = max(ans,(i.first*totalspeed));
//         }
        
//         return ans<1000000007?ans:ans%1000000007;
//     }
// };