#include <bits/stdc++.h>
using namespace std;

void generateBinaryBitsHelper(vector<string>& result, vector<int>& bitsSoFar, int index, int N) {
    if (index == N) {
        string str = "";
        for (int i  = 0; i < N; i++) {
            str += to_string(bitsSoFar[i]);
        }
        result.push_back(str);
        return;
    } 
    bitsSoFar[index] = 0;
    generateBinaryBitsHelper(result, bitsSoFar, index+1, N);

    bitsSoFar[index] = 1;
    generateBinaryBitsHelper(result, bitsSoFar, index+1, N);
}

vector<string> generateBinaryBits(int N) {
    vector<int> bitsSoFar(N, 0);
    vector<string> result;
    generateBinaryBitsHelper(result, bitsSoFar, 0, N);
    return result;
}

int main() {
    vector<string> result = generateBinaryBits(5);
    for (string str: result) {
        cout << str << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int possibleMoves = 4;
int xMoves[] = {1, -1, 0, 0};
int yMoves[] = {0, 0, 1, -1};

// maze[][] is false is obstacke and true otherwise
bool isSafe(vector<vector<bool>> &maze, vector<vector<bool>> &visited, int r, int c, int R, int C)
{
    return (r >= 0 && r < R && c >= 0 && c < C && maze[r][c] && !visited[r][c]);
}

bool ratIntheMazeHelper(vector<vector<bool>> &maze, vector<vector<bool>> &visited, int r, int c, int R, int C)
{
    if (r == R - 1 && c == C - 1 && maze[r][c])
    {
        visited[r][c] = true;
        return true;
    }
    
    if (isSafe(maze, visited, r, c, R, C))
    {
        visited[r][c] = true;
        for (int i = 0; i < possibleMoves; i++)
        {
            int nextXMove = r + xMoves[i];
            int nextYMove = c + yMoves[i];
            if (ratIntheMazeHelper(maze, visited, nextXMove, nextYMove, R, C))
            {
                return true;
            }
        }
        visited[r][c] = false;
        return false;
    }

    return false;
}
void ratInMaze(vector<vector<bool>>& maze)
{
    int R = maze.size();
    if (R == 0)
    {
        // ask interviewer
        return;
    }
    int C = maze[0].size();
    vector<vector<bool>> visited(C, vector<bool>(C, false));
    if (ratIntheMazeHelper(maze, visited, 0, 0, R, C))
    {
        cout << "Found the path\n";
        for (vector<bool> r : visited)
        {
            for (bool b : r)
            {
                cout << (b == true ? 1 : 0) << "\t";
            }
            cout << "\n";
        }
    } else {
        cout << "No Paths Found\n";
    }
}

// Another variation => Rat in the maze where every cell has a cost. Find the path with least cost/highest profit
int main()
{
    vector<vector<bool>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}};
    ratInMaze(maze);

    return 0;
}