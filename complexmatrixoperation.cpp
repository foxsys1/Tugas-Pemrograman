#include <bits/stdc++.h>
using namespace std;
// ini buatan muhammad arifudin yazid ata, practice TVM
vector<vector<int>> matrix_op(vector<string> input, vector<vector<int>> original, int N, int M) {
    vector<vector<int>> copy = original;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == "90") {
            vector<vector<int>> matrix_new(copy[0].size(), vector<int>(copy.size(), 0));
            for (int a = 0; a < copy[0].size(); a++)
            {
                for (int b = 0; b < copy.size(); b++)
                {
                    matrix_new[a][b] = copy[copy.size()-1-b][a];
                }
                
            }
            copy = matrix_new;
            
        }
        else if (input[i] == "180") {
            vector<vector<int>> copy_copy = copy;
            for (int c = 0; c < copy.size(); c++)
            {
                for (int d = 0; d < copy[0].size(); d++)
                {
                    copy_copy[c][d] = copy[copy.size() - 1 - c][copy[0].size() - 1 - d];
                }
                
            }
            copy = copy_copy;
            
        }
        else if (input[i] == "270") {
            vector<vector<int>> matrix_new(copy[0].size(), vector<int>(copy.size(), 0));
            for (int a = 0; a < copy[0].size(); a++)
            {
                for (int b = 0; b < copy.size(); b++)
                {
                    matrix_new[a][b] = copy[b][copy[0].size() - 1 - a];
                }
            }
            copy = matrix_new;    
        }
        else if (input[i] == "_") {
            vector<vector<int>> copy_copy = copy;
                for (int i = 0; i < copy.size(); i++)
                {
                    for (int x = 0; x < copy[0].size(); x++)
                    {
                        copy_copy[i][x] = copy[copy.size() - i - 1][x];
                    }
                }
                copy = copy_copy;
        }
        else if (input[i] == "|") {
            vector<vector<int>> copy_copy = copy;
                for (int i = 0; i < copy.size(); i++)
                {
                    for (int x = 0; x < copy[0].size(); x++)
                    {
                        copy_copy[i][x] = copy[i][copy[0].size() - 1 - x];
                    }
                }
                copy = copy_copy;
        }
    }
    return copy;
}
int main() {
    int N,M,X;
    cin >> N >> M >> X;
    vector<vector<int>> A(N, vector<int>(M, 0));
    vector<string> input(X);
    for (int i = 0; i < N; i++)
    {
        for (int a = 0; a < M; a++)
        {
            cin >> A[i][a];
        }
    }
    for (int b = 0; b < X; b++)
    {
        cin >> input[b];
    }
    vector<vector<int>> result = matrix_op(input, A, N, M);
    for (int c = 0; c < result.size(); c++)
    {
        for (int d = 0; d < result[0].size(); d++)
        {
            cout << result[c][d] << " ";
        }
        cout << "\n";
    }
}
