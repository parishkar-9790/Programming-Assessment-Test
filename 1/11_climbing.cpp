// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>

using namespace std;
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ra`nked
 *  2. INTEGER_ARRAY player
 */

int binarySearch(vector<int> &ranked, int key, vector<int> &rank)
{
    if (key > ranked[0])
        return 1;
    else if (key < ranked[ranked.size() - 1])
        return rank[ranked.size() - 1] + 1;
    int start = 0, end = ranked.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == ranked[mid])
            return rank[mid];
        else if (key > ranked[mid] and key < ranked[mid - 1])
            return rank[mid - 1] + 1;
        else if (key < ranked[mid] and key > ranked[mid + 1])
            return rank[mid] + 1;
        else if (key > ranked[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> rank(ranked.size(), 0);
    for (int i = 0; i < ranked.size(); i++)
    {
        if (i == 0)
            rank[i] = 1;
        else
        {
            if (ranked[i] == ranked[i - 1])
                rank[i] = rank[i - 1];
            else
                rank[i] = rank[i - 1] + 1;
        }
    }
    vector<int> player_rank(player.size(), 0);
    for (int i = 0; i < player.size(); i++)
    {
        player_rank[i] = binarySearch(ranked, player[i], rank);
    }
    return player_rank;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ranked_count_temp;
    getline(cin, ranked_count_temp);

    int ranked_count = stoi(ltrim(rtrim(ranked_count_temp)));

    string ranked_temp_temp;
    getline(cin, ranked_temp_temp);

    vector<string> ranked_temp = split(rtrim(ranked_temp_temp));

    vector<int> ranked(ranked_count);

    for (int i = 0; i < ranked_count; i++)
    {
        int ranked_item = stoi(ranked_temp[i]);

        ranked[i] = ranked_item;
    }

    string player_count_temp;
    getline(cin, player_count_temp);

    int player_count = stoi(ltrim(rtrim(player_count_temp)));

    string player_temp_temp;
    getline(cin, player_temp_temp);

    vector<string> player_temp = split(rtrim(player_temp_temp));

    vector<int> player(player_count);

    for (int i = 0; i < player_count; i++)
    {
        int player_item = stoi(player_temp[i]);

        player[i] = player_item;
    }

    vector<int> result = climbingLeaderboard(ranked, player);
    // for (auto ele : result)
    // {
    //     cout << ele << endl;
    // }
    for (size_t i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
