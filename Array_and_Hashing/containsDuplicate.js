/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
  const numSet = new Set(nums);
  const isEqual = numSet.size === nums.length;
  
  return !isEqual;

};