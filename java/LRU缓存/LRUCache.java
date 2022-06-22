package LRU缓存;

import java.util.*;

class LRUCache {
    private int capacity;
    private int size;
    private BiDrLinkedNode head;
    private BiDrLinkedNode tail;
    private Map<Integer,BiDrLinkedNode> map = new HashMap<>();
    class BiDrLinkedNode{
        int key;
        int value;
        BiDrLinkedNode prev;
        BiDrLinkedNode next;
        public BiDrLinkedNode(){}
        public BiDrLinkedNode(int _key,int _value){
            this.key = _key;
            this.value = _value;
        }
    }
    public LRUCache(){}
    public LRUCache(int capacity) {
        this.capacity = capacity;
        this.head = new BiDrLinkedNode();
        this.tail = new BiDrLinkedNode();
        head.next = tail;
        tail.prev = head;
    }

    public int get(int key) {
        BiDrLinkedNode node = map.get(key);
        if(node==null){
            return -1;
        }else{
            removeNode(node);
            addToHead(node);
            return node.value;
        }
    }

    public void put(int key, int value) {
        BiDrLinkedNode node_add = new BiDrLinkedNode(key,value);
        BiDrLinkedNode node = map.get(key);
        // 判断是否存在当前节点
        if(node!=null){
            removeNode(node);
            addToHead(node_add);
            map.remove(key);
            map.put(key,node_add);
        }else{
            addToHead(node_add);
            map.put(key,node_add);
            if(map.size()>this.capacity){
                BiDrLinkedNode remove_node = removeTail();
                map.remove(remove_node.key);
            }
        }
    }
    public void addToHead(BiDrLinkedNode node){
        head.next.prev = node;
        node.next = head.next;
        node.prev = head;
        head.next = node;
    }
    public void removeNode(BiDrLinkedNode node){
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }
    public BiDrLinkedNode removeTail(){
        BiDrLinkedNode node = tail.prev;
        removeNode(node);
        return node;
    }
}
