#pragma once
#include <iostream>
using namespace std;
class DynamicQ {
private:
    int front, rear, currSize;
    int maxSize;
    int* arr;

public:
    DynamicQ(int maxSize) : maxSize(maxSize), currSize(0) {
        front = -1;
        rear = -1;
        arr = new int[maxSize];
    }

    ~DynamicQ() {
        delete[] arr;
    }

    bool isempty() {
        return currSize == 0;
    }

    bool isfull() {
        return currSize == maxSize;
    }

    void insert(int a) {
        if (isfull()) {
            cout << "Queue Overflow" << endl;
            return; 
        }

        if (isempty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % maxSize;
        }
        arr[rear] = a;
        currSize++;
        cout << "Inserted: " << a << endl;
    }

    void remove() {
        if (isempty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front = (front + 1) % maxSize;
        currSize--;

        if (currSize == 0) {
            front = -1;
            rear = -1;
        }
    }

    int size() {
        return currSize;
    }
};

