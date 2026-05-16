#include <iostream>
#include <vector>
using namespace std;

void calculateMostWater(vector<int> &height)
{

    int maxWater = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int currentHeight = min(height[i], height[j]);
            int currentWidth = j - i;
            int currentArea = currentHeight * currentWidth;

            if (currentArea > maxWater)
            {
                maxWater = currentArea;
            }
        }
    }
    cout << "Max water: " << maxWater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    calculateMostWater(height);
}