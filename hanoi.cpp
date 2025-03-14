#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void Hanoi(int n, stack<int> &A, stack<int> &B, stack<int> &C){
     if(n == 1){
        C.push(A.top()); // Move top disk from A to C
        cout << "Move " << A.top() << " from A to C" << endl;
        A.pop(); // delete top disk from A
        B.push(C.top()); // Move top disk from C to B
        cout << "Move " << C.top() << " from C to B" << endl;
        C.pop(); // delete top disk from C
        return;
     }else{
        // Move n-1 disk from A to B (C is help peg)
        Hanoi(n-1, A, B, C);

        // Move top disk from A to C
        C.push(A.top()); 
        cout << "Move " << A.top() << " from A to C" << endl;
        A.pop(); // delete top disk from A

        // Move n-1 disk from B to A (C is help peg)
        Hanoi(n-1, B, A, C);

        // Move top disk from C to B
        B.push(C.top()); 
        cout << "Move " << C.top() << " from C to B" << endl;
        C.pop(); // delete top disk from C
        
        // Move n-1 disk from A to B (C is help peg)
        Hanoi(n-1, A, B, C);
     }
}
int main(){
    int n; // number of disks
    stack<int> A, B, C; // peg A, B, C
    cout << "Please enter number of disks: ";
    cin >> n;
    if(n <= 0)
        throw invalid_argument("received zero or negative value! \nnumber of disks must be positive..\n");
    for(int i = n; i >= 1; i--)
        A.push(i);
    Hanoi(n, A, B, C);
}