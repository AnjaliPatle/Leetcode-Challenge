class MyHashMap {
public:
    /** Initialize your data structure here. */
    int m[1000001];
    MyHashMap() {
        memset(m,-1,sizeof(m));
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        m[key]=value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return m[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        m[key]=-1;
    }
};
