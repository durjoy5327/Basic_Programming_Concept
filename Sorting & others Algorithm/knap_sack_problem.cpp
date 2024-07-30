#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    if(a>b) return a;
    return b;
    }
int knapSack(int W, int weight[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (weight[n - 1] > W)
        return knapSack(W, weight, val, n - 1);
    else
        return max( val[n - 1]
                + knapSack(W - weight[n - 1], weight, val, n - 1),
            knapSack(W, weight, val, n - 1));
}
int main()
{
    int profit[] = { 10,5,15,7,6, 18, 3 };
    int weight[] = { 2,3,7,1, 4, 1 };
    int W = 15;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout <<"Maximum profit for"<<W<<"Weight is "<< knapSack(W, weight, profit, n)<<endl;
    return 0;
}
