//88. Merge Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int index=m+n-1;

        while(i>-1 && j>-1){
            if(nums1[i]> nums2[j]){
                nums1[index]=nums1[i];
                i--;
                index--;
            }
            else{
                nums1[index]=nums2[j];
                j--;
                index--;
            }
        }

        while(i>-1){
            nums1[index]=nums1[i];
                i--;
                index--;
        }
        while(j>-1){
            nums1[index]=nums2[j];
                j--;
                index--;
        }

    }
};
