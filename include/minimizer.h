#ifndef MINIMIZER_H_
#define MINIMIZER_H_

#include <iostream>

using std::cout;
using std::endl;

namespace custom_nls {

    enum class MinimizerType {
        GaussNewton,
        LevenbergMarquardt
    };

    template <typename FunctorType>
    class Minimizer{
        public:

            Minimizer()
            {
                cout << "Minimizer constructor" << endl;
            }

            virtual ~Minimizer(){
                cout << "Minimizer destructor" << endl;
            }

            virtual void minimize() = 0;

            static Minimizer* Create(const MinimizerType minimizer_type);

        protected:

    };
}


#include "gauss_newton_minimizer.h"
#include "levenberg_marquardt_minimizer.h"

namespace custom_nls {
    
    template <typename FunctorType>
    Minimizer<FunctorType>* Minimizer<FunctorType>::Create(const MinimizerType minimizer_type)
    {
        switch(minimizer_type)
        {
            case MinimizerType::GaussNewton:
                return new GaussNewtonMinimizer<FunctorType>();
                break;
            case MinimizerType::LevenbergMarquardt:
                return new LevenbergMarquardtMinimizer<FunctorType>();
                break;
            default:
                cout << "Invalid minimizer type" << endl;
                return nullptr;
                break;
        }
    }
}


#endif // MINIMIZER_H_