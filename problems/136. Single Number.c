int singleNumber(int* nums, int numsSize) {
    int r=0; 
    while(numsSize--) 
        r ^= *nums++; 
    return r; 

}