class Solution {
    String[] map = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    public int uniqueMorseRepresentations(String[] words) {
        HashSet<String> set = new HashSet<>();
        for(String word: words){
            String code = "";
            for(int i = 0;i<word.length();i++){
                code = code+map[word.charAt(i)-97];
            }
            set.add(code);
        }
        return set.size();
    }
}