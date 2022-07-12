package 用两个栈实现队列;

import java.util.Stack;

// 队列
public class CQueue {
    private Stack<Integer> pre_stack;
    private Stack<Integer> aft_stack;
    public CQueue() {
        pre_stack = new Stack<>();
        aft_stack = new Stack<>();
    }
    public void appendTail(int value) {
        pre_stack.push(value);
    }

    public int deleteHead() {
        if(pre_stack.size()==0 && aft_stack.size()==0){
            return -1;
        }
        if(aft_stack.size()!=0){
            return aft_stack.pop();
        }
        else{
            int stackLen = pre_stack.size();
            for(int i=0;i<stackLen;i++){
                aft_stack.push(pre_stack.pop());
            }
        }
        return aft_stack.pop();
    }
}
