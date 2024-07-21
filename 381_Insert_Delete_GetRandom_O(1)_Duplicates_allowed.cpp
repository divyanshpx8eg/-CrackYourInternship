//381. Insert Delete GetRandom O(1) - Duplicates allowed

#include<bits/stdc++.h>
using namespace std;


class RandomizedCollection {
public:

    // here in this map values are stored in first and 
    // set of indices on which value are present (set stores indices)
    unordered_map<int ,unordered_set<int>> mp;


    // vector will store the values and also duplicate because for we need random of total (means including duplicates) 
    vector<int> vec;

    
    RandomizedCollection() {

        // This is for rand() function
        srand(std::time(nullptr));
    }
    
    bool insert(int val) {

        // notPresent is for returning bool for insert function
        bool notPresent = mp[val].empty();

        // inserting the VAL in map 
        mp[val].insert(vec.size());
        //inserting VAL in vector
        vec.push_back(val);


        return notPresent;
    }
    
    bool remove(int val) {
        
        //if the set of that VAL is empty means no element is available we will return false
        if( mp[val].empty()){
            return false;
        }


        // it is the VAL's index
        int removeIndex=*mp[val].begin();

        // this index is getting removed from the set of VAL
        mp[val].erase(removeIndex);

        //For deletion in vector O(1) we need to swap that element with last one and then pop it But here while swapping the last element's value and index is changed so it should also be taken care
        int lastVal=vec.back();
        swap(vec[removeIndex] , vec.back());
        vec.pop_back();

            // Due to swapping the change in last element is taken care here.
            mp[lastVal].insert(removeIndex);
            mp[lastVal].erase(vec.size());
        
        
        return true;

    }
    
    int getRandom() {
        
        return  vec[rand() % vec.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
