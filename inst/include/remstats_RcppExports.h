// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_remstats_RCPPEXPORTS_H_GEN_
#define RCPP_remstats_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace remstats {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("remstats", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("remstats", "_remstats_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in remstats");
            }
        }
    }

    inline arma::cube compute_stats(const arma::vec& effects, const arma::mat& edgelist, const arma::mat& riskset, int start, int stop, const Rcpp::List& values, const arma::vec& scaling, const arma::vec& memory_value, const arma::vec& with_type, const arma::mat& event_weights, const arma::vec& equal_val) {
        typedef SEXP(*Ptr_compute_stats)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_compute_stats p_compute_stats = NULL;
        if (p_compute_stats == NULL) {
            validateSignature("arma::cube(*compute_stats)(const arma::vec&,const arma::mat&,const arma::mat&,int,int,const Rcpp::List&,const arma::vec&,const arma::vec&,const arma::vec&,const arma::mat&,const arma::vec&)");
            p_compute_stats = (Ptr_compute_stats)R_GetCCallable("remstats", "_remstats_compute_stats");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_compute_stats(Shield<SEXP>(Rcpp::wrap(effects)), Shield<SEXP>(Rcpp::wrap(edgelist)), Shield<SEXP>(Rcpp::wrap(riskset)), Shield<SEXP>(Rcpp::wrap(start)), Shield<SEXP>(Rcpp::wrap(stop)), Shield<SEXP>(Rcpp::wrap(values)), Shield<SEXP>(Rcpp::wrap(scaling)), Shield<SEXP>(Rcpp::wrap(memory_value)), Shield<SEXP>(Rcpp::wrap(with_type)), Shield<SEXP>(Rcpp::wrap(event_weights)), Shield<SEXP>(Rcpp::wrap(equal_val)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::cube >(rcpp_result_gen);
    }

}

#endif // RCPP_remstats_RCPPEXPORTS_H_GEN_