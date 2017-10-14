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
    return curl_easy_setopt(curl, CURLOPT_URL, url);
}

//BEHAVIOR OPTIONS
static inline CURLcode curl_set_verbose(CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_VERBOSE, onoff);
}

static inline CURLcode curl_set_header(CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_HEADER, onoff);
}

static inline CURLcode curl_set_noprogress(CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_NOPROGRESS, onoff);
}

static inline CURLcode curl_set_nosignal(CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_NOSIGNAL, onoff);
}

static inline CURLcode curl_set_wildcardmatch(CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_WILDCARDMATCH, onoff);
}


static inline CURLcode curl_set_wildcardmatch(CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_WILDCARDMATCH, onoff);
}

//CALLBACK OPTIONS
typedef size_t (*write_callback)(char *ptr, size_t size, size_t nmemb, void *userdata);
static inline CURLcode curl_set_writefunction(CURL *handle, write_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback);
}

static inline CURLcode curl_set_writedata(CURL *handle, void* pointer) {
    return curl_easy_setopt(curl, CURLOPT_WRITEDATA, callback);
}

typedef size_t (*read_callback)(char *buffer, size_t size, size_t nitems, void *instream);
static inline CURLcode curl_set_readfunction(CURL *handle, read_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_READFUNCTION, callback);
}

static inline CURLcode curl_set_readdata(CURL *handle, void* pointer) {
    return curl_easy_setopt(curl, CURLOPT_READDATA, callback);
}

typedef curlioerr (*ioctl_callback)(CURL *handle, int cmd, void *clientp);
static inline CURLcode curl_set_ioctlfunction(CURL *handle, ioctl_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_IOCTLFUNCTION, callback);
}

static inline CURLcode curl_set_ioctldata(CURL *handle, void* pointer) {
    return curl_easy_setopt(curl, CURLOPT_IOCTLDATA, pointer);
}

typedef int (*seek_callback)(void *userp, curl_off_t offset, int origin);
static inline CURLcode curl_set_seekfunction(CURL *handle, seek_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_SEEKFUNCTION, callback);
}


static inline CURLcode curl_set_seekdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_SEEKDATA, pointer);
}

typedef int (*sockopt_callback)(void *clientp,
                     curl_socket_t curlfd,
                     curlsocktype purpose);
static inline CURLcode curl_set_sockoptfunction(CURL *handle, sockopt_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_SOCKOPTFUNCTION, callback);
}

static inline CURLcode curl_set_sockoptdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_SOCKOPTDATA, pointer);
}

typedef curl_socket_t (*opensocket_callback)(void *clientp,
                                  curlsocktype purpose,
                                  struct curl_sockaddr *address);
static inline CURLcode curl_set_opensocketfunction(CURL *handle, opensocket_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_OPENSOCKETFUNCTION, callback);
}

static inline CURLcode curl_set_opensocketdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_OPENSOCKETDATA, pointer);
}

typedef int (*closesocket_callback)(void *clientp, curl_socket_t item);
static inline CURLcode curl_set_closesocketfunction(CURL *handle, closesocket_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_CLOSESOCKETFUNCTION, callback);
}

static inline CURLcode curl_set_closesocketdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_CLOSESOCKETDATA, pointer);
}

typedef int (*progress_callback)(void *clientp,   
                                double dltotal,   
                                double dlnow,   
                                double ultotal,   
                                double ulnow);
static inline CURLcode curl_set_progressfunction(CURL *handle, progress_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_PROGRESSFUNCTION, callback);
}

static inline CURLcode curl_set_progressdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_PROGRESSDATA, pointer);
}


static inline CURLcode curl_set_xferinfofunction(CURL *handle, progress_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_XFERINFOFUNCTION, callback);
}

static inline CURLcode curl_set_xferinfodata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_XFERINFODATA, pointer);
}

typedef size_t (*header_callback)(char *buffer,   
                                    size_t size,   
                                    size_t nitems,   
                                    void *userdata);
static inline CURLcode curl_set_headerfunction(CURL *handle, header_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, callback);
}

static inline CURLcode curl_set_headerdata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_HEADERDATA, pointer);
}

typedef int (*debug_callback)(CURL *handle,
                                curl_infotype type,
                                char *data,
                                size_t size,
                                void *userptr);
static inline CURLcode curl_set_debugfunction(CURL *handle, debug_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_DEBUGFUNCTION, callback);
}

static inline CURLcode curl_set_debugdata(CURL *handle,  void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_DEBUGDATA, pointer);
}

typedef CURLcode (*ssl_ctx_callback)(CURL *curl, 
                                    void *ssl_ctx, 
                                    void *userptr);
static inline CURLcode curl_set_ssl_ctx_function(CURL *handle, ssl_ctx_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_SSL_CTX_FUNCTION, callback);
}

static inline CURLcode curl_set_ssl_ctx_data(CURL *handle,  void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_SSL_CTX_DATA, pointer);
}


typedef CURLcode (*conv_callback)(char *ptr, 
                                    size_t length);
static inline CURLcode curl_set_conv_to_network_function(CURL *handle, conv_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_CONV_TO_NETWORK_FUNCTION, callback);
}

static inline CURLcode curl_set_conv_from_network_function(CURL *handle, conv_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_CONV_FROM_NETWORK_FUNCTION, callback);
}

static inline CURLcode curl_set_conv_from_utf8_function(CURL *handle, conv_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_CONV_FROM_UTF8_FUNCTION, callback);
}

typedef size_t (*interleave_callback)(void *ptr, 
                                        size_t size, 
                                        size_t nmemb,
                                        void *userdata);
static inline CURLcode curl_set_interleavefunction(CURL *handle, interleave_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_INTERLEAVEFUNCTION, callback);
}


static inline CURLcode curl_set_interleavedata(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_INTERLEAVEDATA, pointer);
}

typedef long (*chunk_bgn_callback)(const void *transfer_info, 
                                    void *ptr,
                                    int remains);
static inline CURLcode curl_set_chunk_bgn_function(CURL *handle, chunk_bgn_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_CHUNK_BGN_FUNCTION, callback);
}

typedef long (*chunk_end_callback)(void *ptr);
static inline CURLcode curl_set_chunk_end_function(CURL *handle, chunk_end_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_CHUNK_END_FUNCTION, callback);
}

static inline CURLcode curl_set_chunk_data(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_CHUNK_DATA, pointer);
}


typedef int (*fnmatch_callback)(void *ptr,
                     const char *pattern,
                     const char *string);
static inline CURLcode curl_set_fnmatch_function(CURL *handle, fnmatch_callback callback) {
    return curl_easy_setopt(curl, CURLOPT_FNMATCH_FUNCTION, callback);
}

static inline CURLcode curl_set_fnmatch_data(CURL *handle, void *pointer) {
    return curl_easy_setopt(curl, CURLOPT_FNMATCH_DATA, pointer);
}

static inline CURLcode curl_set_suppress_connect_headers (CURL *handle, long onoff) {
    return curl_easy_setopt(curl, CURLOPT_SUPPRESS_CONNECT_HEADERS , onoff);
}


#endif /* CurlHelpers_h */
