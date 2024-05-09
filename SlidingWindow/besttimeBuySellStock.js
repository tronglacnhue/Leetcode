/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    //the goal here we need to create an array A that A[i] contain the smallest number from index 0 to index i
    const Arr = [];
    Arr.push(prices[0]);
    for(let i = 1; i < prices.length; i++) {
      Arr.push(Math.min(Arr[i-1], prices[i]));
    }
    //so we just need to loop from 1 to end of array prices, we sell stock at day i so the best price to buy is the smallest number from 0 to i-1
    let result = 0;
    for(let i = 1; i < prices.length; i++) {
      result = Math.max(result, prices[i] - Arr[i-1]);
    }
    return result;
};