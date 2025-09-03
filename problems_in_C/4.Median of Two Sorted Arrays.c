double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double s;
    
    int b;
    int sum[nums1Size+nums2Size];
    int i=0; 
    int j=0; 
    int k=0;
    
    while(i < nums1Size && j < nums2Size)
    {   
        if(nums1[i] < nums2[j])
        {  
            sum[k] = nums1[i];
            i++;
            k++;
        }
        else
        {  
            sum[k] = nums2[j];
            j++;
            k++;
        }
    }
    
    while(j < nums2Size)
    {   
        sum[k] = nums2[j];
        j++;
        k++;
    }
    
    while(i<nums1Size)
    {   
        sum[k] = nums1[i];
        i++;
        k++;
    }
    
    if((nums1Size + nums2Size) % 2 != 0)
    { 
        b = sum[(nums1Size+nums2Size)/2];
        s = (double)b;
        return s;
    }
    else 
    {   
        s =((double)((sum[(nums1Size+nums2Size)/2])+(sum[((nums1Size+nums2Size) / 2)-1])))/2;
        return s;
    }
}