package 替换空格;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public String replaceSpace(String s) {
        char[] chars = s.toCharArray();
        char[] chars2 = new char[30000];
        StringBuffer str = new StringBuffer("");
        int count = 0;
        for(int i=0;i<chars.length;i++){
            if(' '==(chars[i])){
                str.append("%20");
            }else{
                str.append(chars[i]);
            }
        }
        return String.valueOf(str);
    }
}
