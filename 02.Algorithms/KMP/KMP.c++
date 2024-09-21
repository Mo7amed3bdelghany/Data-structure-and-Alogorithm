#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

// Function to create the LPS array
vector<int> LPS(string pattern)
{
    int j = 0; // Length of the previous longest prefix suffix
    int i = 1;
    int n = pattern.size();
    vector<int> lps(n);
    while (i < n)
    {
        if (pattern[i] == pattern[j])
        {
            lps[i] = ++j;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1]; // Use the previous LPS value
            }
            else
            {
                i++;
            }
        }
    }
    return lps;
}

// KMP search function
    vector<int> KMP(string &text, string &pattern)
    {
        int n = text.size();
        int m = pattern.size();
        vector<int> lps = LPS(pattern), vec;
        int i = 0; // Index for text
        int j = 0; // Index for pattern

        while (i < n)
        {
            if (pattern[j] == text[i])
            {
                i++, j++;
            }
            else
            {
                if (j != 0)
                {
                    j = lps[j - 1]; // Use the LPS array to avoid unnecessary comparisons
                }
                else
                {
                    i++;
                }
            }

            if (j == m)
            {
                /* cout<<"Substring found at index: "<<i - m<<'\n'; */

                vec.push_back(i - m);
                j = lps[j - 1]; // Get the next position to check in the pattern
            }
        }
        return vec; // All start indixes of the occurrences of the pattern in the text
    }

int main()
{
    string text = "AAAACAAAAADAAAAAD";
    string pattern = "AAAAD";
    vector<int> vec = KMP(text, pattern);
    for (auto it : vec)
        cout << it << ' ';
    cout << '\n';

    return 0;
}