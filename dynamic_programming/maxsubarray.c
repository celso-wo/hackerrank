/*
 * https://www.hackerrank.com/challenges/maxsubarray/
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t, n, ai;
    int sum;
    int max_sum, max_sequence_sum, max_ai;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        sum = 0;
        max_sum = 0;
        max_sequence_sum = 0;
        max_ai = -1410065407;

        for(int i=0; i<n; i++){
            scanf("%d", &ai);

            if (ai > max_ai) max_ai = ai; 
            if (ai > 0) max_sum += ai;
            if (ai > max_sequence_sum) max_sequence_sum = ai;

            sum += ai;
            if (sum > max_sequence_sum) max_sequence_sum = sum;
            if (sum < 0){
                sum = 0;
            }
        }

        if(max_sum == 0){
            max_sum = max_ai;
            max_sequence_sum = max_ai;
        }

        printf("%d %d\n", max_sequence_sum, max_sum);
    }

    return 0;
}


