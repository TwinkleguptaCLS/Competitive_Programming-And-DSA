// Given a rectangular cake with height h and width w, and two arrays of integers horizontalCuts and verticalCuts where horizontalCuts[i] is the distance from the top of the rectangular cake to the ith horizontal cut and similarly, verticalCuts[j] is the distance from the left of the rectangular cake to the jth vertical cut.

// Return the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays horizontalCuts and verticalCuts. Since the answer can be a huge number, return this modulo 10^9 + 7.

// ?Approach 
// * Since we have to find MAx Area of Rectangular cake  i.e
// * We need max-height and max-breadth in order to find maxArea 

//* TIme Complexity - O(nlogN+nlogM+n)

//     int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
//         int maxheight = 0;
//         int maxbreadth = 0;
//         horizontalCuts.push_back(h);
//         verticalCuts.push_back(w);
//      The horizontal and vertical cuts are sorted to get the ascending order of cuts to find consecutive difference
//         sort(horizontalCuts.begin(),horizontalCuts.end());
//         sort(verticalCuts.begin(),verticalCuts.end());
//         int pi=0;
//         for(int i:horizontalCuts)
//         {
//             maxheight = max(maxheight,i-pi);
//             pi = i;
//         }
//         pi=0;
//         for(int i:verticalCuts)
//         {
//             maxbreadth = max(maxbreadth,i-pi);
//             pi = i;
//         }
//         long res = (long)maxheight*maxbreadth;
//          return res<1000000007?res:res%1000000007;
//     }

