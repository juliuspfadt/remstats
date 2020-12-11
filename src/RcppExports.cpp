// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/remstats.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// standardize
arma::mat standardize(arma::mat stat);
RcppExport SEXP _remstats_standardize(SEXP statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type stat(statSEXP);
    rcpp_result_gen = Rcpp::wrap(standardize(stat));
    return rcpp_result_gen;
END_RCPP
}
// divide_by_past
arma::mat divide_by_past(arma::mat stat);
RcppExport SEXP _remstats_divide_by_past(SEXP statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type stat(statSEXP);
    rcpp_result_gen = Rcpp::wrap(divide_by_past(stat));
    return rcpp_result_gen;
END_RCPP
}
// divide_by_2past
arma::mat divide_by_2past(arma::mat stat);
RcppExport SEXP _remstats_divide_by_2past(SEXP statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type stat(statSEXP);
    rcpp_result_gen = Rcpp::wrap(divide_by_2past(stat));
    return rcpp_result_gen;
END_RCPP
}
// compute_actorEffect
arma::mat compute_actorEffect(const arma::mat& values, int type, const arma::mat& edgelist, const arma::mat& riskset, int start, int stop);
RcppExport SEXP _remstats_compute_actorEffect(SEXP valuesSEXP, SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_actorEffect(values, type, edgelist, riskset, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_dyadEffect
arma::mat compute_dyadEffect(const arma::mat& values, int type, const arma::mat& edgelist, const arma::mat& riskset, int start, int stop, double equal_val);
RcppExport SEXP _remstats_compute_dyadEffect(SEXP valuesSEXP, SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP startSEXP, SEXP stopSEXP, SEXP equal_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< double >::type equal_val(equal_valSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_dyadEffect(values, type, edgelist, riskset, start, stop, equal_val));
    return rcpp_result_gen;
END_RCPP
}
// compute_tie
arma::mat compute_tie(const arma::mat& values, const arma::mat& edgelist, const arma::mat& riskset, int start, int stop);
RcppExport SEXP _remstats_compute_tie(SEXP valuesSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_tie(values, edgelist, riskset, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_inertia
arma::mat compute_inertia(const arma::mat& edgelist, const arma::mat& riskset, double memory_value, bool with_type, const arma::vec& event_weights, int start, int stop);
RcppExport SEXP _remstats_compute_inertia(SEXP edgelistSEXP, SEXP risksetSEXP, SEXP memory_valueSEXP, SEXP with_typeSEXP, SEXP event_weightsSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< double >::type memory_value(memory_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type event_weights(event_weightsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_inertia(edgelist, riskset, memory_value, with_type, event_weights, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_reciprocity
arma::mat compute_reciprocity(const arma::mat& edgelist, const arma::mat& riskset, double memory_value, bool with_type, const arma::vec& event_weights, int start, int stop);
RcppExport SEXP _remstats_compute_reciprocity(SEXP edgelistSEXP, SEXP risksetSEXP, SEXP memory_valueSEXP, SEXP with_typeSEXP, SEXP event_weightsSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< double >::type memory_value(memory_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type event_weights(event_weightsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_reciprocity(edgelist, riskset, memory_value, with_type, event_weights, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_degree
arma::mat compute_degree(int type, const arma::mat& edgelist, const arma::mat& riskset, double memory_value, bool with_type, const arma::vec& event_weights, int start, int stop);
RcppExport SEXP _remstats_compute_degree(SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP memory_valueSEXP, SEXP with_typeSEXP, SEXP event_weightsSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< double >::type memory_value(memory_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type event_weights(event_weightsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_degree(type, edgelist, riskset, memory_value, with_type, event_weights, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_triad
arma::mat compute_triad(int type, const arma::mat& edgelist, const arma::mat& riskset, double memory_value, bool with_type, const arma::vec& event_weights, int start, int stop);
RcppExport SEXP _remstats_compute_triad(SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP memory_valueSEXP, SEXP with_typeSEXP, SEXP event_weightsSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< double >::type memory_value(memory_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type event_weights(event_weightsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_triad(type, edgelist, riskset, memory_value, with_type, event_weights, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_pshift
arma::mat compute_pshift(int type, const arma::mat& edgelist, const arma::mat& riskset, bool with_type, int start, int stop);
RcppExport SEXP _remstats_compute_pshift(SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP with_typeSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< bool >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_pshift(type, edgelist, riskset, with_type, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_rrank
arma::mat compute_rrank(int type, const arma::mat& edgelist, const arma::mat& riskset, bool with_type, int start, int stop);
RcppExport SEXP _remstats_compute_rrank(SEXP typeSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP with_typeSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< bool >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_rrank(type, edgelist, riskset, with_type, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_baselineType
arma::mat compute_baselineType(const arma::mat& values, const arma::mat& edgelist, const arma::mat& riskset, int start, int stop);
RcppExport SEXP _remstats_compute_baselineType(SEXP valuesSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_baselineType(values, edgelist, riskset, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// compute_interact
arma::mat compute_interact(arma::mat x, arma::cube statistics);
RcppExport SEXP _remstats_compute_interact(SEXP xSEXP, SEXP statisticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type statistics(statisticsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_interact(x, statistics));
    return rcpp_result_gen;
END_RCPP
}
// compute_eventEffect
arma::mat compute_eventEffect(arma::mat x, arma::cube statistics, int start, int stop);
RcppExport SEXP _remstats_compute_eventEffect(SEXP xSEXP, SEXP statisticsSEXP, SEXP startSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type statistics(statisticsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_eventEffect(x, statistics, start, stop));
    return rcpp_result_gen;
END_RCPP
}
// recency
arma::mat recency(const arma::mat& edgelist, const arma::mat& riskset, double memory_value, int type);
RcppExport SEXP _remstats_recency(SEXP edgelistSEXP, SEXP risksetSEXP, SEXP memory_valueSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< double >::type memory_value(memory_valueSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(recency(edgelist, riskset, memory_value, type));
    return rcpp_result_gen;
END_RCPP
}
// compute_stats
arma::cube compute_stats(const arma::vec& effects, const arma::mat& edgelist, const arma::mat& riskset, int start, int stop, const Rcpp::List& values, const arma::vec& scaling, const arma::vec& memory_value, const arma::vec& with_type, const arma::mat& event_weights, const arma::vec& equal_val);
static SEXP _remstats_compute_stats_try(SEXP effectsSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP startSEXP, SEXP stopSEXP, SEXP valuesSEXP, SEXP scalingSEXP, SEXP memory_valueSEXP, SEXP with_typeSEXP, SEXP event_weightsSEXP, SEXP equal_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type effects(effectsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type scaling(scalingSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type memory_value(memory_valueSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type with_type(with_typeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type event_weights(event_weightsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type equal_val(equal_valSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_stats(effects, edgelist, riskset, start, stop, values, scaling, memory_value, with_type, event_weights, equal_val));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _remstats_compute_stats(SEXP effectsSEXP, SEXP edgelistSEXP, SEXP risksetSEXP, SEXP startSEXP, SEXP stopSEXP, SEXP valuesSEXP, SEXP scalingSEXP, SEXP memory_valueSEXP, SEXP with_typeSEXP, SEXP event_weightsSEXP, SEXP equal_valSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_remstats_compute_stats_try(effectsSEXP, edgelistSEXP, risksetSEXP, startSEXP, stopSEXP, valuesSEXP, scalingSEXP, memory_valueSEXP, with_typeSEXP, event_weightsSEXP, equal_valSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _remstats_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::cube(*compute_stats)(const arma::vec&,const arma::mat&,const arma::mat&,int,int,const Rcpp::List&,const arma::vec&,const arma::vec&,const arma::vec&,const arma::mat&,const arma::vec&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _remstats_RcppExport_registerCCallable() { 
    R_RegisterCCallable("remstats", "_remstats_compute_stats", (DL_FUNC)_remstats_compute_stats_try);
    R_RegisterCCallable("remstats", "_remstats_RcppExport_validate", (DL_FUNC)_remstats_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_remstats_standardize", (DL_FUNC) &_remstats_standardize, 1},
    {"_remstats_divide_by_past", (DL_FUNC) &_remstats_divide_by_past, 1},
    {"_remstats_divide_by_2past", (DL_FUNC) &_remstats_divide_by_2past, 1},
    {"_remstats_compute_actorEffect", (DL_FUNC) &_remstats_compute_actorEffect, 6},
    {"_remstats_compute_dyadEffect", (DL_FUNC) &_remstats_compute_dyadEffect, 7},
    {"_remstats_compute_tie", (DL_FUNC) &_remstats_compute_tie, 5},
    {"_remstats_compute_inertia", (DL_FUNC) &_remstats_compute_inertia, 7},
    {"_remstats_compute_reciprocity", (DL_FUNC) &_remstats_compute_reciprocity, 7},
    {"_remstats_compute_degree", (DL_FUNC) &_remstats_compute_degree, 8},
    {"_remstats_compute_triad", (DL_FUNC) &_remstats_compute_triad, 8},
    {"_remstats_compute_pshift", (DL_FUNC) &_remstats_compute_pshift, 6},
    {"_remstats_compute_rrank", (DL_FUNC) &_remstats_compute_rrank, 6},
    {"_remstats_compute_baselineType", (DL_FUNC) &_remstats_compute_baselineType, 5},
    {"_remstats_compute_interact", (DL_FUNC) &_remstats_compute_interact, 2},
    {"_remstats_compute_eventEffect", (DL_FUNC) &_remstats_compute_eventEffect, 4},
    {"_remstats_recency", (DL_FUNC) &_remstats_recency, 4},
    {"_remstats_compute_stats", (DL_FUNC) &_remstats_compute_stats, 11},
    {"_remstats_RcppExport_registerCCallable", (DL_FUNC) &_remstats_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_remstats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
