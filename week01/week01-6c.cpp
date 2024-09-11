int minBitFlips(int start, int goal) {
    int xor_result = start ^ goal; // 用 XOR 找出不同的位元
    int count=0;
    while (xor_result > 0) {
        count += (xor_result & 1); // 加上最低有效位元的值
        xor_result >>= 1; // 向右移位，處理下一個位元
    }
    return count;
}