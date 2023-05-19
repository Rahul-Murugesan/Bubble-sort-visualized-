#include <bits/stdc++.h>
using namespace std;

void visualizer(vector<int> data, int point1 = -1, int point2 = -1)
{
    int m = *max_element(data.begin(), data.end());
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<data.size(); j++)
        {
            if((m-data[j]) <= i)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=0; i<=max(point1, point2); i++)
    {
        if(i == point1)
        {
            cout << "^";
        }
        else if(i == point2)
        {
            cout << "^";
        }
        else
        {
            cout << " ";
        }
    }
    cout << "\n-----------------------------------" << endl;
    sleep(3);
}

vector<int> bsort(vector<int> arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size()-i-1; j++)
        {
            system("clear");
            cout << "comparing " << arr[j] << " with " << arr[j+1] << endl;
            visualizer(arr, j, j+1);
            if(arr[j] > arr[j+1])
            {
                swap(arr[j+1], arr[j]);
                system("clear");
                cout << "comparing " << arr[j] << " with " << arr[j+1] << endl;
                cout << "Swapped" << endl;
                visualizer(arr, j, j+1);
            }
        }
    }
    return arr;
}

int main() {
    
    vector<int> inp{8, 4, 25, 20, 13, 14, 10};
    cout << "Original array: " << endl;
    visualizer(inp);
    inp = bsort(inp);
    cout << "After Sorting: " << endl;
    visualizer(inp);
    return 0;
}
