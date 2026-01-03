func isValidSudoku(board [][]byte) bool {
    for i := range board {
        check := 0
        for j := range board {
            if board[i][j] != '.' {
                shift := 1 << int(board[i][j]-'0')
                if check & shift != 0 {
                    return false
                }
                check |= shift
            }
        }
    }
    for i := range board {
        check := 0
        for j := range board {
            if board[j][i] != '.' {
                shift := 1 << int(board[j][i]-'0')
                if check & shift != 0 {
                    return false
                }
                check |= shift
            }
        }
    }
    check3x3 := func(a, b int) bool {
        check := 0
        for j := 0; j < 3; j++ {
            for k := 0; k < 3; k++ {
                if board[a+j][b+k] != '.' {
                    shift := 1 << int(board[a+j][b+k]-'0')
                    if check & shift != 0 {
                        return false
                    }
                check |= shift
                }
            }
        }
        return true
    }
    return check3x3(0, 0) && check3x3(0, 3) && check3x3(0, 6) && 
    check3x3(3, 0) && check3x3(3, 3) && check3x3(3, 6) && 
    check3x3(6, 0) && check3x3(6, 3) && check3x3(6, 6)
}