int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int s = 0; // Indice del nuovo array senza duplicati
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[s]) {
            s++;
            nums[s] = nums[i];
        }
    }
    return s + 1;  // Restituiamo la nuova lunghezza dell'array
}
