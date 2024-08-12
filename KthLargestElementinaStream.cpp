#include <queue>
#include <vector>

class KthLargest {
private:
    int k;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

public:
    KthLargest(int k, std::vector<int>& nums) : k(k) {
        for (int num : nums) {
            add(num);  // Populate the heap with initial elements
        }
    }
    
    int add(int val) {
        if (minHeap.size() < k) {
            minHeap.push(val);  // If the heap has fewer than k elements, just add the new element
        } else if (val > minHeap.top()) {
            minHeap.pop();       // Remove the smallest element in the heap
            minHeap.push(val);   // Add the new element
        }
        return minHeap.top();    // The root of the heap is the kth largest element
    }
};
