#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findErrorNums(const std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    std::vector<int> result(2);

    // Count the frequency of each number
    for (int num : nums) {
        ++freq[num];
    }

    // Find the number that occurs twice and the missing number
    for (int i = 1; i <= nums.size(); ++i) {
        if (freq[i] == 2) {
            result[0] = i;  // Number that occurs twice
        } else if (freq[i] == 0) {
            result[1] = i;  // Missing number
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4};

    std::vector<int> result = findErrorNums(nums);

