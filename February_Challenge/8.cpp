
class PeekingIterator : public Iterator {
private:
    int next_val;
    bool has_next_val;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    has_next_val=Iterator::hasNext();
        if(has_next_val)
            next_val=Iterator::next();
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return next_val;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int temp=next_val;
        has_next_val=Iterator::hasNext();
        if(has_next_val)
            next_val=Iterator::next();
        return temp;
	}
	
	bool hasNext() const {
	    return has_next_val;
	}
};
