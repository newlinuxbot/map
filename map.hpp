#ifndef MAP_HPP
# define MAP_HPP

# include <iostream>

using namespace std;

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

            map(const map &copy){};
            
            ~map(){};
            
            map & operator=(const map &assign){};
            
        private:
            bst *root;
    };
}

#endif