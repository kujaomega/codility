// you can write to stdout for debugging purposes, e.g.
// print "this is a debug message\n";

function solution($A) {
    // write your code in PHP5.5
    
    $summed_array = array_sum($A);
    $total_number = count($A);
    $left_summed = 0;
    $solution = PHP_INT_MAX;
    for($i = 0; $i < $total_number-1; ++$i)
    {
        $left_summed += $A[$i];
        $result = abs($left_summed - ($summed_array - $left_summed));
        if($result<$solution)
        {
            $solution = $result;
        }
    }
    
    return $solution;
}