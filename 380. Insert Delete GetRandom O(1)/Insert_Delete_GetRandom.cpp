class RandomizedSet {
public:
    unordered_map<int, int> m;
    vector<int> nums;

    RandomizedSet() {

    }

    bool insert(int val) {
        if (m.count(val)) return false;
        m[val] = nums.size();
        nums.push_back(val);
        return true;
    }

    bool remove(int val) {
        if (m.count(val)) {
            int index = m[val];
            if (index != nums.size() - 1) {
                nums[index] = nums.back();
                m[nums.back()] = index;
            }
            nums.pop_back();
            m.erase(val);
            return true;
        } else {
            return false;
        }
    }

    int getRandom() {
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
