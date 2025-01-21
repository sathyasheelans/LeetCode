class LRUCache {
    int capacity;
    list<pair<int,int>> dll;
    unordered_map<int, list<pair<int,int>>::iterator> umap;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        
    }
    
    int get(int key) {

        if(umap.find(key)==umap.end()){
            return -1;
        }
        dll.splice(dll.begin(),dll,umap[key]);
        return umap[key]->second;
        
    }
    
    void put(int key, int value) {
        if(get(key)!=-1){
            umap[key]->second=value;
            return;
        }
        if(dll.size() == capacity)
        {
            int lastkey = dll.back().first;
            dll.pop_back();
            umap.erase(lastkey);
        }
        dll.push_front({key,value});
        umap[key]= dll.begin();

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */