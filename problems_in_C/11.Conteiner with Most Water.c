int min(int a, int b)
{
    if(a <= b) 
        return a;
    return b;
}

int maxArea(int* height, int heightSize) {
    int max = 0;
    int l = 0;
    int r = heightSize - 1;
    int vol;

    while(l != r)
    {
        vol = (r-l) * (min(height[r], height[l]));
        
        if(vol > max)
            max = vol;
        
        if(height[r] < height[l])
            r--;
        else
            l++;
    }
    return max;
}