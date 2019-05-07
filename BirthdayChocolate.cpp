#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int totalSquare, val, bDay, bMonth;
    int sqrSum = 0, totalSeg = 0;
    vector<int> cArr;
    cin >> totalSquare;
    for(int i = 0; i < totalSquare; i++)
    {
        cin >> val;
        cArr.push_back(val);
    }
    cin >> bDay >> bMonth;
    for(int i = 0; i < totalSquare; i++)
    {
        int j = i;
        while(j < bMonth+i)
        {
            sqrSum += cArr[j];
            ++j;
        }
        if(j == bMonth+i)
        {
            if(sqrSum == bDay)
                ++totalSeg;
            sqrSum = 0;
        }
    }
    cout << totalSeg;
    return 0;
}
