#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
long long n, m, d;

struct node {
    long long data;
    long long day = 0;
    node *next;
};
  
class list {
    Private: node *head, *tail;

    public: list() {
      head=NULL;
      tail=NULL;
    }
    
    
    
    void createnode(long long value){
        node *temp=new node;
        temp->data=value;
        temp->next=NULL;
        if(head==NULL) {
            head=temp;
            tail=temp;
            temp=NULL;
        } else {	
            tail->next=temp;
            tail=temp;
        }
    }
    
    void delete(node *nde) {
        node *current=new node;
        node *previous=new node;
        current=head;

        for(int i=1;i<pos;i++) {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
    }
}
  
 
int main() {

    cin >> n >> m >> d;

    long long ns[n], sns[n];
    unordered_map<long long, int> ds;

    for(int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        ns[i] = temp;
        sns[i] = temp;
        ds[temp] = 0;
        // cout << temp << "\n";
    }
    
    sort(sns, sns+n);
    list ls;
    for(int i = 0; i < n; i++) {
        ls.createnode(sns[i]);
    }

    
    node *nod = ls.head;
    long long v = nod.data;
    int c;
    c = 1;

    while(ls.head) {

        int cc = c;       
        if (nod == ls.tail) {
            c++;
        }

        if (nod.data >= v+d) {
            v = nod.data;
            nod.day = cc;
            cout << nod.data << " " << nod.day << "\n";
            nod = nod.next
        }

        if (!nod) {
            *nod = ls.head
        }

        
    }

    return 0;


    // do {
    //     didStore = 0;
    //     for(int i = 0; i < n; i++) {
    //         // cout << i << " ";
    //         long long temp = sns[i];

    //         if (ds[temp] == 0) {
    //             ds[temp] = c;
    //             i += d;
    //             didStore = 1;
    //         }
    //     }
    //     c++;
    //     // cout << "\n";
    // }
    // while(didStore);

    cout << c << "\n";
    for(int i = 0; i < n; i++) {
        long long temp = ns[i];
        cout << ds[temp] << " ";
    }
 
    
    return 0;
}