/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
  //we can use priorityQueue to store K element with most frequent but time complexity is O(n*log(n))
  //in order to solve this problem in O(n), we use an array arr that value of arr[i] is an array contain nums that exist i times;
  // so we can get K element that most frequent in nums by iterate from end to begin of arr.
  const mp = new Map();
  const arr = new Array(nums.length + 1).fill(0);
  const ans = [];
  nums.forEach( el => {
    const val = mp.get(el) || 0;
    mp.set(el, val + 1);
  });

  for(let [key, val] of mp) {
    const prev = arr[val] || [];
    prev.push(key);
    arr[val] = prev;
  }
  arr.reverse();
  for(let el of arr) {
    if(k < 1) break;
    if(el) {
      for(let element of el) {
        ans.push(element);
        k--;
        if(k < 1) break;
      }
    }
  }
  return ans;
};