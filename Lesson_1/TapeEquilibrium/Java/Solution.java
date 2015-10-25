// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        
        int arraySummed = 0;
        int size = A.length;
        int leftSum = 0;
        int minResult = Integer.MAX_VALUE;
        for(int i = 0; i<size; ++i)
        {
            arraySummed += A[i];
            
        }
        
        for(int i=0; i<size-1;++i)
        {
            leftSum+=A[i];
            int result = Math.abs(leftSum - (arraySummed-leftSum));
            if(result<minResult)
            {
                minResult = result;
            }           
        }
        return minResult;
    }
}