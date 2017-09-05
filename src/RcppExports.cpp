// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// initNeo4j
void initNeo4j();
RcppExport SEXP _RNeo4j_initNeo4j() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    initNeo4j();
    return R_NilValue;
END_RCPP
}
// cleanupNeo4j
void cleanupNeo4j();
RcppExport SEXP _RNeo4j_cleanupNeo4j() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cleanupNeo4j();
    return R_NilValue;
END_RCPP
}
// startGraph
SEXP startGraph(const StringVector& url, const StringVector& username, const StringVector& password);
RcppExport SEXP _RNeo4j_startGraph(SEXP urlSEXP, SEXP usernameSEXP, SEXP passwordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const StringVector& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const StringVector& >::type username(usernameSEXP);
    Rcpp::traits::input_parameter< const StringVector& >::type password(passwordSEXP);
    rcpp_result_gen = Rcpp::wrap(startGraph(url, username, password));
    return rcpp_result_gen;
END_RCPP
}
// cypherInternal
DataFrame cypherInternal(SEXP graphSexp, const char* query, List args, StringVector names);
RcppExport SEXP _RNeo4j_cypherInternal(SEXP graphSexpSEXP, SEXP querySEXP, SEXP argsSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type graphSexp(graphSexpSEXP);
    Rcpp::traits::input_parameter< const char* >::type query(querySEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< StringVector >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(cypherInternal(graphSexp, query, args, names));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RNeo4j_initNeo4j", (DL_FUNC) &_RNeo4j_initNeo4j, 0},
    {"_RNeo4j_cleanupNeo4j", (DL_FUNC) &_RNeo4j_cleanupNeo4j, 0},
    {"_RNeo4j_startGraph", (DL_FUNC) &_RNeo4j_startGraph, 3},
    {"_RNeo4j_cypherInternal", (DL_FUNC) &_RNeo4j_cypherInternal, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RNeo4j(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
