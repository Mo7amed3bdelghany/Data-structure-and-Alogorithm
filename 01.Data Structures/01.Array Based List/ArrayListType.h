#pragma once
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class T>
class ArrayADT
{
    T *list;
    int MaxSize, length;

public:
    ArrayADT();
    ArrayADT(int);
    ArrayADT(initializer_list<T> elements);
    ArrayADT(ArrayADT<T> &copy);
    const ArrayADT<T>& operator=(const ArrayADT<T> &);

    ~ArrayADT();

    T max();
    T min();
    bool isfull() const;
    bool isempty() const;
    int Getlength() const;
    int Getsize() const;
    void print() const;
    void clear();
    void removeDubble();
    void reverse();
    void reverse(int l, int r);
    void append(T item);
    void insert(int indix, T item);
    T at(int indix);
    void replace(int indix, T item);
    void remove_at(int indix);
    void remove(T item);
    void partition(int l, int r);
    int count(T item);
    int search(T item);
    int indix(T item);
    ll sum();
    private:
    void Big_list();

};

    template <class T>
    ArrayADT<T>::ArrayADT()
    {
        MaxSize = 0, length = 0;
        list = new T[MaxSize];
        assert(list != NULL); // if unable to allocate memory space, terminate the program.
    }
    template <class T>
    ArrayADT<T>::ArrayADT(int size)
    {
        MaxSize = size, length = 0;
        list = new T[MaxSize];
        assert(list != NULL); // if unable to allocate memory space, terminate the program.
    }

    template <class T>
    ArrayADT<T>::ArrayADT(initializer_list<T> elements)
    {
        MaxSize = elements.size();
        length = MaxSize;
        list = new T[MaxSize];
        assert(list != NULL); // if unable to allocate memory space, terminate the program.
        
        int i = 0;
        for(auto it:elements){
            list[i++]=it;
        }
    }

    template <class T>
    ArrayADT<T>::ArrayADT(ArrayADT<T> &copy)
    {
        MaxSize = copy.MaxSize;
        length = copy.length;
        list = new T[MaxSize];
        assert(list != NULL); // if unable to allocate memory space, terminate the program.

        for(int i = 0; i<length;i++){
            list[i] = copy.list[i];
        }
        
    }

    template <class T>
    const ArrayADT<T>& ArrayADT<T>::operator=(const ArrayADT<T>& copy){
        if (this != &copy){
            delete []list;
            MaxSize = copy.MaxSize;
            length = copy.length;
            list = new T[MaxSize];
            assert(list != NULL); // if unable to allocate memory space, terminate the program.

            for(int i=0;i<length;i++){
                list[i] = copy.list[i];
            }
        }
        return *this;
    }


    template <class T>
    ArrayADT<T>::~ArrayADT(){
        delete[] list;
    }
    template <class T>
    T ArrayADT<T>::max()
    {
        T mx = list[0];
        for (int i = 0; i < length; i++)
        {
            if (mx < list[i])
                mx = list[i];
        }
        return mx;
    }

    template <class T>
    T ArrayADT<T>::min()
    {
        T mn = list[0];
        for (int i = 0; i < length; i++)
        {
            if (mn > list[i])
                mn = list[i];
        }
        return mn;
    }

    template <class T>
    bool ArrayADT<T>::isfull() const
    {
        return MaxSize == length;
    }

    template <class T>
    bool ArrayADT<T>::isempty() const
    {
        return length == 0;
    }

    template <class T>
    int ArrayADT<T>::Getlength() const
    {
        return length;
    }

    template <class T>
    int ArrayADT<T>::Getsize() const
    {
        return MaxSize;
    }

    template <class T>
    void ArrayADT<T>::print() const
    {
        for (int i = 0; i < length; i++)
        {
            cout << list[i] << ' ';
        }
        cout << '\n';
    }

    template <class T>
    void ArrayADT<T>::clear()
    {
        delete[] list;
        list = nullptr;
        length = MaxSize = 0;
    }

    template <class T>
    void ArrayADT<T>::Big_list()
    {
        MaxSize *= 2;
        T *New_list = new T[MaxSize];
        for (int i = 0; i < length; i++)
        {
            New_list[i] = list[i];
        }
        delete []list;
        list = New_list;
    }

    template <class T>
    void ArrayADT<T>::removeDubble()
    {
        if (isempty())
            return;
        T *New_list = new T[length];
        T freq[max() + 1] = {0};
        int j = 0;
        for (int i = 0; i < length; i++)
        {
            if (freq[list[i]] == 0)
            {
                New_list[j++] = list[i];
            }
            freq[list[i]]++;
        }
        clear();
        list = New_list;
        length = j;
    }

    template <class T>
    void ArrayADT<T>::reverse()
    {
        for (int i = 0; i < length / 2; i++)
        {
            T temp = list[i];
            list[i] = list[length - 1 - i];
            list[length - 1 - i] = temp;
        }
    }

    template <class T>
    void ArrayADT<T>::append(T item)
    {
        if (isfull())
        {
            Big_list();
        }
        list[length++] = item;
    }

    template <class T>
    T ArrayADT<T>::at(int indix)
    {
        if (indix < 0 || indix >= MaxSize)
        {
            cout << "Invalid Indix\n";
            return T();
        }
        else if (isempty())
        {
            cout << "The List Is Empty\n";
            return T();
        }
        return list[indix];
    }

    template <class T>
    void ArrayADT<T>::insert(int indix, T item)
    {

        if (indix < 0 || indix >= MaxSize)
        {
            cout << "Invalid Indix\n";
            return ;
        }
        else if (isfull())
            Big_list();
        for (int i = length; i > indix; i--)
        {
            list[i] = list[i - 1];
        }
        list[indix] = item;
        length++;
    }

    template <class T>
    void ArrayADT<T>::replace(int indix, T item)
    {
        if (indix < 0 || indix >= MaxSize)
        {
            cout << "Invalid Indix\n";
            return ;
        }
        else if (isempty())
        {
            cout << "The List Is Empty\n";
            return;
        }
        list[indix] = item;
    }

    template <class T>
    int ArrayADT<T>::count(T item)
    {
        int cnt = 0;
        for (int i = 0; i < length; i++)
        {
            if (list[i] == item)
                cnt++;
        }
        return cnt;
    }

    template <class T>
    void ArrayADT<T>::reverse(int l, int r)
    {
        while (l < r)
        {
            T tamp = list[l];
            list[l] = list[r];
            list[r] = tamp;
            l++, r--;
        }
    }

    template <class T>
    ll ArrayADT<T>::sum()
    {
        ll sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += list[i];
        }
        return sum;
    }

    template <class T>
    void ArrayADT<T>::partition(int l, int r)
    {
        for (int i = l; i <= r; i++)
        {
            cout << list[i] << ' ';
        }
        cout << '\n';
    }

    template <class T>
    void ArrayADT<T>::remove_at(int indix){
        if(isempty()){
            cout<<"Sorry!! the list is empty you cant remove the item\n";
            return ;
        }
        for (int i=indix;i<length-1;i++){
            list[i] = list[i + 1];
        }
        length--;
    }

    template <class T>
    int ArrayADT<T>::search(T item){
        for(int i=0;i<length;i++){
            if(list[i]==item)
                return i;
        }
        return -1;
    }

    template <class T>
    void ArrayADT<T>::remove(T item){
        int indix=search(item);
        if(search(indix)==-1){
            cout<<"Sorry!! the item is not in the list\n";
            return ;
        }
        remove_at(indix);
    }

    template <class T>
    int ArrayADT<T>::indix(T item){
        return search(item);
    }
