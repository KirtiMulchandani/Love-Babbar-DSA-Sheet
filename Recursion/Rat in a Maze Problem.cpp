#include <bits/stdc++.h>

using namespace std;

    bool isPossible(int x, int y, int n, vector<vector<int>> m, vector<vector<int>> visited){
        
        if((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
            return true;
        else
            return false;
        
    }
    
void solve(vector<string> &ans, vector<vector<int>> m, int n, int x, int y, string path, 
    vector<vector<int>> visited){
        
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
        
    visited[x][y] = 1;
        
    // down
    int newx = x + 1, newy = y;
        
    if(isPossible(newx, newy, n, m, visited)){
        path += "D";
        solve(ans, m, n, newx, newy, path, visited);
        path.pop_back();
    }
        
    // left
    newx = x, newy = y-1;        
        
        
    if(isPossible(newx, newy, n, m, visited)){
        path += "L";
        solve(ans, m, n, newx, newy, path, visited);
        path.pop_back();
    }
        
    // right
    newx = x, newy = y+1;
    if(isPossible(newx, newy, n, m, visited)){
        path += "R";
        solve(ans, m, n, newx, newy, path, visited);
        path.pop_back();
    }        
        
    // up
    newx = x-1, newy = y;
    if(isPossible(newx, newy, n, m, visited)){
        path += "U";
        solve(ans, m, n, newx, newy, path, visited);
        path.pop_back();
    }        
        
    visited[x][y] = 0;
        
}
    
vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;
    
    if(m[0][0] == 0)
        return ans;
        
    string path = "";
        
    vector<vector<int>> visited = m;
        
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            visited[i][j] = 0;
        }
    }
    
    int srcx = 0, srcy = 0;
    
    solve(ans, m, n, srcx, srcy, path, visited);
    sort(ans.begin(), ans.end());
        
    return ans;
}

int main()
{
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1}, 
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
                            
    vector<string> ans = findPath(m, m.size());
    
    if(ans.size() == 0)
        cout << -1 << endl;
    else
        for(string i : ans)
            cout << i << " ";
    cout << endl;

    return 0;
}
