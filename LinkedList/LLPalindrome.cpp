/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    Node* slow = head;
    stack<int> s;
    while(slow !=  NULL){
        s.push(slow->data);
        slow=slow->next;
    }
    
    while(head != NULL){
        int i=s.top();
        s.pop();
        if(i != head->data){
            return 0;
        }
        head = head->next;
    }
    return 1;
}

