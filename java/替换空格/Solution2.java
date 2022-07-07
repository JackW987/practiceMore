package 替换空格;

public class Solution2 {
    public String replaceSpace(String s) {
        char[] chars =  s.toCharArray();
        int len = chars.length;
        char[] chars2 = new char[len * 3];
        int size = 0;
        for(int i=0;i<len;i++){
            if(chars[i] == ' '){
                chars2[size++] = '%';
                chars2[size++] = '2';
                chars2[size++] = '0';
            }else{
                chars2[size++] = chars[i];
            }
        }
        String res = new String(chars2,0,size);
        return res;
    }
}
