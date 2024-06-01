// given a number x and y (i<=x<=10^5, x<=y<=10^8 . calc , sum of all the numbers in the range [, y]).

// x=5;
// y=8;

// ans->5 + 6 + 7 +8=24
// iterate from x -> y and sum of the all number between x and y.

// code:
// #include<bits/stdc++.h>
// using namespace std;
//  int main(){
//     int ans=0;
//     int x=2,y=6;
//     for(int i=x;i<=y;i++){
//         ans+=i;
//     }
//     cout<<ans;
    
//     return 0;
//  }

// #include<bits/stdc++.h>
// using namespace std;
// int sum_in_range(int x,int y){
//     int result =0;
//     for(int i=x;i<=y;i++){
//         result +=i;
//     }
//     return result;
// }
// int main(){
//     cout<<sum_in_range(2,6);
//     return 0;
// }

//   Another method:
// AP(Arithmetic progression)

#include<bits/stdc++.h>
using namespace std;
int sum_in_range_optimized(int x, int y){
    int n=(y-x+1);
    int a=x;
    int result=(n*(2*a +(n-1)*1))/2;
    return result;
}
int main(){
    cout<<sum_in_range_optimized(2,6);
    return 0;
}

/*Time complexity is a concept used in computer science to analyze the efficiency of algorithms in terms of the amount of time it takes for an algorithm to run as a function of the length of the input. It provides an estimate of the number of computational steps an algorithm will require to execute, based on the size of the input.

In simpler terms, time complexity helps us understand how the runtime of an algorithm scales with respect to the size of the input. It provides insights into how the algorithm will perform as the size of the input grows larger.

Time complexity is typically expressed using Big O notation, which represents the upper bound on the growth rate of an algorithm's runtime. For example:

�
(
1
)
O(1) - Constant Time: The algorithm's runtime is constant and does not depend on the size of the input.
�
(
log
⁡
�
)
O(logn) - Logarithmic Time: The runtime grows logarithmically with the size of the input.
�
(
�
)
O(n) - Linear Time: The runtime grows linearly with the size of the input.
�
(
�
2
)
O(n 
2
 ) - Quadratic Time: The runtime grows quadratically with the size of the input.
�
(
2
�
)
O(2 
n
 ) - Exponential Time: The runtime grows exponentially with the size of the input.
By analyzing the time complexity of algorithms, we can make informed decisions about which algorithm to use for a given problem and estimate the computational resources required for larger inputs. It also helps in optimizing algorithms to improve performance and scalability.



Time complexity can be broadly categorized into several types based on how the runtime of an algorithm grows as the size of the input increases. Here are some common types of time complexity:

Constant Time (O(1)): Algorithms with constant time complexity have a fixed runtime that does not depend on the size of the input. Regardless of the input size, these algorithms always take the same amount of time to execute.

Logarithmic Time (O(log n)): Algorithms with logarithmic time complexity have runtimes that grow logarithmically with the size of the input. As the input size increases, the runtime increases at a slower rate.

Linear Time (O(n)): Algorithms with linear time complexity have runtimes that grow linearly with the size of the input. The runtime increases proportionally with the size of the input.

Linearithmic Time (O(n log n)): Algorithms with linearithmic time complexity have runtimes that grow in a slightly faster rate than linear time, but still slower than quadratic time. Many efficient sorting and searching algorithms fall into this category.

Quadratic Time (O(n^2)): Algorithms with quadratic time complexity have runtimes that grow quadratically with the size of the input. As the input size increases, the runtime increases quadratically, making these algorithms less efficient for large inputs.

Cubic Time (O(n^3)): Algorithms with cubic time complexity have runtimes that grow cubically with the size of the input. The runtime increases rapidly as the input size increases.

Exponential Time (O(2^n)): Algorithms with exponential time complexity have runtimes that grow exponentially with the size of the input. These algorithms are generally considered to be very inefficient and are impractical for large inputs.

These are some of the most common types of time complexity. There are also other types, such as polynomial time complexity (e.g., O(n^k)) and factorial time complexity (e.g., O(n!)), but they are less common in practice. Understanding the time complexity of algorithms is crucial for analyzing their efficiency and scalability.