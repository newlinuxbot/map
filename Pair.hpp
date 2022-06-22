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
                first = (U)pr.first;
                second = (V)pr.second;
            }

            Pair (const first_type& a, const second_type& b)
            {
                first = (U)a;
                second = (V)b;
            }

            Pair & operator=(const Pair &assign)
            {
                first = (U)assign.first;
                second = (V)assign.second;
                return *this;
            };

            template<typename U1, typename U2>
            Pair& operator=( const Pair<U1, U2>& p )
            {
                first = U(p.first);
                second = V(p.second);
                return *this;
            }      

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