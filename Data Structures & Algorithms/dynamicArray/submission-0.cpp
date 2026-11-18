class DynamicArray {
private:
int* arr;
int capacity;
int size;

public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == capacity)
        {
            resize();
        }
        arr[size++]= n;
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        capacity = capacity*2;

        int* newarr = new int[capacity];

        for(int i=0;i<size ; i++)
        {
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
