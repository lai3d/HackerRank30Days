//
//  main.cpp
//  Day15-LinkedList
//
//  Created by Larry Lai on 27/5/18.
//  Copyright © 2018 Larry Lai. All rights reserved.
//

#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class Solution{
public:
    Node* insert(Node *head,int data)
    {
        //Complete this method
    }
    
    void display(Node *head)
    {
        Node *start=head;
        while(start)
        {
            cout<<start->data<<" ";
            start=start->next;
        }
    }
};

int main(int argc, const char * argv[]) {
    Node* head=NULL;
    Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    mylist.display(head);
    
    return 0;
}
