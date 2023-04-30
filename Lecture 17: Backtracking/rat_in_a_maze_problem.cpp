#include <bits/stdc++.h> 
using namespace std; 

// print our solution 
void printsolution(int solution[20][20], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << solution[i][j] << " ";
        }
    }
    cout << endl;
}

//  calling function 
void solveMaze(int maze[20][20], int solution[20][20], int x, int y, int n) {
    // In this case we have to print the matrix
    if(x == n - 1 && y == n - 1) { 
        // include in path 
        solution[x][y] = 1; 
        // call printing 
        printsolution(solution, n); 
        cout << endl; 
        return;
    }
    // this are the edge case in this we have to return only
    if(x > n - 1 || x < 0 || y > n - 1 || y < 0 || maze[x][y] == 0 || solution[x][y] == 1) {
        return;
    } 
    // include in it 
    solution[x][y] = 1;
    // upper 
    solveMaze(maze, solution, x + 1, y, n); 
    // downward
    solveMaze(maze, solution, x - 1, y, n); 
    // left 
    solveMaze(maze, solution, x, y - 1, n); 
    // right 
    solveMaze(maze, solution, x, y + 1, n); 
    // now set to zero    
    solution[x][y] = 0;
} 

void ratInAMaze(int maze[20][20], int n) { 
    // create our own solution matrix 
    int solution[20][20]; 
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            solution[i][j] = 0;
        }
    } 
    // calling function 
    solveMaze(maze, solution, 0, 0, n); 
} 

int main() { 
    // size
    int n;
    cin >> n; 
    int maze[20][20]; 
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) {
            cin >> maze[i][j];
        } 
    }
    // calling function 
    ratInAMaze(maze, n);
    return 0;
}
