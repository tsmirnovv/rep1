#include <iostream>
using namespace std;

int main()
{
    int nums[4] = { 1,2,4,3 };
    int max = 0;
    for (int i = 0; i < 4; i++) {
        if (nums[i] >  max) {
            max == nums[i];
        }
    }
    cout << max;
}


