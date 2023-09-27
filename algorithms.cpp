#include<bits/stdc++.h>

int main() {
    std::vector<int> nums = {5, 6, 7, 8, 9, 10};
    auto it = std::find(nums.begin(), nums.end(), 9);

    if (it != nums.end()) {
        std::cout << "Found 9 at position: " << (it - nums.begin()) << std::endl;
    } else {
        std::cout << "9 not found\n";
    }
    // Output: Found 9 at position: 4

    nums = {5, 6, 7, 6, 8, 6, 9, 6, 10};
    nums.erase(std::remove(nums.begin(), nums.end(), 6), nums.end());

    for (int num : nums) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;
    // Output: 5 7 8 9 10
}