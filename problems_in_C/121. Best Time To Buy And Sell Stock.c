int maxProfit(int* prices, int pricesSize) {
    int sol = 0;

    int i = 0;
    int min = prices[0];
    int profitto;

    while (i < pricesSize)
    {
        if(prices[i] < min)
            min = prices[i];
        else
            profitto = prices[i] - min;
        if(profitto > sol)
            sol = profitto;
    
        i++;
    }
    return sol;
}