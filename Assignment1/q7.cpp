#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int n = nums.size();
    int i = 0;  // Pointer for the current position to insert nonzero elements

    // Move nonzero elements to the front
    for (int j = 0; j < n; ++j) {
        if (nums[j] != 0) {
            nums[i] = nums[j];
            ++i;
        }
    }

    // Fill the remaining positions with zeroes
    while (i < n) {
        nums[i] = 0;
        ++i;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    std::cout << "Result: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
