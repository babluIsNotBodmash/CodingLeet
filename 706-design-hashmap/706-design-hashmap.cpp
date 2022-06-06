class MyHashMap {
public:
    unordered_map<int,int>ans;
    MyHashMap() {
        
        
    }
    
    void put(int key, int value) {
        ans[key]=value;
    }
    
    int get(int key) {
        // return ans[key];
        for(auto &i:ans)
        {
            if(i.first==key)
                return i.second;
        }
        return -1;
    }
    
    void remove(int key) {
        ans.erase(key);
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */