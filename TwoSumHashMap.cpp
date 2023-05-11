#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        // Input: nums = [2,7,11,15], target = 9

      std::unordered_map<int,int> map;

      for (int i = 0; i < nums.size(); ++i)
      {
        
        int number = target - nums[i];

        if(map.find(number) != map.end())
        {
          return {map[number], i};
        }


        map[nums[i]] = i;

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
