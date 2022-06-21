package LRU缓存;

import java.util.*;

public class LRUCache {
    private Map<Integer,Integer> map = new HashMap();
    private int capacity;
    private List<Integer> queue = new LinkedList<>();
    public LRUCache(int capacity) {
        this.capacity = capacity;
    }

    public int get(int key) {
        if (map.containsKey(key)){
            Integer value = map.get(key);
            if(queue.contains(key)){
                queue.remove((Integer) key);
                queue.add(key);
            }
            return value;
        }else{
            return -1;
        }
    }

    public void put(int key, int value) {
        // 先将数据保存到map集合中
        // 更新队列操作顺序
        map.put(key,value);
        if(queue.contains(key)){
            queue.remove((Integer) key);
            queue.add(key);
        }else{
            queue.add(key);
        }
        //　判断是否需要进行LRU操作
        if(map.size()>this.capacity){
            // LRU 淘汰算法
            Integer poll = queue.remove(0);
            boolean b = map.containsKey(poll);
            if(b){
                map.remove(poll);
            }
        }
    }
}
