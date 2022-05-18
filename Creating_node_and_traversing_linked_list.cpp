//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma  GCC optimize ("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define   ll        long long
#define   lli       long long int
#define   ld        long double
#define   PI        2*acos(0.0)
#define   pb        push_back
#define   ppb       pop_back
#define   pf        push_front
#define   ppf       pop_front
#define   inf       1e18
#define   mod       100000007
#define   ff        first
#define   ss        second
#define   mp        make_pair
#define   vi        vector<int>
#define   si        set<int>
#define   ii        pair<int,int>
#define   all(v)    (v).begin(),(v).end()
#define   rall(v)   (v).begin(),(v).end(),greater<ll>()
#define   rall1(v)  (v).rbegin(),(v).rend()
#define   uniq(v)   (v).erase(unique(all(v)),(v).end())
#define   read(v)   for(auto &it:v) cin>>it
#define   write(v)  for(auto &it:v) cout<<it<<" "
#define   GCD(a,b)   __gcd(a,b)
#define   nl         "\n"
#define   lb         lower_bound
#define   up         upper_bound
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

struct node{
    int data;
    struct node *next;
};


void print(struct node *head){
    struct node *current=head;
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;

    }
}



int main()
{

    struct node *head=(struct node *)(malloc(sizeof(struct node)));//1000
    head->data=45;
    head->next=NULL;

    struct node *current=(struct node*)(malloc(sizeof(struct node)));//2000
    current->data=98;
    current->next=NULL;
    head->next=current;

    struct node *third=(struct node*)(malloc(sizeof(struct node)));//3000
    third->data=3;
    third->next=NULL;
    current->next=third;

    print(head);




    return 0;
}
