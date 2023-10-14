#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

 #include <iostream>
 #include <stack>




// class MutantStack : public std::stack<int> {
// 	public:
// 	MutantStack();
// 	~MutantStack();
// 	MutantStack(const MutantStack& src);
// 	MutantStack& operator=(const MutantStack& src);
//     // typedef _Container                               container_type;
//     typedef typename container_type::value_type      value_type;
//     typedef typename container_type::reference       reference;
//     typedef typename container_type::const_reference const_reference;
//     typedef typename container_type::size_type       size_type;
//     // static_assert((is_same<_Tp, value_type>::value), "" );

// };

template<typename T>
class MutantStack
: public std::stack<T>
{
    using std::stack<T>::c;

    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& src);
        MutantStack& operator=(const MutantStack& src);

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::iterator const_iterator;
        typedef typename std::stack<T>::container_type::iterator const_reverse_iterator;


        // expose just the iterators of the underlying container
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;
        reverse_iterator rbegin();
        reverse_iterator rend();
        const_reverse_iterator rbegin() const;
        const_reverse_iterator rend() const;
};

# include "MutantStack.tpp"
#endif
