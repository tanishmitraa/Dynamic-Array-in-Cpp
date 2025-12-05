#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;      
    int capacity;  

public:
    // Constructor
    DynamicArray(int s) {
        cout << "Constructor called" << endl;
        size = 0;
        capacity = s;
        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {
        cout << "Destructor called" << endl;
        delete[] data;
    }

    void printInfo() {
        cout << "Size: " << size << endl;
        cout << "Capacity: " << capacity << endl;
    }

    int& operator[](int index){
        return data[index];
    }

    void resizeArray() {
        int newCapacity = capacity * 2;
        int* newData = new int[newCapacity];  

        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }

        delete[] data;

        data = newData;
        capacity = newCapacity;

        cout << "Array resized. New capacity = " << newCapacity << endl;
    }

    void push_back(int value) {
        if (size == capacity) {
            resizeArray();
        }

        data[size] = value; 
        size++;              
    }
};

int main() {
    DynamicArray arr(5);

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    cout << arr[0] << endl;   
    cout << arr[1] << endl;   
    cout << arr[2] << endl;   

    arr.printInfo();
    return 0;
}
