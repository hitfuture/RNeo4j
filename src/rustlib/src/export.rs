// Generated by using rustinr::rustrize() -> do not edit by hand

use super::*;

#[no_mangle]
pub extern "C" fn rustr_bolt_begin_internal(uri : SEXP, username : SEXP, password : SEXP)->SEXP{

 let uri_ : CString = unwrapr!( CString::rnew(uri) );

let username_ : Vec<CString> = unwrapr!( Vec::rnew(username) );

let password_ : Vec<CString> = unwrapr!( Vec::rnew(password) );
 let res  = unwrapr!( bolt_begin_internal(uri_,username_,password_));

 let res_sexp : SEXP = unwrapr!(res.intor());

 return res_sexp;
}

#[no_mangle]
pub extern "C" fn rustr_bolt_query_internal(graph : SEXP, query : SEXP, params : SEXP, as_data_frame : SEXP)->SEXP{

 let graph_ : RPtr<Graph> = unwrapr!( RPtr::rnew(graph) );

let query_ : CString = unwrapr!( CString::rnew(query) );

let params_ : Value = unwrapr!( Value::rnew(params) );

let as_data_frame_ : bool = unwrapr!( bool::rnew(as_data_frame) );
 let res  = unwrapr!( bolt_query_internal(graph_,query_,params_,as_data_frame_));

 let res_sexp : SEXP = unwrapr!(res.intor());

 return res_sexp;
}

