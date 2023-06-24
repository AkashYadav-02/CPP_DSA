#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> complements;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (complements.count(complement) > 0) {
            return {complements[complement], i};
        }
        complements[nums[i]] = i;
    }

    return {}; // Return an empty vector if no solution is found
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}