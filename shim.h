/**
 * Copyright IBM Corporation 2016
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

#ifndef CurlHelpers_h
#define CurlHelpers_h

#import <curl/curl.h>

#define CURL_TRUE  1
#define CURL_FALSE 0

typedef size_t (*CurlFunc)(void * ptr, size_t size, size_t num, void * ud);

// static inline CURLcode curl_set_bool(CURL *curl, CURLoption option, int yesNo) {
//     return curl_easy_setopt(curl, option, yesNo == CURL_TRUE ? 1L : 0L);
// }


// // set options list - CURLOPT_HTTPHEADER, CURLOPT_HTTP200ALIASES, CURLOPT_QUOTE, CURLOPT_TELNETOPTIONS, CURLOPT_MAIL_RCPT, etc.
// static inline CURLcode curl_set_list(CURL *curl, CURLoption option, struct curl_slist *list) {
//     return curl_easy_setopt(curl, option, list);
// }

// static inline CURLcode curl_set_int(CURL *curl, CURLoption option, long data) {
//     return curl_easy_setopt(curl, option, data);
// }

// // const keyword is used so that Swift strings can be passed
// static inline CURLcode curl_set_string(CURL *curl, CURLoption option, const char *data) {
//     return curl_easy_setopt(curl, option, data);
// }

// static inline CURLcode curlHelperSetOptReadFunc(CURL *curl, void *userData, size_t (*read_cb) (char *buffer, size_t size, size_t nitems, void *userdata)) {
    
//     CURLcode rc = curl_easy_setopt(curl, CURLOPT_READDATA, userData);
//     if  (rc == CURLE_OK) {
//         rc = curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_cb);
//     }
//     return rc;
// }

// static inline CURLcode curlHelperSetOptWriteFunc(CURL *curl, void *userData, size_t (*write_cb) (char *ptr, size_t size, size_t nmemb, void *userdata)) {
    
//     CURLcode rc = curl_easy_setopt(curl, CURLOPT_HEADER, 1);
//     if  (rc == CURLE_OK)  {
//         rc = curl_easy_setopt(curl, CURLOPT_WRITEDATA, userData);
//         if  (rc == CURLE_OK) {
//             rc = curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_cb);
//         }
//     }
//     return rc;
// }

// static inline CURLcode curlHelperSetOptHeaderFunc(CURL *curl, void *userData, size_t (*header_cb) (char *buffer, size_t size, size_t nmemb, void *userdata)) {
    
//     CURLcode rc = curl_easy_setopt(curl, CURLOPT_HEADER, 0);
//     if (rc == CURLE_OK) {
//         rc = curl_easy_setopt(curl, CURLOPT_HEADERDATA, userData);
//         if (rc == CURLE_OK) {
//             rc = curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, header_cb);
//         }
//     }
//     return rc;
// }

// static inline CURLcode curl_set_void(CURL *handle, CURLoption option, void * value) {
// 	return curl_easy_setopt(handle, option, value);
// }

// static inline CURLcode curl_get_string(CURL *curl, CURLINFO info, char **data) {
//     return curl_easy_getinfo(curl, info, data);
// }


// static inline CURLcode curl_get_long(CURL *curl, CURLINFO info, long *data) {
//     return curl_easy_getinfo(curl, info, data);
// }

// static inline CURLcode curlHelperSetOptFunc(CURL *handle, CURLoption option, CurlFunc value){
// 	return curl_easy_setopt(handle, option, value);
// }

static inline CURLcode curl_set_url(CURL *handle, const char* url) {
    return curl_easy_setopt(handle, CURLOPT_URL, url);
}

//BEHAVIOR OPTIONS
static inline CURLcode curl_set_verbose(CURL *handle, long onoff) {
    return curl_easy_setopt(handle, CURLOPT_VERBOSE, onoff);
}

static inline CURLcode curl_set_header(CURL *handle, long onoff) {
    return curl_easy_setopt(handle, CURLOPT_HEADER, onoff);
}

static inline CURLcode curl_set_noprogress(CURL *handle, long onoff) {
    return curl_easy_setopt(handle, CURLOPT_NOPROGRESS, onoff);
}

static inline CURLcode curl_set_nosignal(CURL *handle, long onoff) {
    return curl_easy_setopt(handle, CURLOPT_NOSIGNAL, onoff);
}

static inline CURLcode curl_set_wildcardmatch(CURL *handle, long onoff) {
    return curl_easy_setopt(handle, CURLOPT_WILDCARDMATCH, onoff);
}


//CALLBACK OPTIONS
typedef size_t (*write_callback)(char *ptr, size_t size, size_t nmemb, void *userdata);
static inline CURLcode curl_set_writefunction(CURL *handle, write_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, callback);
}

static inline CURLcode curl_set_writedata(CURL *handle, void* pointer) {
    return curl_easy_setopt(handle, CURLOPT_WRITEDATA, pointer);
}

typedef size_t (*read_callback)(char *buffer, size_t size, size_t nitems, void *instream);
static inline CURLcode curl_set_readfunction(CURL *handle, read_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_READFUNCTION, callback);
}

static inline CURLcode curl_set_readdata(CURL *handle, void* pointer) {
    return curl_easy_setopt(handle, CURLOPT_READDATA, pointer);
}

typedef curlioerr (*ioctl_callback)(CURL *handle, int cmd, void *clientp);
static inline CURLcode curl_set_ioctlfunction(CURL *handle, ioctl_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_IOCTLFUNCTION, callback);
}

static inline CURLcode curl_set_ioctldata(CURL *handle, void* pointer) {
    return curl_easy_setopt(handle, CURLOPT_IOCTLDATA, pointer);
}

typedef int (*seek_callback)(void *userp, curl_off_t offset, int origin);
static inline CURLcode curl_set_seekfunction(CURL *handle, seek_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_SEEKFUNCTION, callback);
}


static inline CURLcode curl_set_seekdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_SEEKDATA, pointer);
}

typedef int (*sockopt_callback)(void *clientp,
                     curl_socket_t curlfd,
                     curlsocktype purpose);
static inline CURLcode curl_set_sockoptfunction(CURL *handle, sockopt_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_SOCKOPTFUNCTION, callback);
}

static inline CURLcode curl_set_sockoptdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_SOCKOPTDATA, pointer);
}

typedef curl_socket_t (*opensocket_callback)(void *clientp,
                                  curlsocktype purpose,
                                  struct curl_sockaddr *address);
static inline CURLcode curl_set_opensocketfunction(CURL *handle, opensocket_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_OPENSOCKETFUNCTION, callback);
}

static inline CURLcode curl_set_opensocketdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_OPENSOCKETDATA, pointer);
}

typedef int (*closesocket_callback)(void *clientp, curl_socket_t item);
static inline CURLcode curl_set_closesocketfunction(CURL *handle, closesocket_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_CLOSESOCKETFUNCTION, callback);
}

static inline CURLcode curl_set_closesocketdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_CLOSESOCKETDATA, pointer);
}

typedef int (*progress_callback)(void *clientp,   
                                double dltotal,   
                                double dlnow,   
                                double ultotal,   
                                double ulnow);
static inline CURLcode curl_set_progressfunction(CURL *handle, progress_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_PROGRESSFUNCTION, callback);
}

static inline CURLcode curl_set_progressdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_PROGRESSDATA, pointer);
}


static inline CURLcode curl_set_xferinfofunction(CURL *handle, progress_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_XFERINFOFUNCTION, callback);
}

static inline CURLcode curl_set_xferinfodata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_XFERINFODATA, pointer);
}

typedef size_t (*header_callback)(char *buffer,   
                                    size_t size,   
                                    size_t nitems,   
                                    void *userdata);
static inline CURLcode curl_set_headerfunction(CURL *handle, header_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_HEADERFUNCTION, callback);
}

static inline CURLcode curl_set_headerdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_HEADERDATA, pointer);
}

typedef int (*debug_callback)(CURL *handle,
                                curl_infotype type,
                                char *data,
                                size_t size,
                                void *userptr);
static inline CURLcode curl_set_debugfunction(CURL *handle, debug_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_DEBUGFUNCTION, callback);
}

static inline CURLcode curl_set_debugdata(CURL *handle,  void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_DEBUGDATA, pointer);
}

typedef CURLcode (*ssl_ctx_callback)(CURL *curl, 
                                    void *ssl_ctx, 
                                    void *userptr);
static inline CURLcode curl_set_ssl_ctx_function(CURL *handle, ssl_ctx_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_SSL_CTX_FUNCTION, callback);
}

static inline CURLcode curl_set_ssl_ctx_data(CURL *handle,  void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_SSL_CTX_DATA, pointer);
}


typedef CURLcode (*conv_callback)(char *ptr, 
                                    size_t length);
static inline CURLcode curl_set_conv_to_network_function(CURL *handle, conv_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_CONV_TO_NETWORK_FUNCTION, callback);
}

static inline CURLcode curl_set_conv_from_network_function(CURL *handle, conv_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_CONV_FROM_NETWORK_FUNCTION, callback);
}

static inline CURLcode curl_set_conv_from_utf8_function(CURL *handle, conv_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_CONV_FROM_UTF8_FUNCTION, callback);
}

typedef size_t (*interleave_callback)(void *ptr, 
                                        size_t size, 
                                        size_t nmemb,
                                        void *userdata);
static inline CURLcode curl_set_interleavefunction(CURL *handle, interleave_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_INTERLEAVEFUNCTION, callback);
}


static inline CURLcode curl_set_interleavedata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_INTERLEAVEDATA, pointer);
}

typedef long (*chunk_bgn_callback)(const void *transfer_info, 
                                    void *ptr,
                                    int remains);
static inline CURLcode curl_set_chunk_bgn_function(CURL *handle, chunk_bgn_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_CHUNK_BGN_FUNCTION, callback);
}

typedef long (*chunk_end_callback)(void *ptr);
static inline CURLcode curl_set_chunk_end_function(CURL *handle, chunk_end_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_CHUNK_END_FUNCTION, callback);
}

static inline CURLcode curl_set_chunk_data(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_CHUNK_DATA, pointer);
}


typedef int (*fnmatch_callback)(void *ptr,
                     const char *pattern,
                     const char *string);
static inline CURLcode curl_set_fnmatch_function(CURL *handle, fnmatch_callback callback) {
    return curl_easy_setopt(handle, CURLOPT_FNMATCH_FUNCTION, callback);
}

static inline CURLcode curl_set_fnmatch_data(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_FNMATCH_DATA, pointer);
}

// static inline CURLcode curl_set_suppress_connect_headers (CURL *handle, long onoff) {
//     return curl_easy_setopt(handle, CURLOPT_SUPPRESS_CONNECT_HEADERS , onoff);
// }

//ERROR OPTIONS
static inline CURLcode curl_set_errorbuffer(CURL *handle, char *pointer) {
    return curl_easy_setopt(handle, CURLOPT_ERRORBUFFER, pointer);
}

static inline CURLcode curl_set_stderr(CURL *handle, FILE *pointer) {
    return curl_easy_setopt(handle, CURLOPT_STDERR, pointer);
}

static inline CURLcode curl_set_failonerror(CURL *handle, long fail) {
    return curl_easy_setopt(handle, CURLOPT_FAILONERROR, fail);
}

static inline CURLcode curl_set_keep_sending_on_error(CURL *handle, long keep_sending) {
    return curl_easy_setopt(handle, CURLOPT_KEEP_SENDING_ON_ERROR , keep_sending);
}

//NETWORK OPTIONS
static inline CURLcode curl_set_url(CURL *handle, char* url) {
    return curl_easy_setopt(handle, CURLOPT_URL , url);
}

static inline CURLcode curl_set_path_as_is(CURL *handle, long leaveit) {
    return curl_easy_setopt(handle, CURLOPT_PATH_AS_IS , leaveit);
}

static inline CURLcode curl_set_protocols(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_PROTOCOLS , bitmask);
}

static inline CURLcode curl_set_redir_protocols(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_REDIR_PROTOCOLS , bitmask);
}


static inline CURLcode curl_set_default_protocol(CURL *handle, char *protocol) {
    return curl_easy_setopt(handle, CURLOPT_DEFAULT_PROTOCOL , protocol);
}

static inline CURLcode curl_set_proxy(CURL *handle, char *proxy) {
    return curl_easy_setopt(handle, CURLOPT_PROXY , proxy);
}

static inline CURLcode curl_set_pre_proxy(CURL *handle, char *preproxy) {
    return curl_easy_setopt(handle, CURLOPT_PRE_PROXY , preproxy);
}


static inline CURLcode curl_set_proxyport(CURL *handle, long port) {
    return curl_easy_setopt(handle, CURLOPT_PROXYPORT , port);
}

static inline CURLcode curl_set_proxytype(CURL *handle, long type) {
    return curl_easy_setopt(handle, CURLOPT_PROXYTYPE , type);
}

static inline CURLcode curl_set_noproxy(CURL *handle, char *noproxy) {
    return curl_easy_setopt(handle, CURLOPT_NOPROXY , noproxy);
}

static inline CURLcode curl_set_httpproxytunnel(CURL *handle,  long tunnel) {
    return curl_easy_setopt(handle, CURLOPT_HTTPPROXYTUNNEL , tunnel);
}

static inline CURLcode curl_set_connect_to(CURL *handle,  struct curl_slist *connect_to) {
    return curl_easy_setopt(handle, CURLOPT_CONNECT_TO , connect_to);
}

static inline CURLcode curl_set_socks5_auth(CURL *handle,  long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_SOCKS5_AUTH , bitmask);
}

static inline CURLcode curl_set_socks5_gssapi_service(CURL *handle,  char *name) {
    return curl_easy_setopt(handle, CURLOPT_SOCKS5_GSSAPI_SERVICE , name);
}

static inline CURLcode curl_set_socks5_gssapi_nec(CURL *handle,  long nec) {
    return curl_easy_setopt(handle, CURLOPT_SOCKS5_GSSAPI_NEC , nec);
}

static inline CURLcode curl_set_proxy_service_name(CURL *handle,  char *name) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SERVICE_NAME , name);
}

static inline CURLcode curl_set_service_name(CURL *handle,  char *name) {
    return curl_easy_setopt(handle, CURLOPT_SERVICE_NAME , name);
}

static inline CURLcode curl_set_interface(CURL *handle,  char *interface) {
    return curl_easy_setopt(handle, CURLOPT_INTERFACE , interface);
}

static inline CURLcode curl_set_localport(CURL *handle,  long port) {
    return curl_easy_setopt(handle, CURLOPT_LOCALPORT , port);
}

static inline CURLcode curl_set_localportrange(CURL *handle,  long range) {
    return curl_easy_setopt(handle, CURLOPT_LOCALPORTRANGE , range);
}

static inline CURLcode curl_set_dns_cache_timeout(CURL *handle,  long age) {
    return curl_easy_setopt(handle, CURLOPT_DNS_CACHE_TIMEOUT , age);
}

static inline CURLcode curl_set_dns_use_global_cache(CURL *handle,  long enable) {
    return curl_easy_setopt(handle, CURLOPT_DNS_USE_GLOBAL_CACHE , enable);
}

static inline CURLcode curl_set_buffersize(CURL *handle,   long size) {
    return curl_easy_setopt(handle, CURLOPT_BUFFERSIZE , size);
}

static inline CURLcode curl_set_port(CURL *handle,  long number) {
    return curl_easy_setopt(handle, CURLOPT_PORT , number);
}

static inline CURLcode curl_set_tcp_fastopen(CURL *handle,  long enable) {
    return curl_easy_setopt(handle, CURLOPT_TCP_FASTOPEN , enable);
}

static inline CURLcode curl_set_tcp_nodelay(CURL *handle,  long nodelay) {
    return curl_easy_setopt(handle, CURLOPT_TCP_NODELAY , nodelay);
}

static inline CURLcode curl_set_address_scope(CURL *handle, long scope) {
    return curl_easy_setopt(handle, CURLOPT_ADDRESS_SCOPE , scope);
}

static inline CURLcode curl_set_tcp_keepalive(CURL *handle, long probe) {
    return curl_easy_setopt(handle, CURLOPT_TCP_KEEPALIVE , probe);
}

static inline CURLcode curl_set_tcp_keepidle(CURL *handle, long delay) {
    return curl_easy_setopt(handle, CURLOPT_TCP_KEEPIDLE , delay);
}

static inline CURLcode curl_set_tcp_keepintvl(CURL *handle, long interval) {
    return curl_easy_setopt(handle, CURLOPT_TCP_KEEPINTVL , interval);
}

static inline CURLcode curl_set_unix_socket_path(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_UNIX_SOCKET_PATH , path);
}

static inline CURLcode curl_set_abstract_unix_socket(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_ABSTRACT_UNIX_SOCKET , path);
}

//NAMES and PASSWORDS OPTIONS (Authentication)
static inline CURLcode curl_set_netrc(CURL *handle,  long level) {
    return curl_easy_setopt(handle, CURLOPT_NETRC , level);
}

static inline CURLcode curl_set_netrc_file(CURL *handle,  char* file) {
    return curl_easy_setopt(handle, CURLOPT_NETRC_FILE, file);
}

static inline CURLcode curl_set_userpwd(CURL *handle,  char* userpwd) {
    return curl_easy_setopt(handle, CURLOPT_USERPWD, userpwd);
}

static inline CURLcode curl_set_proxyuserpwd(CURL *handle,  char* userpwd) {
    return curl_easy_setopt(handle, CURLOPT_PROXYUSERPWD, userpwd);
}

static inline CURLcode curl_set_username(CURL *handle,  char* username) {
    return curl_easy_setopt(handle, CURLOPT_USERNAME, userpwd);
}

static inline CURLcode curl_set_password(CURL *handle,  char* pwd) {
    return curl_easy_setopt(handle, CURLOPT_PASSWORD, pwd);
}

static inline CURLcode curl_set_login_options(CURL *handle, char *options) {
    return curl_easy_setopt(handle, CURLOPT_LOGIN_OPTIONS, options);
}

static inline CURLcode curl_set_proxyusername(CURL *handle, char *username) {
    return curl_easy_setopt(handle, CURLOPT_PROXYUSERNAME, username);
}

static inline CURLcode curl_set_proxypassword(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_PROXYPASSWORD, pwd);
}

static inline CURLcode curl_set_httpauth(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_HTTPAUTH, bitmask);
}

static inline CURLcode curl_set_tlsauth_username(CURL *handle, char *user) {
    return curl_easy_setopt(handle, CURLOPT_TLSAUTH_USERNAME, user);
}

static inline CURLcode curl_set_proxy_tlsauth_username(CURL *handle, char *user) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TLSAUTH_USERNAME, user);
}

static inline CURLcode curl_set_tlsauth_password(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_TLSAUTH_PASSWORD, pwd);
}

static inline CURLcode curl_set_proxy_tlsauth_password(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TLSAUTH_PASSWORD , pwd);
}

static inline CURLcode curl_set_tlsauth_type(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_TLSAUTH_TYPE, type);
}

static inline CURLcode curl_set_proxy_tlsauth_type(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TLSAUTH_TYPE, type);
}

static inline CURLcode curl_set_proxyauth(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_PROXYAUTH, bitmask);
}

static inline CURLcode curl_set_sasl_ir(CURL *handle, long enable) {
    return curl_easy_setopt(handle, CURLOPT_SASL_IR, enable);
}

static inline CURLcode curl_set_xoauth2_bearer(CURL *handle, char *token) {
    return curl_easy_setopt(handle, CURLOPT_XOAUTH2_BEARER, token);
}

//HTTP OPTIONS
static inline CURLcode curl_set_autoreferer(CURL *handle, long autorefer) {
    return curl_easy_setopt(handle, CURLOPT_AUTOREFERER, autorefer);
}


#endif /* CurlHelpers_h */
