int search(int *nums, int numsSize, int target){
    int left = 0;
    int right = numsSize-1;
    //Binary Search -> Get Middle Value
    while (left < right) {
        //How to get
        //1 2 3
        //The most common algorithm is that (1+3)/2=2
        //However, 1 is not fixed.It was variable.
        //We need to add some offset as a condition to limit it
        //Left : offset
        int mid = left + (right-left)/2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }

    }
    if (nums[left] != target) return -1;
    return left;
}