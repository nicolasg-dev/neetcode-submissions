class DynamicArray {
public:
    int* array = nullptr;
    int cap = 0;
    int size = 0;

    DynamicArray(int capacity) {
        cap = capacity;
        array = (int*) malloc(cap * sizeof(int));
    }


    int get(int i) {
        return array[i];
    }

    void set(int i, int n) {
        array[i] = n;
    }

    void pushback(int n) {
        if (size == cap) resize();
        array[size] = n;
        size++;
    }

    int popback() {
        int popped = array[size-1];
        size--;
        return popped;
    }

    void resize() {
        cap = 2*cap;
        array = (int*) realloc(array, cap * sizeof(int));
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }
};
