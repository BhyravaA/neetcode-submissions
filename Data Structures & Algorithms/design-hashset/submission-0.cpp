class MyHashSet {
vector<bool> hash;
public:
    MyHashSet() {
        hash.resize(1000001,false);
    }
    
    void add(int key) {
        if(hash[key] == true)return;
        else
        {
            hash[key] = true;
        }
    }
    
    void remove(int key) {
        hash[key] = false;
    }
    
    bool contains(int key) {
        if(hash[key] == true)return true;
        else 
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */