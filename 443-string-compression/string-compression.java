class Solution {
    public int compress(char[] chars) {
        StringBuilder sb = new StringBuilder();
    for (int i = 0; i < chars.length;) {
        char c = chars[i];
        sb.append(c);
        i++;
        int count = 1;
        while (i < chars.length && chars[i] == c) {
            i++;
            count++;
        }
        if (count > 1) {
            sb.append(count);
        }
    }
    String s = sb.toString();
    System.arraycopy(s.toCharArray(), 0, chars, 0, s.length());
    return s.length();
    }
}