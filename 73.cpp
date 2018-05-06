void setZeroes(int** matrix, int matrixRowSize, int matrixColSize) {
    bool col[matrixColSize];
    memset(col, false, sizeof(col));
    for(int i = 0; i < matrixRowSize; i++)
    {
        bool key = false;
        for(int j = 0; j < matrixColSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                key = true;
                col[j] = true;
            }
        }
        if (key)
        {
            for(int j = 0; j < matrixColSize; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < matrixRowSize; i++)
    {
        for(int j = 0; j < matrixColSize; j++)
        {
            if (col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}