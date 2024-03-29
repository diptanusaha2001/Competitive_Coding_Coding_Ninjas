// void towerOfHanoi(int n, char source, char auxiliary, char destination) {
//     if(n<1)
//         return;
//     else{
//         towerOfHanoi(n-1, source, destination, auxiliary);
//         cout << source << ' ' << destination << endl;
//         towerOfHanoi(n-1, auxiliary, source, destination);
//     }
// }

void moveDisks(int n, int toRod, int fromRod, vector<vector<int>>& moves) {
    
    if (n == 1) {
        moves.push_back({fromRod, toRod});
        return;
    }

    
    int rem = 1 ^ 2 ^ 3 ^ toRod ^ fromRod;

    moveDisks(n - 1, rem, fromRod, moves);

    
    moves.push_back({fromRod, toRod});

    
    moveDisks(n - 1, toRod, rem, moves);
}

vector<vector<int>> towerOfHanoi(int n) {
    
    vector<vector<int>> moves;
    moveDisks(n, 2, 1, moves);

    
    return moves;
}
