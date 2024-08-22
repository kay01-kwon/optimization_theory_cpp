#include "scoped_ptr.h"
#include "minimizer.h"

namespace custom_nls{
    struct Functor{
        Functor();
        ~Functor();
    };
}

using custom_nls::Functor;
using custom_nls::Minimizer;
using custom_nls::MinimizerType;
using custom_nls::scoped_ptr;



int main(int argc, char** argv)
{   
    // scoped_ptr<Minimizer> minimizer(Minimizer::Create(MinimizerType::GaussNewton));

    scoped_ptr<Minimizer<Functor>> minimizer(Minimizer<Functor>::Create(MinimizerType::GaussNewton));

    return 0;
}