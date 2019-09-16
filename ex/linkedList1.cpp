#include <iostream>
using namespace std;

struct node{
    int val;
    node* next;
};

class list{
    public:
        list();
        void prepend(int val);
        void print();
        void insertAfter(int num2find, int val2insert);
        void removeAfter(int num2find);
        void print_rec();
        node* search(int num2find);
    private:
        node* head;
        node* tail;
        void print_helper(node* curNode);
};

list::list(){

    head = nullptr;
    tail = nullptr;
}

node* list::search(int num2find){
    node* curNode = head;
    while(curNode != nullptr){
        if(curNode->val == num2find){
            return curNode;
        }
        curNode = curNode->next;
    }
    return nullptr;
}

void list::print_rec(){
    print_helper(head);
    cout << endl;
}

void list::print_helper(node* curNode){
    if(curNode != nullptr){
        cout << curNode->val << " ";
        print_helper(curNode->next);
    }
}

void list::removeAfter(int num2find){
    if(head != nullptr){
        
        if(tail->val == num2find){
            
            cout << "nothing to remove\n";
        
        } else {
        
            node* w = head;
            while(w != nullptr && w->val != num2find){
            
            w = w->next;
            }

            if(w != nullptr){
                node* node2remove = w->next;
                w->next = node2remove->next;

                if(tail == node2remove)
                    tail = w;
                delete(node2remove);
              
            }

        }

    } else {
        cout << "List is empty, nothing to remove!\n";
    }

}
void list::prepend(int val){
    
    node* n = new node;
    n->val = val;
    n->next = nullptr;

    if(head == nullptr){
        head = n;
        tail = n;
    } else {
            n->next = head;
            head = n;
    }
}

void list::insertAfter(int num2find, int val2insert){
    
    node* n;

    //do this if list is empty
    if(head == nullptr){
       prepend(val2insert);
    } 
    //are we inserting at end of list?
    else if(tail->val == num2find){
        n = new node;
        n->val = val2insert;
        n->next = nullptr;

        tail->next = n;
        tail = n;
    }
    //inserting somewhere in middle
    else{
        
        node* w = search(num2find);

        if(w!=nullptr){
            n = new node;
            n->val = val2insert;
            n->next = w->next;
            w->next = n;
        }
        
    }
}

void list::print(){

    node* w = head;
    while(w != nullptr){
        cout << w->val << " ";
        w = w->next;
    }
    cout << endl;
}

int main()
{
    int i;
    list l;
    node* n = nullptr;

    for(i=0;i<10;i++){
        l.prepend(i);
        l.print();
    }

    l.insertAfter(9, 235);
    l.print();
    l.removeAfter(9);
    l.print_rec();
    n = l.search(9);
    if(n == nullptr)
        cout << "Did not find 9\n";
    else 
        cout << "Found 9\n";
    n = l.search(235);
    if(n == nullptr)
        cout << "Did not find 235\n";
    else 
        cout << "Found 235\n";

}