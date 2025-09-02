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
#include <iostream>
using namespace std;

int main()
{
   cout<<"marwan" ;
   cout<<"suiii";
    int x = 5;
    int y = 10;
    cout << "result " << x + y;
    return 0;
}



