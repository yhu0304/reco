// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// als_implicit
double als_implicit(const arma::sp_mat& Conf, arma::mat& X, arma::mat& Y, double lambda, unsigned n_threads, unsigned solver, unsigned cg_steps);
RcppExport SEXP _reco_als_implicit(SEXP ConfSEXP, SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP, SEXP solverSEXP, SEXP cg_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type Conf(ConfSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type cg_steps(cg_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(als_implicit(Conf, X, Y, lambda, n_threads, solver, cg_steps));
    return rcpp_result_gen;
END_RCPP
}
// als_loss_explicit
double als_loss_explicit(const arma::sp_mat& mat, arma::mat& X, arma::mat& Y, double lambda, unsigned n_threads);
RcppExport SEXP _reco_als_loss_explicit(SEXP matSEXP, SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(als_loss_explicit(mat, X, Y, lambda, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// dotprod_top_k
IntegerMatrix dotprod_top_k(const arma::mat& x, const arma::mat& y, unsigned k, unsigned n_threads, Rcpp::Nullable<const arma::sp_mat>& not_recommend);
RcppExport SEXP _reco_dotprod_top_k(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP n_threadsSEXP, SEXP not_recommendSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< unsigned >::type k(kSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const arma::sp_mat>& >::type not_recommend(not_recommendSEXP);
    rcpp_result_gen = Rcpp::wrap(dotprod_top_k(x, y, k, n_threads, not_recommend));
    return rcpp_result_gen;
END_RCPP
}
// make_sparse_approximation
NumericVector make_sparse_approximation(const arma::sp_mat& mat_template, arma::mat& X, arma::mat& Y, unsigned n_threads);
RcppExport SEXP _reco_make_sparse_approximation(SEXP mat_templateSEXP, SEXP XSEXP, SEXP YSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat_template(mat_templateSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(make_sparse_approximation(mat_template, X, Y, n_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_reco_als_implicit", (DL_FUNC) &_reco_als_implicit, 7},
    {"_reco_als_loss_explicit", (DL_FUNC) &_reco_als_loss_explicit, 5},
    {"_reco_dotprod_top_k", (DL_FUNC) &_reco_dotprod_top_k, 5},
    {"_reco_make_sparse_approximation", (DL_FUNC) &_reco_make_sparse_approximation, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_reco(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
