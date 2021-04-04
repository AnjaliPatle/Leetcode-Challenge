class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    vector<int>q;
    int front=-1,end=-1;
    int size;
    MyCircularQueue(int k){
        q.resize(k);
        size=k;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(isFull())return false;
        if(isEmpty()){
            front=0;
        }
            end=(end+1)%(size);
            q[end]=value;
            return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty())return false;
        if(front==end){
            front=-1;
            end=-1;
            return true;
        }
        front=(front+1)%(size);
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(isEmpty())return -1;
        return q[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty())return -1;
        return q[end];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if(front==-1)return true;
        return false;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if(front==(end+1)%size)return true;
        return false;
    }
};
