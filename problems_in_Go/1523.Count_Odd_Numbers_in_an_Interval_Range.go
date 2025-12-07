func countOdds(low int, high int) int {
    lenght := high - low + 1

    if lenght % 2 != 0 && low % 2 != 0{
        return lenght/2 + 1
    }
    return lenght/2
}