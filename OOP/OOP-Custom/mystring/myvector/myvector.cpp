#pragma once

namespace std {

    template<class type>
    class myvector {    

        private:

            type* _vector;
            size_t _vecSize;
    
        public:

            myvector() = default;
    };
}