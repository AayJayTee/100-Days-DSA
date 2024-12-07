#include <iostream>
using namespace std;
#include <vector>

void push(vector<int> &stack, int e) {
    stack.push_back(e);
}

void pop(vector<int> &stack) {
    stack.pop_back();
}

void display_result(vector<int> &result) {
    cout << "NGE of array is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    vector<int> stack;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result(n, -1);
    
    for (int i = n - 1; i >= 0; i--) {
        while (!stack.empty() && stack.back() <= arr[i]) {
            pop(stack);                                      // Remove elements from the stack that are not the next greater element
        }

        
        if (!stack.empty()) {                               // If the stack is not empty, the top element is the next greater element
            result[i] = stack.back();                       // Assign the next greater element
        }

        push(stack, arr[i]);
    }
    display_result(result);

    return 0;
}
