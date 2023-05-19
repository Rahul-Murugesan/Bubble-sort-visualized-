#include <bits/stdc++.h>
using namespace std;

void visualizer(vector<int> data)
{
    int m = *max_element(data.begin(), data.end());
    vector<vector<char>> vis(m, vector<char>(data.size(), ' '));
    for(int i=0; i<data.size(); i++)
    {
        for(int j = (m-data[i]); j<m; j++)
        {
            vis[j][i] = '|';
        }
    }
    for(auto i:vis)
    {
        for(auto j:i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------" << endl;
}

vector<int> bsort(vector<int> arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size()-i-1; j++)
        {
            cout << "comparing " << arr[j] << " with " << arr[j+1] << endl;
            if(arr[j] > arr[j+1])
            {
                cout << "Swaping" << endl;
                swap(arr[j+1], arr[j]);
            }
            visualizer(arr);
        }
    }
    return arr;
}

int main() {
    
    vector<int> inp{3, 5, 1, 4, 1};
    cout << "Original array: " << endl;
    visualizer(inp);
    bsort(inp);
    return 0;
}