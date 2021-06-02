#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    vector<string>paths;
    vector<string>hpaths,vpaths;
    if(sr==dr && sc==dc)
    {
        return {""};
    }
    if(sc<dc)
    {
        hpaths = getMazePaths(sr,sc+1,dr,dc);
    }
    if(sr<dr)
    {
        vpaths = getMazePaths(sr+1,sc,dr,dc);
    }
    for(auto path:hpaths)
    {
        paths.push_back("h"+path);
    }
    for(auto path:vpaths)
    {
        paths.push_back("v"+path);
    }
    return paths;
}

void display(vector<string>& arr){
    cerr << "[";
    for(int i = 0;i < arr.size();i++){
        cerr << arr[i];
        if(i < arr.size() -1) cerr << ", ";
    }
    
    cerr << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}