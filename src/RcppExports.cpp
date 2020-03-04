// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// actorStat
arma::mat actorStat(arma::mat values, arma::uword type, arma::mat edgelist, arma::mat riskset);
RcppExport SEXP _remstats_actorStat(SEXP valuesSEXP, SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type type(typeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    rcpp_result_gen = Rcpp::wrap(actorStat(values, type, edgelist, riskset));
    return rcpp_result_gen;
END_RCPP
}
// inertia
arma::mat inertia(arma::mat evls, arma::mat riskset, arma::vec weights);
RcppExport SEXP _remstats_inertia(SEXP evlsSEXP, SEXP risksetSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type evls(evlsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(inertia(evls, riskset, weights));
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
// triad
arma::mat triad(arma::vec actors, arma::mat edgelist, arma::mat riskset, arma::uword type);
RcppExport SEXP _remstats_triad(SEXP actorsSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type actors(actorsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(triad(actors, edgelist, riskset, type));
    return rcpp_result_gen;
END_RCPP
}
// triadU
arma::mat triadU(arma::vec actors, arma::mat edgelist, arma::mat riskset, bool unique_sp);
RcppExport SEXP _remstats_triadU(SEXP actorsSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP unique_spSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type actors(actorsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< bool >::type unique_sp(unique_spSEXP);
    rcpp_result_gen = Rcpp::wrap(triadU(actors, edgelist, riskset, unique_sp));
    return rcpp_result_gen;
END_RCPP
}
// remStatsC
arma::cube remStatsC(arma::vec effects, arma::mat edgelist, arma::mat riskset, arma::mat evls, arma::vec actors, arma::mat sender_values, arma::mat receiver_values, arma::vec weights);
RcppExport SEXP _remstats_remStatsC(SEXP effectsSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP evlsSEXP, SEXP actorsSEXP, SEXP sender_valuesSEXP, SEXP receiver_valuesSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type effects(effectsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type evls(evlsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type actors(actorsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sender_values(sender_valuesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type receiver_values(receiver_valuesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(remStatsC(effects, edgelist, riskset, evls, actors, sender_values, receiver_values, weights));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_remstats_actorStat", (DL_FUNC) &_remstats_actorStat, 4},
    {"_remstats_inertia", (DL_FUNC) &_remstats_inertia, 3},
    {"_remstats_reciprocity", (DL_FUNC) &_remstats_reciprocity, 2},
    {"_remstats_degree", (DL_FUNC) &_remstats_degree, 3},
    {"_remstats_triad", (DL_FUNC) &_remstats_triad, 4},
    {"_remstats_triadU", (DL_FUNC) &_remstats_triadU, 4},
    {"_remstats_remStatsC", (DL_FUNC) &_remstats_remStatsC, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_remstats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
