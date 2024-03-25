class Solution {
    public int[] twoSum(int[] nums, int target) {
        List<Pair<Integer, Integer>> pairs = new ArrayList<>();
        
        for (int i = 0; i < nums.length; i++) {
            pairs.add(new Pair<>(nums[i], i));
        }
        
        pairs.sort(Comparator.comparingInt(p -> p.getKey()));
        
        int i = 0;
        int j = pairs.size() - 1;
        
        while (i < j) {
            int sum = pairs.get(i).getKey() + pairs.get(j).getKey();
            if (sum == target) {
                return new int[]{pairs.get(i).getValue(), pairs.get(j).getValue()};
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }
        
        return new int[0];
    }
}