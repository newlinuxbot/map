#ifndef Pair_HPP
# define Pair_HPP

# include <iostream>

namespace ft
{
    template<class U, class V>
    class Pair
    {
        public:
            U first;
            V second;
            typedef U first_type;
            typedef V second_type;
        public: 
            Pair() : first(0), second(0) {};

            Pair (const Pair<U,V>& pr)
            {
                first = pr.first;
                second = pr.second;
            }

            Pair (const first_type& a, const second_type& b)
            {
                first = a;
                second = b;
            }

            Pair & operator=(const Pair &assign)
            {
                first = assign.first;
                second = assign.second;
                return *this;
            };

            bool operator==(const Pair& rhs ){
            if (first == rhs.first)
                return second == rhs.second;
            else 
                return first == rhs.first;
            }

            bool operator!=(const Pair& rhs ){
                if (first == rhs.first)
                    return second != rhs.second;
                else 
                    return first != rhs.first;
            }

            bool operator<(const Pair& rhs ){
                if (first == rhs.first)
                    return second < rhs.second;
                else 
                    return first < rhs.first;
            }

            bool operator<=(const Pair& rhs ){
                if (first == rhs.first)
                    return second <= rhs.second;
                else 
                    return first <= rhs.first;
            }

            bool operator>(const Pair& rhs ){
                if (first == rhs.first)
                    return second > rhs.second;
                else 
                    return first > rhs.first;
            }

            bool operator>=(const Pair& rhs ){
                if (first == rhs.first)
                    return second >= rhs.second;
                else 
                    return first >= rhs.first;
            }
            
        private:
            
    };

    template <class T1,class T2>
    Pair<T1,T2> make_pair (T1 x, T2 y)
    {
        return ( Pair<T1,T2>(x,y) );
    }
}

#endif