// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
typedef pair<int, int> intp;
typedef map<int, int> maps;
typedef unordered_map<string, int> dictsi;
typedef unordered_map<int, string> dictis;
typedef unordered_map<int, int> dictii;
#define intj ::iterator
#define var auto
#define clktime() chrono::high_resolution_clock::now()
#define sysclock std::chrono::time_point<std::chrono::system_clock>
#define calctime(x) chrono::duration<float> x
#define fastoutput(x) printf(x)
#define input(x) std::cin >> x
#define output(x) std::cout << x << std::endl
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void newSort(int arr[], int n)
{
    fx(i, 0, n / 2)
    {
        fx(j, i + 1, n / 2)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    fx(i, n / 2, n)
    {
        fx(j, i + 1, n)
        {

            if (arr[i] < arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void printarr(int arr[], int n)
{

    fx(i, 0, n)
    {
        cout << arr[i] << " ";
    }
    output(" ");
}

int main()
{
    int arr[20];
    fx(i, 0, 20)
    {
        arr[i] = rand() % 100;
    }
    int n = calcsize(arr);
    newSort(arr, n);
    printarr(arr, n);
    return 0;
}