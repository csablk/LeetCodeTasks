class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::map<int, int> numberMap;

        for (const auto& number : nums) {
            numberMap[number]++;
        }

        for (const auto& pair : numberMap) {
            if (pair.second > 1 ) {
                return true;
            }
        }

        return false;
    }
};
