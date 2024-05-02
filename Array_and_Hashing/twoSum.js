/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const indexOf = new Map();
    for (let i = 0; i < nums.length; i++) {
      const leftNum = target - nums[i];
      if (indexOf.has(leftNum)) {
        return [i, indexOf.get(target- nums[i]) ];
      }
      indexOf.set(nums[i], i);
    }
};
console.log(twoSum([3, 2, 4], 6));