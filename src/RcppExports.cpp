// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// altsqp_update_factors_rcpp
arma::mat altsqp_update_factors_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, double numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_altsqp_update_factors_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_rcpp(X, F, L, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_factors_sparse_rcpp
arma::mat altsqp_update_factors_sparse_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, double numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_altsqp_update_factors_sparse_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_sparse_rcpp(X, F, L, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_factors_parallel_rcpp
arma::mat altsqp_update_factors_parallel_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, double numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_altsqp_update_factors_parallel_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_parallel_rcpp(X, F, L, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_factors_sparse_parallel_rcpp
arma::mat altsqp_update_factors_sparse_parallel_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, double numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_altsqp_update_factors_sparse_parallel_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_sparse_parallel_rcpp(X, F, L, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// ccd_update_factors_rcpp
void ccd_update_factors_rcpp(const NumericMatrix& V, const NumericMatrix& W, NumericMatrix& H, NumericMatrix& WH, double e);
RcppExport SEXP _fastTopics_ccd_update_factors_rcpp(SEXP VSEXP, SEXP WSEXP, SEXP HSEXP, SEXP WHSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type H(HSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type WH(WHSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    ccd_update_factors_rcpp(V, W, H, WH, e);
    return R_NilValue;
END_RCPP
}
// cost_rcpp
arma::vec cost_rcpp(const arma::mat& X, const arma::mat& A, const arma::mat& B, double e, bool poisson);
RcppExport SEXP _fastTopics_cost_rcpp(SEXP XSEXP, SEXP ASEXP, SEXP BSEXP, SEXP eSEXP, SEXP poissonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< bool >::type poisson(poissonSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_rcpp(X, A, B, e, poisson));
    return rcpp_result_gen;
END_RCPP
}
// cost_sparse_rcpp
arma::vec cost_sparse_rcpp(const arma::sp_mat& X, const arma::mat& A, const arma::mat& B, double e, bool poisson);
RcppExport SEXP _fastTopics_cost_sparse_rcpp(SEXP XSEXP, SEXP ASEXP, SEXP BSEXP, SEXP eSEXP, SEXP poissonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< bool >::type poisson(poissonSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_sparse_rcpp(X, A, B, e, poisson));
    return rcpp_result_gen;
END_RCPP
}
// x_over_crossprod_rcpp
arma::vec x_over_crossprod_rcpp(const arma::vec& i, const arma::vec& j, const arma::vec& x, const arma::mat& A, const arma::mat& B, double e);
RcppExport SEXP _fastTopics_x_over_crossprod_rcpp(SEXP iSEXP, SEXP jSEXP, SEXP xSEXP, SEXP ASEXP, SEXP BSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type j(jSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(x_over_crossprod_rcpp(i, j, x, A, B, e));
    return rcpp_result_gen;
END_RCPP
}
// mixem_rcpp
arma::vec mixem_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, uint numiter);
RcppExport SEXP _fastTopics_mixem_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(mixem_rcpp(L, w, x0, numiter));
    return rcpp_result_gen;
END_RCPP
}
// mixsqp_rcpp
Rcpp::List mixsqp_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, uint numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_mixsqp_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(mixsqp_rcpp(L, w, x0, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// pnmfem_update_factors_rcpp
arma::mat pnmfem_update_factors_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, double numiter);
RcppExport SEXP _fastTopics_pnmfem_update_factors_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(pnmfem_update_factors_rcpp(X, F, L, numiter));
    return rcpp_result_gen;
END_RCPP
}
// pnmfem_update_factors_sparse_rcpp
arma::mat pnmfem_update_factors_sparse_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, double numiter);
RcppExport SEXP _fastTopics_pnmfem_update_factors_sparse_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(pnmfem_update_factors_sparse_rcpp(X, F, L, numiter));
    return rcpp_result_gen;
END_RCPP
}
// pnmfem_update_factors_parallel_rcpp
arma::mat pnmfem_update_factors_parallel_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, double numiter);
RcppExport SEXP _fastTopics_pnmfem_update_factors_parallel_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(pnmfem_update_factors_parallel_rcpp(X, F, L, numiter));
    return rcpp_result_gen;
END_RCPP
}
// pnmfem_update_factors_sparse_parallel_rcpp
arma::mat pnmfem_update_factors_sparse_parallel_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, double numiter);
RcppExport SEXP _fastTopics_pnmfem_update_factors_sparse_parallel_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(pnmfem_update_factors_sparse_parallel_rcpp(X, F, L, numiter));
    return rcpp_result_gen;
END_RCPP
}
// poismixem_rcpp
arma::vec poismixem_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, uint numiter);
RcppExport SEXP _fastTopics_poismixem_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixem_rcpp(L, w, x0, numiter));
    return rcpp_result_gen;
END_RCPP
}
// poismixsqp_rcpp
arma::vec poismixsqp_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, uint numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_poismixsqp_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixsqp_rcpp(L, w, x0, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// poismixem2_rcpp
arma::vec poismixem2_rcpp(const arma::mat& L1, const arma::vec& w, const arma::vec& u, const arma::vec& x0, uint numiter);
RcppExport SEXP _fastTopics_poismixem2_rcpp(SEXP L1SEXP, SEXP wSEXP, SEXP uSEXP, SEXP x0SEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixem2_rcpp(L1, w, u, x0, numiter));
    return rcpp_result_gen;
END_RCPP
}
// poismixsqp2_rcpp
arma::vec poismixsqp2_rcpp(const arma::mat& L1, const arma::vec& w, const arma::vec& u, const arma::vec& x0, uint numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_poismixsqp2_rcpp(SEXP L1SEXP, SEXP wSEXP, SEXP uSEXP, SEXP x0SEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixsqp2_rcpp(L1, w, u, x0, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// poismixem3_rcpp
arma::vec poismixem3_rcpp(const arma::mat& L1, const arma::vec& w, const arma::vec& u, const arma::uvec& i, const arma::vec& x0, uint numiter);
RcppExport SEXP _fastTopics_poismixem3_rcpp(SEXP L1SEXP, SEXP wSEXP, SEXP uSEXP, SEXP iSEXP, SEXP x0SEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixem3_rcpp(L1, w, u, i, x0, numiter));
    return rcpp_result_gen;
END_RCPP
}
// poismixsqp3_rcpp
arma::vec poismixsqp3_rcpp(const arma::mat& L1, const arma::vec& w, const arma::vec& u, const arma::uvec& i, const arma::vec& x0, uint numiter, const Rcpp::List& control);
RcppExport SEXP _fastTopics_poismixsqp3_rcpp(SEXP L1SEXP, SEXP wSEXP, SEXP uSEXP, SEXP iSEXP, SEXP x0SEXP, SEXP numiterSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixsqp3_rcpp(L1, w, u, i, x0, numiter, control));
    return rcpp_result_gen;
END_RCPP
}
// scd_update_factors_rcpp
arma::mat scd_update_factors_rcpp(const arma::mat& A, const arma::mat& Wt, const arma::mat& H, uint numiter, double e);
RcppExport SEXP _fastTopics_scd_update_factors_rcpp(SEXP ASEXP, SEXP WtSEXP, SEXP HSEXP, SEXP numiterSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wt(WtSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type H(HSEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(scd_update_factors_rcpp(A, Wt, H, numiter, e));
    return rcpp_result_gen;
END_RCPP
}
// scd_update_factors_parallel_rcpp
arma::mat scd_update_factors_parallel_rcpp(const arma::mat& A, const arma::mat& Wt, const arma::mat& H, uint numiter, double e);
RcppExport SEXP _fastTopics_scd_update_factors_parallel_rcpp(SEXP ASEXP, SEXP WtSEXP, SEXP HSEXP, SEXP numiterSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wt(WtSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type H(HSEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(scd_update_factors_parallel_rcpp(A, Wt, H, numiter, e));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastTopics_altsqp_update_factors_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_factors_rcpp, 5},
    {"_fastTopics_altsqp_update_factors_sparse_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_factors_sparse_rcpp, 5},
    {"_fastTopics_altsqp_update_factors_parallel_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_factors_parallel_rcpp, 5},
    {"_fastTopics_altsqp_update_factors_sparse_parallel_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_factors_sparse_parallel_rcpp, 5},
    {"_fastTopics_ccd_update_factors_rcpp", (DL_FUNC) &_fastTopics_ccd_update_factors_rcpp, 5},
    {"_fastTopics_cost_rcpp", (DL_FUNC) &_fastTopics_cost_rcpp, 5},
    {"_fastTopics_cost_sparse_rcpp", (DL_FUNC) &_fastTopics_cost_sparse_rcpp, 5},
    {"_fastTopics_x_over_crossprod_rcpp", (DL_FUNC) &_fastTopics_x_over_crossprod_rcpp, 6},
    {"_fastTopics_mixem_rcpp", (DL_FUNC) &_fastTopics_mixem_rcpp, 4},
    {"_fastTopics_mixsqp_rcpp", (DL_FUNC) &_fastTopics_mixsqp_rcpp, 5},
    {"_fastTopics_pnmfem_update_factors_rcpp", (DL_FUNC) &_fastTopics_pnmfem_update_factors_rcpp, 4},
    {"_fastTopics_pnmfem_update_factors_sparse_rcpp", (DL_FUNC) &_fastTopics_pnmfem_update_factors_sparse_rcpp, 4},
    {"_fastTopics_pnmfem_update_factors_parallel_rcpp", (DL_FUNC) &_fastTopics_pnmfem_update_factors_parallel_rcpp, 4},
    {"_fastTopics_pnmfem_update_factors_sparse_parallel_rcpp", (DL_FUNC) &_fastTopics_pnmfem_update_factors_sparse_parallel_rcpp, 4},
    {"_fastTopics_poismixem_rcpp", (DL_FUNC) &_fastTopics_poismixem_rcpp, 4},
    {"_fastTopics_poismixsqp_rcpp", (DL_FUNC) &_fastTopics_poismixsqp_rcpp, 5},
    {"_fastTopics_poismixem2_rcpp", (DL_FUNC) &_fastTopics_poismixem2_rcpp, 5},
    {"_fastTopics_poismixsqp2_rcpp", (DL_FUNC) &_fastTopics_poismixsqp2_rcpp, 6},
    {"_fastTopics_poismixem3_rcpp", (DL_FUNC) &_fastTopics_poismixem3_rcpp, 6},
    {"_fastTopics_poismixsqp3_rcpp", (DL_FUNC) &_fastTopics_poismixsqp3_rcpp, 7},
    {"_fastTopics_scd_update_factors_rcpp", (DL_FUNC) &_fastTopics_scd_update_factors_rcpp, 5},
    {"_fastTopics_scd_update_factors_parallel_rcpp", (DL_FUNC) &_fastTopics_scd_update_factors_parallel_rcpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastTopics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
