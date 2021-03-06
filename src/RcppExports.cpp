// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dmat
NumericMatrix dmat(NumericVector x1, NumericVector x2, NumericVector y1, NumericVector y2);
RcppExport SEXP tbart_dmat(SEXP x1SEXP, SEXP x2SEXP, SEXP y1SEXP, SEXP y2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y2(y2SEXP );
        NumericMatrix __result = dmat(x1, x2, y1, y2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dmatex
NumericMatrix dmatex(NumericVector x1, NumericVector x2, NumericVector y1, NumericVector y2, double pwr);
RcppExport SEXP tbart_dmatex(SEXP x1SEXP, SEXP x2SEXP, SEXP y1SEXP, SEXP y2SEXP, SEXP pwrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y2(y2SEXP );
        Rcpp::traits::input_parameter< double >::type pwr(pwrSEXP );
        NumericMatrix __result = dmatex(x1, x2, y1, y2, pwr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rviss
IntegerVector rviss(NumericMatrix dm, IntegerVector ss);
RcppExport SEXP tbart_rviss(SEXP dmSEXP, SEXP ssSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type dm(dmSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type ss(ssSEXP );
        IntegerVector __result = rviss(dm, ss);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dtotal
double dtotal(NumericMatrix dm, IntegerVector ss);
RcppExport SEXP tbart_dtotal(SEXP dmSEXP, SEXP ssSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type dm(dmSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type ss(ssSEXP );
        double __result = dtotal(dm, ss);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// bestswap
IntegerVector bestswap(NumericMatrix dm, IntegerVector ins, IntegerVector outs);
RcppExport SEXP tbart_bestswap(SEXP dmSEXP, SEXP insSEXP, SEXP outsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type dm(dmSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type ins(insSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type outs(outsSEXP );
        IntegerVector __result = bestswap(dm, ins, outs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// bestswap2
IntegerVector bestswap2(NumericMatrix dm, IntegerVector ins, IntegerVector outs, int n_force);
RcppExport SEXP tbart_bestswap2(SEXP dmSEXP, SEXP insSEXP, SEXP outsSEXP, SEXP n_forceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type dm(dmSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type ins(insSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type outs(outsSEXP );
        Rcpp::traits::input_parameter< int >::type n_force(n_forceSEXP );
        IntegerVector __result = bestswap2(dm, ins, outs, n_force);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
