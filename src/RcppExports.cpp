// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// degree
arma::mat degree(arma::mat edgelist, arma::mat riskset, arma::uword type);
RcppExport SEXP _remstats_degree(SEXP edgelistSEXP, SEXP risksetSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(degree(edgelist, riskset, type));
    return rcpp_result_gen;
END_RCPP
}
// inertia
arma::mat inertia(arma::mat evls, arma::mat riskset);
RcppExport SEXP _remstats_inertia(SEXP evlsSEXP, SEXP risksetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type evls(evlsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    rcpp_result_gen = Rcpp::wrap(inertia(evls, riskset));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _remstats_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _remstats_rcpparma_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_innerproduct
double rcpparma_innerproduct(const arma::colvec& x);
RcppExport SEXP _remstats_rcpparma_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_bothproducts
Rcpp::List rcpparma_bothproducts(const arma::colvec& x);
RcppExport SEXP _remstats_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}
// reciprocity
arma::mat reciprocity(arma::mat edgelist, arma::mat riskset);
RcppExport SEXP _remstats_reciprocity(SEXP edgelistSEXP, SEXP risksetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    rcpp_result_gen = Rcpp::wrap(reciprocity(edgelist, riskset));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_remstats_degree", (DL_FUNC) &_remstats_degree, 3},
    {"_remstats_inertia", (DL_FUNC) &_remstats_inertia, 2},
    {"_remstats_rcpparma_hello_world", (DL_FUNC) &_remstats_rcpparma_hello_world, 0},
    {"_remstats_rcpparma_outerproduct", (DL_FUNC) &_remstats_rcpparma_outerproduct, 1},
    {"_remstats_rcpparma_innerproduct", (DL_FUNC) &_remstats_rcpparma_innerproduct, 1},
    {"_remstats_rcpparma_bothproducts", (DL_FUNC) &_remstats_rcpparma_bothproducts, 1},
    {"_remstats_reciprocity", (DL_FUNC) &_remstats_reciprocity, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_remstats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
