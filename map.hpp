#ifndef MAP_HPP
# define MAP_HPP

# include <iostream>
# include "iterator.hpp"

using namespace std;

/*
    implement std::pair
    implement std::make pair
    implement iterator
    implement reverse iterator

*/

namespace ft
{
    template < class Key,                               // map::key_type
           class T,                                       // map::mapped_type
           class Compare = std::less<Key>,                     // map::key_compare
           class Alloc = std::allocator<std::pair<const Key,T> >    // map::allocator_type
           > 
    class map
    {
        public:
            typedef std::less<Key> key_compare;
            typedef std::allocator<std::pair<const Key,T> > allocator_type ;  
        public:

            struct bst
            {
                bst *left;
                bst *right;
                Key key;
                T value;
            };

            bst* createNode()
            {
                bst* tmp = new bst;
                tmp->left = NULL;
                tmp->right = NULL;
                return tmp;
            }
            bst* createNode(Key key, T value)
            {
                bst* tmp = new bst;
                tmp->key = key;
                tmp->value = value;
                tmp->left = NULL;
                tmp->right = NULL;
                return tmp;
            }
        public:

            explicit map (const key_compare& comp = key_compare(),
              const allocator_type& alloc = allocator_type())
            {
                root = createNode();
                cout << "constructor";
            }

            template <class Iterator>
            map (Iterator first, Iterator last,
                const key_compare& comp = key_compare(),
                const allocator_type& alloc = allocator_type())
            {
                cout << "Another constructor";
            }

            map(const map &copy)
            {
                root = copy.root;
            }
            
            ~map()
            {
                delete root;
            }
            
            map & operator=(const map &assign)
            {
                root = assign.root;
                return *this;
            }
            
        private:
            bst *root;
    };
}

#endif