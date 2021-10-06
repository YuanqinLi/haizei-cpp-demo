/*************************************************************************
	> File Name: nth_element.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/
#include <vector>
#include <cassert>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <functional>
#include "common.h"

int main()
{
    std::vector<int> v{5, 6, 4, 3, 2, 6, 7, 9, 3};

    auto m = v.begin() + v.size()/2;
    output(v);
    std::nth_element(v.begin(), m, v.end());
    output(v);
    std::cout << "The median is " << v[v.size()/2] << '\n';
    // The consequence of the inequality of elements before/after the Nth one:
    assert(std::accumulate(v.begin(), m, 0) < std::accumulate(m, v.end(), 0));

    //std::nth_element(v.begin(), v.begin()+1, v.end(), std::greater{});
    std::cout << "The second largest element is " << v[1] << '\n';
    std::cout << "The largest element is " << v[0] << '\n';
}
