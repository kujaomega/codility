// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(A) {
    // write your code in JavaScript (Node.js 4.0.0)
    var a = A.length;
    var sum = A.reduce(function(pv, cv) { return pv + cv; }, 0);
    var leftSum = 0;
    var minResult = Number.MAX_VALUE;
    for(var i=0, n=A.length-1; i < n; i++) 
    { 
      leftSum += A[i];
      var partialResult = Math.abs(leftSum-(sum-leftSum));
      if(partialResult<minResult){
          minResult = partialResult;
      }
          
    }
    return minResult;
}