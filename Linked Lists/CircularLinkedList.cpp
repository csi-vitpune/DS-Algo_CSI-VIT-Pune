#include<iostream>
using namespace std ;

typedef struct CircularLL {
    int data ;
    CircularLL *next ;
}CircularLL ;

class sys{
    public:
    CircularLL * createNewList( int newData ){
        CircularLL *node = new CircularLL;
        node -> data = newData ;
        node -> next = node ;
        return node ;
    }

    void insertElementEnd(CircularLL *head , int newData ){
        CircularLL *temp , *node = new CircularLL ;

        temp = head ;
        node -> data = newData ;
        node -> next = head ;

        while (temp -> next != head ){
            temp = temp -> next ;
        }

        temp -> next = node ;
    }

    void deleteElement(CircularLL **head , int target ){
        CircularLL *temp , *temp1 ;
        temp = *head ;
        temp1 = (*head) ->next ;
        if (temp == temp1 ){
            head == NULL ;
        }
        while (temp1 -> next != *head ){
            if (temp1 -> data == target){
                temp -> next = temp1 -> next ;
                return ;
            }
            temp = temp -> next ;
            temp1 = temp1 -> next ;
        }

        cout << "The entered data is not present in the list \n";
    }

    void insertAfter (CircularLL *head ,int target , int newData ){
        CircularLL *temp = head , *node = new CircularLL ;
        
        node -> data = newData ;

        while (temp != head ){
            if (temp -> data == target )
            break ;
            temp = temp -> next ;
        }

        node -> next = temp -> next ;
        temp -> next = node ;
    }

    void Display(CircularLL *head ){
        CircularLL *temp = head ;
        while (temp -> next  != head ){
            cout << temp -> data <<" -> " ;
            temp = temp -> next ;
        }
        cout << temp -> data << endl ;
    }
};

int main (){
    class sys s1 ;
    CircularLL *list1 , *list2;
    list1 = s1.createNewList(6) ;
    list2 = s1.createNewList(1) ;

    s1.insertElementEnd(list1 , 7);
    s1.insertElementEnd(list1 , 8);
    s1.insertElementEnd(list1 , 9);
    s1.insertElementEnd(list1 , 10);
    
    
    s1.insertElementEnd(list2 , 2);
    s1.insertElementEnd(list2 , 3);
    s1.insertElementEnd(list2 , 4);

    cout << "First list : \n" ;
    s1.Display(list1 );

    cout << "Second list : \n";
    s1.Display(list2 );

    s1.insertAfter(list1 , 8 , 888888888);
    s1.insertAfter(list1 , 2 , 222222222);

    s1.Display(list1);
    s1.Display(list2 );
    
    s1.deleteElement(&list1 , 8);
    s1.deleteElement(&list2 , 2);

    s1.Display(list1);
    s1.Display(list2 );
}