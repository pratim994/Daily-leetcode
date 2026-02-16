import java.util.Random;

class Solution {

    Random rand = new Random();

    void qs(int[] nums, int low, int high) {
        if (low < high) {
            int pIndex = partition(nums, low, high);
            qs(nums, low, pIndex - 1);
            qs(nums, pIndex + 1, high);
        }
    }

    int partition(int[] nums, int low, int high) {
        // Random pivot selection
        int randomIndex = low + rand.nextInt(high - low + 1);
        swap(nums, low, randomIndex);

        int pivot = nums[low];
        int i = low;
        int j = high;

        while (i < j) {

            while (i <= high - 1 && nums[i] <= pivot) i++;
            while (j >= low + 1 && nums[j] > pivot) j--;

            if (i < j) swap(nums, i, j);
        }

        swap(nums, low, j);
        return j;
    }

    void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public int[] sortArray(int[] nums) {
        qs(nums, 0, nums.length - 1);
        return nums;
    }
}
