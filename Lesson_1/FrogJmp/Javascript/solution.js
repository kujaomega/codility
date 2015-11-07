// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(X, Y, D) {
    // write your code in JavaScript (Node.js 4.0.0)
    var distance = Y - X;
    var result = Math.ceil(distance/D);
    return result;
}