int minimumSum(int num) {
    int min1 = 10, min2 = 10;
    int max1 = -1, max2 = -1;

    for (int i = 0; i < 4; i++) {
        int digit = num % 10;
        num /= 10;

        // update min1, min2
        if (digit < min1) {
            min2 = min1;
            min1 = digit;
        } else if (digit < min2) {
            min2 = digit;
        }

        // update max1, max2
        if (digit > max1) {
            max2 = max1;
            max1 = digit;
        } else if (digit > max2) {
            max2 = digit;
        }
    }

    return (min1 * 10 + max2) + (min2 * 10 + max1);
}