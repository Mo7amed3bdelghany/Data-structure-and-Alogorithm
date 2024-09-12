#include <bits/stdc++.h>
#include "ArrayListType.h"
using namespace std;
int main()
{
    ArrayADT<int>arr={5,8,4,1,9,0,10,8,12,7,8,4,3,2,1,1,8,9,2,2,0,4,3,8,3};
    
    cout << "Tha whole list: ";
    arr.print();
    cout<<"Tha list from postion 4 to 22 is: ";
    arr.partition(4, arr.Getlength()-3);
    cout<<"Tha Max is: "<<arr.max()<<'\n';
    cout<<"Tha Min is: "<<arr.min()<<'\n';
    cout<<"The count of 1 is: "<<arr.count(1)<<'\n';
    cout<<"The count of 4 is: "<<arr.count(4)<<'\n';
    cout<<"Tha sum is:"<<arr.sum()<<'\n';

    cout<<arr.search(21)<<'\n';
    cout<<arr.indix(8)<<'\n';

        cout<<(arr.isfull() ? "True" : "False")<<'\n';
        cout<<(arr.isempty() ? "True" : "False")<<'\n';

            cout<<"Tha size of list is: "<<arr.Getsize()<<'\n';
            cout<<"At the postion 4 the value is: "<<arr.at(4)<<'\n';

            cout << "The list before replace postion 12 with 5 is: ";
            arr.print();
            arr.replace(12,5);
            cout<<"The list after replace postion 12 with 5 is: ";
            arr.print();
            cout << '\n';

            cout << "The list before insert at indix 4 => 11 is: ";
            arr.print();
            arr.insert(4,11);
            cout << "The list after insert at indix 4 =>11 is: ";
            arr.print();
            cout << '\n';

            cout << "The list before append 5 is: ";
            arr.print();
            arr.append(5);
            cout << "The list after append 5 is: ";
            arr.print();
            cout << '\n';

            cout << "The list before remove_at indix 4 is: ";
            arr.print();
            arr.remove_at(4);
            cout << "The list after remove_at indix 4 is: ";
            arr.print();
            cout << '\n';

            cout << "The list before remove 8 is: ";
            arr.print();
            arr.remove(8);
            cout << "The list after remove 8 is: ";
            arr.print();
            cout << '\n';

            cout<<"The list before reverse is: ";
            arr.print();
            arr.reverse();
            cout<<"The list after reverse is: ";
            arr.print();
            cout << '\n';

            cout << "the list before reverse from 2 to 5 is: ";
            arr.print();
            arr.reverse(2,5);
            cout << "the list after reverse from 2 to 5 is: ";
            arr.print();
            cout << '\n';

            cout<<"The list before removeDubble is: ";
            arr.print();
            arr.removeDubble();
            cout<<"The list after removeDubble is: ";
            arr.print();
            cout << '\n';


    return 0;
}