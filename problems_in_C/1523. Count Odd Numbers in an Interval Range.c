int countOdds(int low, int high){
    int dif = high-low;

    if (dif == 0 && low % 2 == 0)
        return 0;
    if (dif == 0 && low % 2 != 0)
        return 1;
    
    if (dif % 2 == 0 && low % 2 == 0)
        return dif / 2;
    return dif / 2 + 1;
}