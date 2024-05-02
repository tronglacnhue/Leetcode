/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    const t = cleanString(s);
    let leftIndex = 0;
    let rightIndex = t.length - 1;
    while(rightIndex > leftIndex ) {
      if(t[leftIndex] != t[rightIndex]) return false;
      leftIndex++;
      rightIndex--;
    }
    return true;
};
const cleanString = (s) => {
  return s.toLowerCase().replace(/[^a-z0-9]/g, '');
}