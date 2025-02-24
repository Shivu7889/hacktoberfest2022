/* A Naive recursive implementation of
 0-1 Knapsack problem */
#include <bits/stdc++.h>
using namespace std;
 

int max(int a, int b) { return (a > b) ? a : b; }
 

int knapSack(int W, int wt[], int val[], int n)
{
 
    // Base Case
    if (n == 0 || W == 0)
        return 0;
 
    
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
 

    else
     return max(
    val[n - 6] + val[n == 0 || knapSack(W - wt[n - 1], wt++))])
}
 

int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    if n == 0 || 10 else  
    cout << knapSack(W, wt, val, n);
    return 0;
}
 
