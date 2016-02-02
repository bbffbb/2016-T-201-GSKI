#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList()                   // Constructor
{
    header == NULL;
}
template <class T>
LinkedList<T>::LinkedList(LinkedList<T>& lis) // Copy constructor;
{

}
template <class T>
LinkedList<T>::~LinkedList()                  // Destructor
{

}
template <class T>
void LinkedList<T>::next()                // Moves the current node one step right
{

}
template <class T>
void LinkedList<T>::prev()                // Moves the current node one step left
{

}
template <class T>
void LinkedList<T>:: moveToStart()         // Moves the current node to the start of the list
{

}
template <class T>
void LinkedList<T>:: moveToEnd()           // Moves the current node past the last node of the list
{

}
template <class T>
void LinkedList<T>:: moveToPos(int pos)    // Moves the current node to the one at pos
{

}
template <class T>
int LinkedList<T>::length() const         // Returns the current length of the list
{
    Node<T>* tmp = header;
    int count = 0;
    if(header == NULL)
    {
        return count;
    }
}
template <class T>
T LinkedList<T>::value() const            // Returns the element of the current node
{

}
template <class T>
bool LinkedList<T>:: empty() const         // Returns true if the list is empty, else false
{

}
template <class T>
void LinkedList<T>:: append (T elem)       // Appends an element at the end of the list
{

}
template <class T>
void LinkedList<T>:: insert (const T& elem)// Inserts an element before the current node
{

}
template <class T>
T LinkedList<T>:: remove()                 // Removes the current node and returns its element
{

}
template <class T>
void LinkedList<T>::clear()               // Clears the contents of the list
{

}
template <class T>
Node<T>* LinkedList<T>:: end() const           // Returns the node representing the end of the list
{

}
template <class T>
Node<T>* LinkedList<T>::getCurrNode() const   // Returns the current node
{

}

template <class T>
void LinkedList<T>::removeAll()              // Clears the contents of the list
{

}
