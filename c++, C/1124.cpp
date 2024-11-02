#include <bits/stdc++.h>

using namespace std;

bool encontra(int L, int C, int R1, int R2) 
{
    if (2 * R1 > L || 2 * R1 > C || 2 * R2 > L || 2 * R2 > C)
        return false;

    int dis = (R1 + R2) * (R1 + R2);
    int vert = (L - R1 - R2) * (L - R1 - R2) + (C - R1 - R2) * (C - R1 - R2);
    return dis <= vert;
}

int main() {
    
    int L, C, R1, R2;
    while (cin >> L >> C >> R1 >> R2 && (L || C || R1 || R2)) 
    {
        if (encontra(L, C, R1, R2)) 
        {
            cout << "S" << endl;
        } else 
        {
            cout << "N" << endl;
        }
    }
    return 0;
}