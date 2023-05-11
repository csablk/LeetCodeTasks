#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        // Input: nums = [2,7,11,15], target = 9

        std::sort(nums.begin(),  nums.end());

        int leftPtr = 0, rightPtr = nums.size() - 1;

        while(leftPtr < rightPtr) 
        {

          int result = nums[leftPtr] + nums[rightPtr];

          if(result == target)
          {
            return {leftPtr,rightPtr};
          }

          if(result < target)
          {
            leftPtr++;
          }

          else
          {
            rightPtr--;
          }

        }

        return {};

    }
};


int main(int argc, char const *argv[])
{

    Solution solution;

    std::vector<int> nums = {2,7,11,15};

    int target = 9;

    std::vector<int> indices = solution.twoSum(nums, target);


    if (indices.empty()) {

        std::cout << "No pair found.\n";

    } 

    else 
    {

        std::cout << "Pair found at indices: " << indices[0] << ", " << indices[1] << "\n";
    }

    return 0;
}
