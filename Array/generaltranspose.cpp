#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> result(n, vector<int>(m));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

int main() {

    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> result = transpose(matrix);

    cout << "\nTranspose Matrix:\n";
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[0].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}