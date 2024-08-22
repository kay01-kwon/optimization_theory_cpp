#ifndef GAUSS_NEWTON_MINIMIZER_H_
#define GAUSS_NEWTON_MINIMIZER_H_

#include "minimizer.h"

namespace custom_nls {

    template <typename FunctorType>
    class GaussNewtonMinimizer : public Minimizer<FunctorType>{

        public:

        GaussNewtonMinimizer()
        {
            cout << "GaussNewtonMinimizer constructor" << endl;
        }

        virtual ~GaussNewtonMinimizer()
        {
            cout << "GaussNewtonMinimizer destructor" << endl;
        }

        virtual void minimize()
        {
            cout << "GaussNewtonMinimizer minimize" << endl;
        }
    };
}


#endif // GAUSS_NEWTON_H_