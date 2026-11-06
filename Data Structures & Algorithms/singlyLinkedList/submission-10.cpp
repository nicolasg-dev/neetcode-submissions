class LinkedList {
public:

    typedef struct No{
        int value;
        struct No* prox;
    } No;

    int size = 0;
    No* list = nullptr;

    LinkedList() {
        list = nullptr;
        size = 0;
    }

    int get(int index) {
        int i = 0;
        No* ptr = list;
        if (ptr == nullptr) return -1;

        while(ptr != nullptr){
            if (i == index) return ptr->value;
            ptr = ptr->prox;
            i++;
        }
        
        return -1;
    }

    void insertHead(int val) {
        No* novo = (No*) malloc(sizeof(No));
        novo->value = val;
        novo->prox = list;
        list = novo;
        size++;
    }
    
    void insertTail(int val) {
        No* novo = (No*) malloc(sizeof(No));
        novo->value = val;
        novo->prox = nullptr;
        if (list == nullptr){
            novo->value = val;
            list = novo;
            novo->prox = nullptr;
            size++;
            return; // Claude
        }

        No* ptr = list;

        while(ptr->prox != nullptr){
            ptr = ptr->prox;
        }
        size++;
        ptr->prox = novo;
    }

    bool remove(int index) {
        int i = 0;
        No* ptr = list;
        No* ant = nullptr;
        if (ptr == nullptr) return false;

        while(ptr != nullptr){
            if (i == index){
                if (ant == nullptr){ // Esse if a IA ajudou
                    list = ptr->prox;
                    free(ptr);
                    size--;
                } else{
                    ant->prox = ptr->prox;
                    free(ptr);
                    size--;
                }
                return true;
            }
            ant = ptr;
            ptr = ptr->prox;
            i++;
        }
        
        return false;        

    }

    vector<int> getValues() {
        No* ptr = list;
        if (ptr == nullptr) return {};

        vector<int> v;

        while(ptr != nullptr){
            v.push_back(ptr->value);
            ptr = ptr->prox;
        }
        return v;
    }
};
