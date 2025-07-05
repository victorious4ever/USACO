#include <iostream>
#include <fstream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("tttt.in");
    ofstream fout("tttt.out");

    vector<string> grid(3);
    for (int i = 0; i < 3; i++) {
        fin >> grid[i];
    }

    set<char> individuals;
    set<pair<char, char>> teams;

    for (int i = 0; i < 3; i++) {
        set<char> row;
        for (int j = 0; j < 3; j++) {
            row.insert(grid[i][j]);
        }
        if (row.size() == 1) {
            individuals.insert(*row.begin());
        } else if (row.size() == 2) {
            vector<char> temp(row.begin(), row.end());
            teams.insert(make_pair(min(temp[0], temp[1]), max(temp[0], temp[1])));
        }
    }

    for (int j = 0; j < 3; j++) {
        set<char> col;
        for (int i = 0; i < 3; i++) {
            col.insert(grid[i][j]);
        }
        if (col.size() == 1) {
            individuals.insert(*col.begin());
        } else if (col.size() == 2) {
            vector<char> temp(col.begin(), col.end());
            teams.insert(make_pair(min(temp[0], temp[1]), max(temp[0], temp[1])));
        }
    }

    set<char> diag1;
    diag1.insert(grid[0][0]);
    diag1.insert(grid[1][1]);
    diag1.insert(grid[2][2]);
    if (diag1.size() == 1) {
        individuals.insert(*diag1.begin());
    } else if (diag1.size() == 2) {
        vector<char> temp(diag1.begin(), diag1.end());
        teams.insert(make_pair(min(temp[0], temp[1]), max(temp[0], temp[1])));
    }

    set<char> diag2;
    diag2.insert(grid[0][2]);
    diag2.insert(grid[1][1]);
    diag2.insert(grid[2][0]);
    if (diag2.size() == 1) {
        individuals.insert(*diag2.begin());
    } else if (diag2.size() == 2) {
        vector<char> temp(diag2.begin(), diag2.end());
        teams.insert(make_pair(min(temp[0], temp[1]), max(temp[0], temp[1])));
    }

    fout << individuals.size() << '\n';
    fout << teams.size() << '\n';

    fin.close();
    fout.close();
    return 0;
}
