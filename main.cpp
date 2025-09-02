/*#include <iostream>
using namespace std;
class Node {
public :
    int value ;
    Node* next = NULL ;
    Node* prev = NULL ;
};
class DLL{
Node* head = NULL ;
Node* tail = NULL ;
public :
    void addFirst(int value){
     Node * n = new Node ();
     n->value = value ;
     if(head==NULL){
        head = n  ;
        tail = n ;
     }
     else {
        n->next = head ;
        head->prev = n;
        head = n;
     }
    }

     void addLast(int value){
     Node * n = new Node ();
     n->value = value ;
     if(head==NULL){
        head = n  ;
        tail = n ;
     }
     else {
        n->prev = tail ;
        tail->next = n ;
        tail = n;
     }
    }

void removeFirst(){


}

    void print (){
    Node * p = head ;
    while (p!=NULL){
        cout<<p->value<<"->";
        p=p->next ;

    }
     cout<<"NULL"<<endl;
    }

};
int main()
{


    return 0;
}*/
//==============================================
//Assignment 11
//Q1
#include <iostream>
#include <forward_list>
using namespace std;

void insertAtPosition(forward_list<int>& flist, int value, int position) {

    if (position == 1) {
        flist.push_front(value);
        return;
    }

    auto it = flist.before_begin();
    int currentPosition = 1;


    for (int i = 1; i < position - 1; ++i) {
        if (next(it) == flist.end()) {
            cout << "Position out of bounds." << endl;
            return;
        }
        ++it;
    }


    flist.insert_after(it, value);
}


void printList(const forward_list<int>& flist) {
    for (int val : flist) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {


    return 0;
}







