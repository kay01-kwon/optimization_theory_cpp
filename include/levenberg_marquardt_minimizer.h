#ifndef LEVENBERG_MARQUARDT_MINIMIZER_H_
#define LEVENBERG_MARQUARDT_MINIMIZER_H_

#include "minimizer.h"

namespace custom_nls {

    template <typename FunctorType>
    class LevenbergMarquardtMinimizer : public Minimizer<FunctorType>{

        public:

        LevenbergMarquardtMinimizer()
        {
            cout << "LevenbergMarquardtMinimizer constructor" << endl;
        }

        virtual ~LevenbergMarquardtMinimizer()
        {
            cout << "LevenbergMarquardtMinimizer destructor" << endl;
        }

        virtual void minimize(){
            cout << "LevenbergMarquardtMinimizer minimize" << endl;
        }
    };
}


#endif  // LEVENBERG_MARQUARDT_H_