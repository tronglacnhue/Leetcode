/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if (s.length != t.length) return false;

    const sMap = new Map();
    const tMap = new Map();
    for (let i = 0; i < s.length; i++) {
      const char = s[i];
      const count = (sMap.get(char) || 0) + 1;
      sMap.set(char, count);

      char2 = t[i];
      const count2 = (tMap.get(char2) || 0) + 1;
      tMap.set(char2, count2);
    }

    for( const char of s) {
      if(sMap.get(char) != tMap.get(char)) return false;
    }
    return true;
};
console.log(isAnagram("car", "cat"));