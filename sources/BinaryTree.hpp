#include <iostream>
#include <list>
#include <map>

using namespace std;
namespace ariel
{

    template <typename T>
    class BinaryTree
    {
        //using iterator = typename std::list<T>::iterator;

    protected:
        struct Node
        {
            Node *left;
            Node *right;
            T value;
            public:
            Node(T val) : value(val), left(nullptr), right(nullptr) {}
            Node(T val, Node *l, Node *r) : value(val), left(l), right(r) {}
        };
        Node *root;
        class iterator
        {
        protected:
            Node *current_node;

        public:
            iterator(Node *ptr = nullptr)
                : current_node(ptr)
            {
            }

            T &operator*() const
            {
                return current_node->value;
            }

            T *operator->() const
            {
                return &(current_node->value);
            }

            bool &operator==(const iterator &other) const {
              return  current_node==other.current_node;
            }
            bool operator!=(const iterator &other) const
            {
                return current_node != other.current_node;
            }

            iterator &operator++()
            {
        
                return *this;
            }

            const iterator operator++(int)
            {
                iterator tmp = *this;
                return tmp;
            }



        }; 

    public:
        BinaryTree()
        {
            root = nullptr;
        }
        ~BinaryTree(){};
        BinaryTree<T> &add_root(T root) { return *this; }

        BinaryTree<T> &add_left(T val, T node) { return *this; }

        BinaryTree<T> &add_right(T val, T node) { return *this; }

        iterator begin_postorder(){
             return iterator{root};
             }
        iterator end_postorder(){ 
            return iterator{root};
            }

        iterator begin_preorder(){ 
            return iterator{root};
        }
        iterator end_preorder(){
            return iterator{root};
        }

        iterator begin_inorder(){
            return iterator{root};
        }
        iterator end_inorder(){
            return iterator{root};
        }

        iterator begin(){
            return iterator{root};
        }
        iterator end(){
            return iterator{root};
        }

        friend std::ostream &operator<<(std::ostream &output, const BinaryTree<T> &bt)
        {
            return output;
        }
    };
};