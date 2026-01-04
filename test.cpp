#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> nums = {1,1,2};
    std::vector<int> expectedNums {};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != nums[i + 1]) {
        expectedNums.push_back(nums[i]);
            }
        }
        for (int i = 0; i < expectedNums.size(); i++) {
            std::cout << expectedNums[i];
        } std::cout << "\n";

std::cout << expectedNums.size() << "\n";

return 0;
}