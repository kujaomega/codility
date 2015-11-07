// you can write to stdout for debugging purposes, e.g.
// print "this is a debug message\n";

function solution($X, $Y, $D) {
    // write your code in PHP5.5
    $distance = $Y- $X;
    $result = intval(ceil($distance/$D));
    return $result;
}