

#include <iostream>
#include <vector>

using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 // A simple C++ program for traversal of a linked list

int removeDuplicates(vector<int>& nums) {
    int previous=nums.at(0);
    int counter=0;
    for(int i=1;i<nums.size();i++){
        if(nums.size()>i && previous==nums.at(i)){
            counter+=1;
            nums.erase(nums.begin()+i-1);
            i--;
        }
        else{

            if(nums.size()>i)
                previous=nums.at(i);
        }
    }
    return nums.size();
}

 void printList(ListNode* n)
 {
   cout<<endl;
     while (n != NULL) {
         cout << n->val << " ";
         n = n->next;
     }
 }

 // Driver code
 int main()
 {

    vector<int> deneme;
    deneme.push_back(1);
    deneme.push_back(1);
    deneme.push_back(2);
     cout<<endl<<removeDuplicates(deneme)<<endl;
     cout<<deneme.size();
     vector<int> deneme2;
     deneme2.push_back(0);
     deneme2.push_back(0);
     deneme2.push_back(1);
     deneme2.push_back(1);
     deneme2.push_back(1);
     deneme2.push_back(2);
     deneme2.push_back(2);
     deneme2.push_back(3);
     deneme2.push_back(3);
     deneme2.push_back(4);
     cout<<deneme2.at(0);
     cout<<endl<<removeDuplicates(deneme2)<<endl;
     cout<<deneme2.size();
     return 0;
 }

 // This is code is contributed by rathbhupendra

