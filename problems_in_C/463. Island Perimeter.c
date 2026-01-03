int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter = 0;

    //int gridRowSize = gridSize / gridColSize;
    int row = 0;
    int col = 0;
    while(row < gridSize)
    {
        col = 0;
        while(col < *gridColSize)
        {
            if((row == 0 || row == (gridSize-1)) && grid[row][col] == 1)
                perimeter++;
            if((col == 0 || col == (*gridColSize-1)) && grid[row][col] == 1)
                perimeter++;
            
            if((0 == (gridSize-1)) && grid[row][col] == 1)
                perimeter++;
            if((0 == (*gridColSize-1)) && grid[row][col] == 1)
                perimeter++;

            if(grid[row][col] == 1)
            {
                if(col > 0 && grid[row][col-1] == 0)
                    perimeter++;
                if(col < (*gridColSize-1) && grid[row][col+1] == 0)
                    perimeter++;
                if(row > 0 && grid[row - 1][col] == 0)
                    perimeter++;
                if(row < (gridSize - 1) && grid[row + 1][col] == 0)
                    perimeter++;
            }
            col++;
        }
        row++;
    }
    return perimeter;

}