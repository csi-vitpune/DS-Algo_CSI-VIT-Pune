#include<iostream>

using namespace std;

typedef struct LinkedList{
    int data ;
    LinkedList *next ;
}LinkedList ;

void Display(LinkedList *head ){
    while (head->next  !=  NULL){
        cout << head -> data << "->" ;
        head = head -> next ;
    }

    cout <<head -> data <<  endl ;
}

LinkedList * EnterData(LinkedList *List , int data ){
    LinkedList *node = new LinkedList ;
    
    node -> next = NULL;
    node -> data = data ;

    LinkedList *head = List ;
    while (head -> next != NULL){
        head = head -> next ;
    }
    head -> next = node ;
}


LinkedList * createList(int newData ){
    LinkedList *node = new LinkedList ;
    node -> data = newData ;
    node -> next = NULL;
    return node ;
}

void deleteNode(LinkedList *head , int del ){
    LinkedList *temp = head ;
    LinkedList *temp1 = head -> next ;
    while (temp1 != NULL){
        if ( temp1 -> data == del){
            temp -> next = temp1 -> next ;
            return ;
        }
        
        temp = temp -> next ;
        temp1 = temp1 -> next ;
    }

    cout << "The data to be deleted is not present in the List " << endl ;
}

int main(){
    LinkedList *List1 , *List2;
    List1 = createList(4);
    List2 = createList(0);

    EnterData(List1 , 5);
    EnterData(List1 , 6);
    EnterData(List1 , 8);
    EnterData(List1 , 7);
    EnterData(List2 , 1);
    EnterData(List2 , 2);
    EnterData(List2 , 3);
    EnterData(List2 , 69);

    cout << "The first LinkedList : "<< endl;
    Display(List1);

    cout << "The first LinkedList after deletion of node containig the digit 6 : \n";
    deleteNode(List1 , 6);
    Display(List1);

    cout << "\n THe second Linked List : " << endl ;
    Display(List2);

    return 0 ;

}