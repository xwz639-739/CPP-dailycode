#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<int>> largeGroupPositions(string s) {
    int m = 0, n = s.size() - 1;
    vector<vector<int>> count;
    for (int i = m + 1; m < n; i++)
    {
        if (s[i] != s[m] && i - m < 3)
            m = i;
        else if (s[i] != s[m] && i - m >= 3)
        {
            count.push_back({ m,i });
            m = i;
        }
    }
    return count;
}

int main()
{
    string s = { "abbxxxxzzy"};
    vector<vector<int>> a=largeGroupPositions(s);
    for (auto& k : a)
        for (auto& l : k)
            cout << l << " ";
    return 0;
}