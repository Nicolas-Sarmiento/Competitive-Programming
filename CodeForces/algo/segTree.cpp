#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Node{
    public:
    ll l;
    ll r;
    ll val;
    Node* left;
    Node* right;
    Node(ll l, ll r) : l(l), r(r), val(0), left(nullptr), right(nullptr) {}
    ~Node() {
        delete left;   
        delete right;  
    }
};

Node* create_node(ll l, ll r, vector<ll> &L){
    Node* node = new Node(l, r);
    if(l == r){
        node->val = L[l];
        return node;
    }
    node->left = create_node(l, (l+r)/2, L);
    node->right = create_node(((l+r)/2)+1, r, L);
    node->val = node->left->val+node->right->val;
    return node;
}

void set_node(Node* node, ll i, ll x){
    if( node->l == node->r){
        node->val = x;
        return;
    }
    if (i <= (node->l+node->r)/2){
        set_node(node->left, i, x);
    }else{
        set_node(node->right, i, x);
    }
    node->val = node->left->val+node->right->val; // max
}

ll query(Node* node, ll l, ll r){
    if (node->l == l && node->r == r){
        return node->val;
    }
    int mid = (node->l+node->r)/2;
    if (r <= mid){
        return query(node->left, l, r);
    }else if(l > mid){
        return query(node->right, l,r);
    }else{
        return query(node->left, l, mid) + query(node->right, mid+1, r); // max
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //Crear tree  root = createNode(0, n-1, vector de n)
    //Calcular operación query(l, r, root)
   
    return 0;
}