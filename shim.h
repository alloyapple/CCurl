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


//const var 
static const int CCURLOPT_VERBOSE = CURLOPT_VERBOSE;
static const int CCURLOPT_HEADER = CURLOPT_HEADER;
static const int CCURLOPT_NOPROGRESS = CURLOPT_NOPROGRESS;
static const int CCURLOPT_NOSIGNAL = CURLOPT_NOSIGNAL;
static const int CCURLOPT_WILDCARDMATCH = CURLOPT_WILDCARDMATCH;
static const int CCURLOPT_WRITEFUNCTION = CURLOPT_WRITEFUNCTION;
static const int CCURLOPT_WRITEDATA = CURLOPT_WRITEDATA;
static const int CCURLOPT_READFUNCTION = CURLOPT_READFUNCTION;
static const int CCURLOPT_READDATA = CURLOPT_READDATA;
static const int CCURLOPT_IOCTLFUNCTION = CURLOPT_IOCTLFUNCTION;
static const int CCURLOPT_IOCTLDATA = CURLOPT_IOCTLDATA;
static const int CCURLOPT_SEEKFUNCTION = CURLOPT_SEEKFUNCTION;
static const int CCURLOPT_SEEKDATA = CURLOPT_SEEKDATA;
static const int CCURLOPT_SOCKOPTFUNCTION = CURLOPT_SOCKOPTFUNCTION;
static const int CCURLOPT_SOCKOPTDATA = CURLOPT_SOCKOPTDATA;
static const int CCURLOPT_OPENSOCKETFUNCTION = CURLOPT_OPENSOCKETFUNCTION;
static const int CCURLOPT_OPENSOCKETDATA = CURLOPT_OPENSOCKETDATA;
static const int CCURLOPT_CLOSESOCKETFUNCTION = CURLOPT_CLOSESOCKETFUNCTION;
static const int CCURLOPT_CLOSESOCKETDATA = CURLOPT_CLOSESOCKETDATA;
static const int CCURLOPT_PROGRESSFUNCTION = CURLOPT_PROGRESSFUNCTION;
static const int CCURLOPT_PROGRESSDATA = CURLOPT_PROGRESSDATA;
static const int CCURLOPT_XFERINFOFUNCTION = CURLOPT_XFERINFOFUNCTION;
static const int CCURLOPT_XFERINFODATA = CURLOPT_XFERINFODATA;
static const int CCURLOPT_HEADERFUNCTION = CURLOPT_HEADERFUNCTION;
static const int CCURLOPT_HEADERDATA = CURLOPT_HEADERDATA;
static const int CCURLOPT_DEBUGFUNCTION = CURLOPT_DEBUGFUNCTION;
static const int CCURLOPT_DEBUGDATA = CURLOPT_DEBUGDATA;
static const int CCURLOPT_SSL_CTX_FUNCTION = CURLOPT_SSL_CTX_FUNCTION; 
static const int CCURLOPT_SSL_CTX_DATA = CURLOPT_SSL_CTX_DATA; 
static const int CCURLOPT_CONV_TO_NETWORK_FUNCTION = CURLOPT_CONV_TO_NETWORK_FUNCTION; 
static const int CCURLOPT_CONV_FROM_NETWORK_FUNCTION = CURLOPT_CONV_FROM_NETWORK_FUNCTION; 
static const int CCURLOPT_CONV_FROM_UTF8_FUNCTION = CURLOPT_CONV_FROM_UTF8_FUNCTION; 
static const int CCURLOPT_INTERLEAVEFUNCTION = CURLOPT_INTERLEAVEFUNCTION; 
static const int CCURLOPT_INTERLEAVEDATA = CURLOPT_INTERLEAVEDATA; 
static const int CCURLOPT_CHUNK_BGN_FUNCTION = CURLOPT_CHUNK_BGN_FUNCTION; 
static const int CCURLOPT_CHUNK_END_FUNCTION = CURLOPT_CHUNK_END_FUNCTION; 
static const int CCURLOPT_CHUNK_DATA = CURLOPT_CHUNK_DATA; 
static const int CCURLOPT_FNMATCH_FUNCTION = CURLOPT_FNMATCH_FUNCTION; 
static const int CCURLOPT_FNMATCH_DATA = CURLOPT_FNMATCH_DATA; 
static const int CCURLOPT_ERRORBUFFER = CURLOPT_ERRORBUFFER; 
static const int CCURLOPT_STDERR = CURLOPT_STDERR; 
static const int CCURLOPT_FAILONERROR = CURLOPT_FAILONERROR; 
static const int CCURLOPT_KEEP_SENDING_ON_ERROR = CURLOPT_KEEP_SENDING_ON_ERROR; 
static const int CCURLOPT_URL = CURLOPT_URL; 
static const int CCURLOPT_PATH_AS_IS = CURLOPT_PATH_AS_IS; 
static const int CCURLOPT_PROTOCOLS = CURLOPT_PROTOCOLS; 
static const int CCURLOPT_REDIR_PROTOCOLS = CURLOPT_REDIR_PROTOCOLS; 
static const int CCURLOPT_DEFAULT_PROTOCOL = CURLOPT_DEFAULT_PROTOCOL; 
static const int CCURLOPT_PROXY = CURLOPT_PROXY; 
static const int CCURLOPT_PRE_PROXY = CURLOPT_PRE_PROXY; 
static const int CCURLOPT_PROXYPORT = CURLOPT_PROXYPORT; 
static const int CCURLOPT_PROXYTYPE = CURLOPT_PROXYTYPE; 
static const int CCURLOPT_NOPROXY = CURLOPT_NOPROXY; 
static const int CCURLOPT_HTTPPROXYTUNNEL = CURLOPT_HTTPPROXYTUNNEL; 
static const int CCURLOPT_CONNECT_TO = CURLOPT_CONNECT_TO; 
static const int CCURLOPT_SOCKS5_AUTH = CURLOPT_SOCKS5_AUTH; 
static const int CCURLOPT_SOCKS5_GSSAPI_SERVICE = CURLOPT_SOCKS5_GSSAPI_SERVICE; 
static const int CCURLOPT_SOCKS5_GSSAPI_NEC = CURLOPT_SOCKS5_GSSAPI_NEC; 
static const int CCURLOPT_PROXY_SERVICE_NAME = CURLOPT_PROXY_SERVICE_NAME; 
static const int CCURLOPT_SERVICE_NAME = CURLOPT_SERVICE_NAME; 
static const int CCURLOPT_INTERFACE = CURLOPT_INTERFACE; 
static const int CCURLOPT_LOCALPORT = CURLOPT_LOCALPORT; 
static const int CCURLOPT_LOCALPORTRANGE = CURLOPT_LOCALPORTRANGE; 
static const int CCURLOPT_DNS_CACHE_TIMEOUT = CURLOPT_DNS_CACHE_TIMEOUT; 
static const int CCURLOPT_DNS_USE_GLOBAL_CACHE = CURLOPT_DNS_USE_GLOBAL_CACHE; 
static const int CCURLOPT_BUFFERSIZE = CURLOPT_BUFFERSIZE; 
static const int CCURLOPT_PORT = CURLOPT_PORT; 
static const int CCURLOPT_TCP_FASTOPEN = CURLOPT_TCP_FASTOPEN; 
static const int CCURLOPT_TCP_NODELAY = CURLOPT_TCP_NODELAY; 
static const int CCURLOPT_ADDRESS_SCOPE = CURLOPT_ADDRESS_SCOPE; 
static const int CCURLOPT_TCP_KEEPALIVE = CURLOPT_TCP_KEEPALIVE; 
static const int CCURLOPT_TCP_KEEPIDLE = CURLOPT_TCP_KEEPIDLE; 
static const int CCURLOPT_TCP_KEEPINTVL = CURLOPT_TCP_KEEPINTVL; 
static const int CCURLOPT_UNIX_SOCKET_PATH = CURLOPT_UNIX_SOCKET_PATH; 
static const int CCURLOPT_ABSTRACT_UNIX_SOCKET = CURLOPT_ABSTRACT_UNIX_SOCKET; 
static const int CCURLOPT_NETRC = CURLOPT_NETRC; 
static const int CCURLOPT_NETRC_FILE = CURLOPT_NETRC_FILE; 
static const int CCURLOPT_USERPWD = CURLOPT_USERPWD; 
static const int CCURLOPT_PROXYUSERPWD = CURLOPT_PROXYUSERPWD; 
static const int CCURLOPT_USERNAME = CURLOPT_USERNAME; 
static const int CCURLOPT_PASSWORD = CURLOPT_PASSWORD; 
static const int CCURLOPT_LOGIN_OPTIONS = CURLOPT_LOGIN_OPTIONS; 
static const int CCURLOPT_PROXYUSERNAME = CURLOPT_PROXYUSERNAME; 
static const int CCURLOPT_PROXYPASSWORD = CURLOPT_PROXYPASSWORD; 
static const int CCURLOPT_HTTPAUTH = CURLOPT_HTTPAUTH; 
static const int CCURLOPT_TLSAUTH_USERNAME = CURLOPT_TLSAUTH_USERNAME; 
static const int CCURLOPT_PROXY_TLSAUTH_USERNAME = CURLOPT_PROXY_TLSAUTH_USERNAME; 
static const int CCURLOPT_TLSAUTH_PASSWORD = CURLOPT_TLSAUTH_PASSWORD; 
static const int CCURLOPT_PROXY_TLSAUTH_PASSWORD = CURLOPT_PROXY_TLSAUTH_PASSWORD; 
static const int CCURLOPT_TLSAUTH_TYPE = CURLOPT_TLSAUTH_TYPE; 
static const int CCURLOPT_PROXY_TLSAUTH_TYPE = CURLOPT_PROXY_TLSAUTH_TYPE; 
static const int CCURLOPT_PROXYAUTH = CURLOPT_PROXYAUTH; 
static const int CCURLOPT_SASL_IR = CURLOPT_SASL_IR; 
static const int CCURLOPT_XOAUTH2_BEARER = CURLOPT_XOAUTH2_BEARER; 
static const int CCURLOPT_AUTOREFERER = CURLOPT_AUTOREFERER; 
static const int CCURLOPT_ACCEPT_ENCODING = CURLOPT_ACCEPT_ENCODING; 
static const int CCURLOPT_TRANSFER_ENCODING = CURLOPT_TRANSFER_ENCODING; 
static const int CCURLOPT_FOLLOWLOCATION = CURLOPT_FOLLOWLOCATION; 
static const int CCURLOPT_UNRESTRICTED_AUTH = CURLOPT_UNRESTRICTED_AUTH; 
static const int CCURLOPT_MAXREDIRS = CURLOPT_MAXREDIRS; 
static const int CCURLOPT_POSTREDIR = CURLOPT_POSTREDIR; 
static const int CCURLOPT_PUT = CURLOPT_PUT; 
static const int CCURLOPT_POST = CURLOPT_POST; 
static const int CCURLOPT_POSTFIELDS = CURLOPT_POSTFIELDS; 
static const int CCURLOPT_POSTFIELDSIZE = CURLOPT_POSTFIELDSIZE; 
static const int CCURLOPT_POSTFIELDSIZE_LARGE = CURLOPT_POSTFIELDSIZE_LARGE; 
static const int CCURLOPT_COPYPOSTFIELDS = CURLOPT_COPYPOSTFIELDS; 
static const int CCURLOPT_HTTPPOST = CURLOPT_HTTPPOST; 
static const int CCURLOPT_REFERER = CURLOPT_REFERER; 
static const int CCURLOPT_USERAGENT = CURLOPT_USERAGENT; 
static const int CCURLOPT_HTTPHEADER = CURLOPT_HTTPHEADER; 
static const int CCURLOPT_HEADEROPT = CURLOPT_HEADEROPT; 
static const int CCURLOPT_PROXYHEADER = CURLOPT_PROXYHEADER; 
static const int CCURLOPT_HTTP200ALIASES = CURLOPT_HTTP200ALIASES; 
static const int CCURLOPT_COOKIE = CURLOPT_COOKIE; 
static const int CCURLOPT_COOKIEFILE = CURLOPT_COOKIEFILE; 
static const int CCURLOPT_COOKIEJAR = CURLOPT_COOKIEJAR; 
static const int CCURLOPT_COOKIESESSION = CURLOPT_COOKIESESSION; 
static const int CCURLOPT_COOKIELIST = CURLOPT_COOKIELIST; 
static const int CCURLOPT_HTTPGET = CURLOPT_HTTPGET; 
static const int CCURLOPT_REQUEST_TARGET = CURLOPT_REQUEST_TARGET; 
static const int CCURLOPT_HTTP_VERSION = CURLOPT_HTTP_VERSION; 
static const int CCURLOPT_IGNORE_CONTENT_LENGTH = CURLOPT_IGNORE_CONTENT_LENGTH; 
static const int CCURLOPT_HTTP_CONTENT_DECODING = CURLOPT_HTTP_CONTENT_DECODING; 
static const int CCURLOPT_HTTP_TRANSFER_DECODING = CURLOPT_HTTP_TRANSFER_DECODING; 
static const int CCURLOPT_EXPECT_100_TIMEOUT_MS = CURLOPT_EXPECT_100_TIMEOUT_MS; 
static const int CCURLOPT_PIPEWAIT = CURLOPT_PIPEWAIT; 
static const int CCURLOPT_STREAM_DEPENDS = CURLOPT_STREAM_DEPENDS; 
static const int CCURLOPT_STREAM_DEPENDS_E = CURLOPT_STREAM_DEPENDS_E; 
static const int CCURLOPT_STREAM_WEIGHT = CURLOPT_STREAM_WEIGHT; 
static const int CCURLOPT_MAIL_FROM = CURLOPT_MAIL_FROM; 
static const int CCURLOPT_MAIL_RCPT = CURLOPT_MAIL_RCPT; 
static const int CCURLOPT_MAIL_AUTH = CURLOPT_MAIL_AUTH; 
static const int CCURLOPT_TFTP_NO_OPTIONS = CURLOPT_TFTP_NO_OPTIONS; 
static const int CCURLOPT_TFTP_BLKSIZE = CURLOPT_TFTP_BLKSIZE; 
static const int CCURLOPT_FTPPORT = CURLOPT_FTPPORT; 
static const int CCURLOPT_QUOTE = CURLOPT_QUOTE; 
static const int CCURLOPT_POSTQUOTE = CURLOPT_POSTQUOTE; 
static const int CCURLOPT_PREQUOTE = CURLOPT_PREQUOTE; 
static const int CCURLOPT_APPEND = CURLOPT_APPEND; 
static const int CCURLOPT_FTP_USE_EPRT = CURLOPT_FTP_USE_EPRT; 
static const int CCURLOPT_FTP_USE_EPSV = CURLOPT_FTP_USE_EPSV; 
static const int CCURLOPT_FTP_USE_PRET = CURLOPT_FTP_USE_PRET; 
static const int CCURLOPT_FTP_CREATE_MISSING_DIRS = CURLOPT_FTP_CREATE_MISSING_DIRS; 
static const int CCURLOPT_FTP_RESPONSE_TIMEOUT = CURLOPT_FTP_RESPONSE_TIMEOUT; 
static const int CCURLOPT_FTP_ALTERNATIVE_TO_USER = CURLOPT_FTP_ALTERNATIVE_TO_USER; 
static const int CCURLOPT_FTP_SKIP_PASV_IP = CURLOPT_FTP_SKIP_PASV_IP; 
static const int CCURLOPT_FTPSSLAUTH = CURLOPT_FTPSSLAUTH; 
static const int CCURLOPT_FTP_SSL_CCC = CURLOPT_FTP_SSL_CCC; 
static const int CCURLOPT_FTP_ACCOUNT = CURLOPT_FTP_ACCOUNT; 
static const int CCURLOPT_FTP_FILEMETHOD = CURLOPT_FTP_FILEMETHOD; 
static const int CCURLOPT_RTSP_REQUEST = CURLOPT_RTSP_REQUEST; 
static const int CCURLOPT_RTSP_SESSION_ID = CURLOPT_RTSP_SESSION_ID; 
static const int CCURLOPT_RTSP_STREAM_URI = CURLOPT_RTSP_STREAM_URI; 
static const int CCURLOPT_RTSP_TRANSPORT = CURLOPT_RTSP_TRANSPORT; 
static const int CCURLOPT_RTSP_CLIENT_CSEQ = CURLOPT_RTSP_CLIENT_CSEQ; 
static const int CCURLOPT_TRANSFERTEXT = CURLOPT_TRANSFERTEXT; 
static const int CCURLOPT_PROXY_TRANSFER_MODE = CURLOPT_PROXY_TRANSFER_MODE; 
static const int CCURLOPT_CRLF = CURLOPT_CRLF; 
static const int CCURLOPT_RANGE = CURLOPT_RANGE; 
static const int CCURLOPT_RESUME_FROM = CURLOPT_RESUME_FROM; 
static const int CCURLOPT_RESUME_FROM_LARGE = CURLOPT_RESUME_FROM_LARGE; 
static const int CCURLOPT_CUSTOMREQUEST = CURLOPT_CUSTOMREQUEST; 
static const int CCURLOPT_FILETIME = CURLOPT_FILETIME; 
static const int CCURLOPT_DIRLISTONLY = CURLOPT_DIRLISTONLY; 
static const int CCURLOPT_NOBODY = CURLOPT_NOBODY; 
static const int CCURLOPT_INFILESIZE = CURLOPT_INFILESIZE; 
static const int CCURLOPT_UPLOAD = CURLOPT_UPLOAD; 
static const int CCURLOPT_MIMEPOST = CURLOPT_MIMEPOST; 
static const int CCURLOPT_MAXFILESIZE = CURLOPT_MAXFILESIZE; 
static const int CCURLOPT_MAXFILESIZE_LARGE = CURLOPT_MAXFILESIZE_LARGE; 
static const int CCURLOPT_TIMECONDITION = CURLOPT_TIMECONDITION; 
static const int CCURLOPT_TIMEVALUE = CURLOPT_TIMEVALUE; 
static const int CCURLOPT_TIMEOUT = CURLOPT_TIMEOUT; 
static const int CCURLOPT_TIMEOUT_MS = CURLOPT_TIMEOUT_MS; 
static const int CCURLOPT_LOW_SPEED_LIMIT = CURLOPT_LOW_SPEED_LIMIT; 
static const int CCURLOPT_LOW_SPEED_TIME = CURLOPT_LOW_SPEED_TIME; 
static const int CCURLOPT_MAX_SEND_SPEED_LARGE = CURLOPT_MAX_SEND_SPEED_LARGE; 
static const int CCURLOPT_MAX_RECV_SPEED_LARGE = CURLOPT_MAX_RECV_SPEED_LARGE; 
static const int CCURLOPT_MAXCONNECTS = CURLOPT_MAXCONNECTS; 
static const int CCURLOPT_FRESH_CONNECT = CURLOPT_FRESH_CONNECT; 
static const int CCURLOPT_FORBID_REUSE = CURLOPT_FORBID_REUSE; 
static const int CCURLOPT_CONNECTTIMEOUT = CURLOPT_CONNECTTIMEOUT; 
static const int CCURLOPT_CONNECTTIMEOUT_MS = CURLOPT_CONNECTTIMEOUT_MS; 
static const int CCURLOPT_IPRESOLVE = CURLOPT_IPRESOLVE; 
static const int CCURLOPT_CONNECT_ONLY = CURLOPT_CONNECT_ONLY; 
static const int CCURLOPT_USE_SSL = CURLOPT_USE_SSL; 
static const int CCURLOPT_RESOLVE = CURLOPT_RESOLVE; 
static const int CCURLOPT_DNS_INTERFACE = CURLOPT_DNS_INTERFACE; 
static const int CCURLOPT_DNS_LOCAL_IP4 = CURLOPT_DNS_LOCAL_IP4; 
static const int CCURLOPT_DNS_LOCAL_IP6 = CURLOPT_DNS_LOCAL_IP6; 
static const int CCURLOPT_DNS_SERVERS = CURLOPT_DNS_SERVERS; 
static const int CCURLOPT_ACCEPTTIMEOUT_MS = CURLOPT_ACCEPTTIMEOUT_MS; 
static const int CCURLOPT_SSLCERT = CURLOPT_SSLCERT; 
static const int CCURLOPT_PROXY_SSLCERT = CURLOPT_PROXY_SSLCERT; 
static const int CCURLOPT_SSLCERTTYPE = CURLOPT_SSLCERTTYPE; 
static const int CCURLOPT_PROXY_SSLCERTTYPE = CURLOPT_PROXY_SSLCERTTYPE; 
static const int CCURLOPT_SSLKEY = CURLOPT_SSLKEY; 
static const int CCURLOPT_PROXY_SSLKEY = CURLOPT_PROXY_SSLKEY; 
static const int CCURLOPT_SSLKEYTYPE = CURLOPT_SSLKEYTYPE; 
static const int CCURLOPT_PROXY_SSLKEYTYPE = CURLOPT_PROXY_SSLKEYTYPE; 
static const int CCURLOPT_KEYPASSWD = CURLOPT_KEYPASSWD; 
static const int CCURLOPT_PROXY_KEYPASSWD = CURLOPT_PROXY_KEYPASSWD; 
static const int CCURLOPT_SSL_ENABLE_ALPN = CURLOPT_SSL_ENABLE_ALPN; 
static const int CCURLOPT_SSL_ENABLE_NPN = CURLOPT_SSL_ENABLE_NPN; 
static const int CCURLOPT_SSLENGINE = CURLOPT_SSLENGINE; 
static const int CCURLOPT_SSLENGINE_DEFAULT = CURLOPT_SSLENGINE_DEFAULT; 
static const int CCURLOPT_SSL_FALSESTART = CURLOPT_SSL_FALSESTART; 
static const int CCURLOPT_SSLVERSION = CURLOPT_SSLVERSION; 
static const int CCURLOPT_PROXY_SSLVERSION = CURLOPT_PROXY_SSLVERSION; 
static const int CCURLOPT_SSL_VERIFYHOST = CURLOPT_SSL_VERIFYHOST; 
static const int CCURLOPT_PROXY_SSL_VERIFYHOST = CURLOPT_PROXY_SSL_VERIFYHOST; 
static const int CCURLOPT_SSL_VERIFYPEER = CURLOPT_SSL_VERIFYPEER; 
static const int CCURLOPT_PROXY_SSL_VERIFYPEER = CURLOPT_PROXY_SSL_VERIFYPEER; 
static const int CCURLOPT_PROXY_SSL_VERIFYSTATUS = CURLOPT_PROXY_SSL_VERIFYSTATUS; 
static const int CCURLOPT_CAINFO = CURLOPT_CAINFO; 
static const int CCURLOPT_PROXY_CAINFO = CURLOPT_PROXY_CAINFO; 
static const int CCURLOPT_ISSUERCERT = CURLOPT_ISSUERCERT; 
static const int CCURLOPT_CAPATH = CURLOPT_CAPATH; 
static const int CCURLOPT_PROXY_CAPATH = CURLOPT_PROXY_CAPATH; 
static const int CCURLOPT_CRLFILE = CURLOPT_CRLFILE; 
static const int CCURLOPT_PROXY_CRLFILE = CURLOPT_PROXY_CRLFILE; 
static const int CCURLOPT_CERTINFO = CURLOPT_CERTINFO; 
static const int CCURLOPT_PINNEDPUBLICKEY = CURLOPT_PINNEDPUBLICKEY; 
static const int CCURLOPT_PROXY_PINNEDPUBLICKEY = CURLOPT_PROXY_PINNEDPUBLICKEY; 
static const int CCURLOPT_RANDOM_FILE = CURLOPT_RANDOM_FILE; 
static const int CCURLOPT_EGDSOCKET = CURLOPT_EGDSOCKET; 
static const int CCURLOPT_SSL_CIPHER_LIST = CURLOPT_SSL_CIPHER_LIST; 
static const int CCURLOPT_PROXY_SSL_CIPHER_LIST = CURLOPT_PROXY_SSL_CIPHER_LIST; 
static const int CCURLOPT_SSL_SESSIONID_CACHE = CURLOPT_SSL_SESSIONID_CACHE; 
static const int CCURLOPT_SSL_OPTIONS = CURLOPT_SSL_OPTIONS; 
static const int CCURLOPT_PROXY_SSL_OPTIONS = CURLOPT_PROXY_SSL_OPTIONS; 
static const int CCURLOPT_KRBLEVEL = CURLOPT_KRBLEVEL; 
static const int CCURLOPT_GSSAPI_DELEGATION = CURLOPT_GSSAPI_DELEGATION; 
static const int CCURLOPT_SSH_AUTH_TYPES = CURLOPT_SSH_AUTH_TYPES; 
static const int CCURLOPT_SSH_COMPRESSION = CURLOPT_SSH_COMPRESSION; 
static const int CCURLOPT_SSH_HOST_PUBLIC_KEY_MD5 = CURLOPT_SSH_HOST_PUBLIC_KEY_MD5; 
static const int CCURLOPT_SSH_PUBLIC_KEYFILE = CURLOPT_SSH_PUBLIC_KEYFILE; 
static const int CCURLOPT_SSH_PRIVATE_KEYFILE = CURLOPT_SSH_PRIVATE_KEYFILE; 
static const int CCURLOPT_SSH_KNOWNHOSTS = CURLOPT_SSH_KNOWNHOSTS; 
static const int CCURLOPT_SSH_KEYFUNCTION = CURLOPT_SSH_KEYFUNCTION; 
static const int CCURLOPT_SSH_KEYDATA = CURLOPT_SSH_KEYDATA; 
static const int CCURLOPT_PRIVATE = CURLOPT_PRIVATE; 
static const int CCURLOPT_SHARE = CURLOPT_SHARE; 
static const int CCURLOPT_NEW_FILE_PERMS = CURLOPT_NEW_FILE_PERMS; 
static const int CCURLOPT_NEW_DIRECTORY_PERMS = CURLOPT_NEW_DIRECTORY_PERMS; 
static const int CCURLOPT_TELNETOPTIONS = CURLOPT_TELNETOPTIONS; 
static const int CCURLINFO_TELNETOPTIONS = CURLINFO_TELNETOPTIONS; 
static const int CCURLINFO_RESPONSE_CODE = CURLINFO_RESPONSE_CODE; 
static const int CCURLINFO_HTTP_CONNECTCODE = CURLINFO_HTTP_CONNECTCODE; 
static const int CCURLOPT_HTTP_VERSION = CURLOPT_HTTP_VERSION; 
static const int CCURLINFO_FILETIME = CURLINFO_FILETIME; 
static const int CCURLINFO_TOTAL_TIME = CURLINFO_TOTAL_TIME; 
static const int CCURLINFO_NAMELOOKUP_TIME = CURLINFO_NAMELOOKUP_TIME; 
static const int CCURLINFO_CONNECT_TIME = CURLINFO_CONNECT_TIME; 
static const int CCURLINFO_APPCONNECT_TIME = CURLINFO_APPCONNECT_TIME; 
static const int CCURLINFO_PRETRANSFER_TIME = CURLINFO_PRETRANSFER_TIME; 
static const int CCURLINFO_STARTTRANSFER_TIME = CURLINFO_STARTTRANSFER_TIME; 
static const int CCURLINFO_REDIRECT_TIME = CURLINFO_REDIRECT_TIME; 
static const int CCURLINFO_REDIRECT_COUNT = CURLINFO_REDIRECT_COUNT; 
static const int CCURLINFO_REDIRECT_URL = CURLINFO_REDIRECT_URL; 
static const int CCURLINFO_SIZE_UPLOAD = CURLINFO_SIZE_UPLOAD; 
static const int CCURLINFO_HEADER_SIZE = CURLINFO_HEADER_SIZE; 
static const int CCURLINFO_REQUEST_SIZE = CURLINFO_REQUEST_SIZE; 
static const int CCURLINFO_SSL_VERIFYRESULT = CURLINFO_SSL_VERIFYRESULT; 
static const int CCURLINFO_PROXY_SSL_VERIFYRESULT = CURLINFO_PROXY_SSL_VERIFYRESULT; 
static const int CCURLINFO_SSL_ENGINES = CURLINFO_SSL_ENGINES; 
static const int CCURLINFO_CONTENT_TYPE = CURLINFO_CONTENT_TYPE; 
static const int CCURLINFO_PRIVATE = CURLINFO_PRIVATE; 
static const int CCURLINFO_HTTPAUTH_AVAIL = CURLINFO_HTTPAUTH_AVAIL; 
static const int CCURLINFO_PROXYAUTH_AVAIL = CURLINFO_PROXYAUTH_AVAIL; 
static const int CCURLINFO_OS_ERRNO = CURLINFO_OS_ERRNO; 
static const int CCURLINFO_NUM_CONNECTS = CURLINFO_NUM_CONNECTS; 
static const int CCURLINFO_PRIMARY_IP = CURLINFO_PRIMARY_IP; 
static const int CCURLINFO_PRIMARY_PORT = CURLINFO_PRIMARY_PORT; 
static const int CCURLINFO_LOCAL_IP = CURLINFO_LOCAL_IP; 
static const int CCURLINFO_LOCAL_PORT = CURLINFO_LOCAL_PORT; 
static const int CCURLINFO_COOKIELIST = CURLINFO_COOKIELIST; 
static const int CCURLINFO_LASTSOCKET = CURLINFO_LASTSOCKET; 
static const int CCURLINFO_ACTIVESOCKET = CURLINFO_ACTIVESOCKET; 
static const int CCURLINFO_FTP_ENTRY_PATH = CURLINFO_FTP_ENTRY_PATH; 
static const int CCURLINFO_CONDITION_UNMET = CURLINFO_CONDITION_UNMET; 
static const int CCURLINFO_RTSP_SESSION_ID = CURLINFO_RTSP_SESSION_ID; 
static const int CCURLINFO_RTSP_CLIENT_CSEQ = CURLINFO_RTSP_CLIENT_CSEQ; 
static const int CCURLINFO_RTSP_CLIENT_CSEQ = CURLINFO_RTSP_CLIENT_CSEQ; 
static const int CCURLINFO_RTSP_CSEQ_RECV = CURLINFO_RTSP_CSEQ_RECV; 

//functions
static inline CURLcode curl_easy_setopt_long(CURL *handle, int flag, long onoff) {
    return curl_easy_setopt(handle, flag, onoff);
}

typedef size_t (*write_callback)(char *ptr, size_t size, size_t nmemb, void *userdata);
static inline CURLcode curl_easy_setopt_writefunction(CURL *handle, int flag, write_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

static inline CURLcode curl_set_writedata(CURL *handle, int flag, void* pointer) {
    return curl_easy_setopt(handle, flag, pointer);
}

typedef size_t (*read_callback)(char *buffer, size_t size, size_t nitems, void *instream);
static inline CURLcode curl_easy_setopt_readfunction(CURL *handle, int flag, read_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef curlioerr (*ioctl_callback)(CURL *handle, int cmd, void *clientp);
static inline CURLcode curl_easy_setopt_ioctlfunction(CURL *handle, int flag, ioctl_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef int (*seek_callback)(void *userp, curl_off_t offset, int origin);
static inline CURLcode curl_easy_setopt_seekfunction(CURL *handle, int flag, seek_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef int (*sockopt_callback)(void *clientp,
                     curl_socket_t curlfd,
                     curlsocktype purpose);
static inline CURLcode curl_easy_setopt_sockoptfunction(CURL *handle, int flag, sockopt_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef curl_socket_t (*opensocket_callback)(void *clientp,
                                  curlsocktype purpose,
                                  struct curl_sockaddr *address);
static inline CURLcode curl_easy_setopt_opensocketfunction(CURL *handle, int flag, opensocket_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef int (*closesocket_callback)(void *clientp, curl_socket_t item);
static inline CURLcode curl_easy_setopt_closesocketfunction(CURL *handle, int flag, closesocket_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef int (*progress_callback)(void *clientp,   
                                double dltotal,   
                                double dlnow,   
                                double ultotal,   
                                double ulnow);
static inline CURLcode curl_easy_setopt_progressfunction(CURL *handle, int flag, progress_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef size_t (*header_callback)(char *buffer,   
                                    size_t size,   
                                    size_t nitems,   
                                    void *userdata);
static inline CURLcode curl_easy_setopt_headerfunction(CURL *handle, int flag, header_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

typedef int (*debug_callback)(CURL *handle,
                                curl_infotype type,
                                char *data,
                                size_t size,
                                void *userptr);
static inline CURLcode curl_easy_setopt_debugfunction(CURL *handle, int flag, debug_callback callback) {
    return curl_easy_setopt(handle, flag, callback);
}

//BEHAVIOR OPTIONS


//CALLBACK OPTIONS


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

/*
static inline CURLcode curl_set_keep_sending_on_error(CURL *handle, long keep_sending) {
    return curl_easy_setopt(handle, CURLOPT_KEEP_SENDING_ON_ERROR , keep_sending);
}
*/

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

//7.5.1
/*
static inline CURLcode curl_set_pre_proxy(CURL *handle, char *preproxy) {
    return curl_easy_setopt(handle, CURLOPT_PRE_PROXY , preproxy);
}
*/


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

//7.5.1
/*
static inline CURLcode curl_set_connect_to(CURL *handle,  struct curl_slist *connect_to) {
    return curl_easy_setopt(handle, CURLOPT_CONNECT_TO , connect_to);
}
*/


//7.5.1
/*
static inline CURLcode curl_set_socks5_auth(CURL *handle,  long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_SOCKS5_AUTH , bitmask);
}
*/

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

//7.5.1
/*
static inline CURLcode curl_set_tcp_fastopen(CURL *handle,  long enable) {
    return curl_easy_setopt(handle, CURLOPT_TCP_FASTOPEN , enable);
}
*/

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

//7.5.1
/*
static inline CURLcode curl_set_abstract_unix_socket(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_ABSTRACT_UNIX_SOCKET , path);
}
*/

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
    return curl_easy_setopt(handle, CURLOPT_USERNAME, username);
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

//7.5.1
/*
static inline CURLcode curl_set_proxy_tlsauth_username(CURL *handle, char *user) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TLSAUTH_USERNAME, user);
}
*/


static inline CURLcode curl_set_tlsauth_password(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_TLSAUTH_PASSWORD, pwd);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_tlsauth_password(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TLSAUTH_PASSWORD , pwd);
}
*/

static inline CURLcode curl_set_tlsauth_type(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_TLSAUTH_TYPE, type);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_tlsauth_type(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TLSAUTH_TYPE, type);
}
*/

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

static inline CURLcode curl_set_accept_encoding(CURL *handle, char* enc) {
    return curl_easy_setopt(handle, CURLOPT_ACCEPT_ENCODING, enc);
}

static inline CURLcode curl_set_transfer_encoding(CURL *handle, char* enc) {
    return curl_easy_setopt(handle, CURLOPT_TRANSFER_ENCODING, enc);
}

static inline CURLcode curl_set_followlocation(CURL *handle, long enable) {
    return curl_easy_setopt(handle, CURLOPT_FOLLOWLOCATION, enable);
}

static inline CURLcode curl_set_unrestricted_auth(CURL *handle, long enable) {
    return curl_easy_setopt(handle, CURLOPT_UNRESTRICTED_AUTH, enable);
}

static inline CURLcode curl_set_maxredirs(CURL *handle, long amount) {
    return curl_easy_setopt(handle, CURLOPT_MAXREDIRS, amount);
}

static inline CURLcode curl_set_postredir(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_POSTREDIR, bitmask);
}

static inline CURLcode curl_set_put(CURL *handle, long put) {
    return curl_easy_setopt(handle, CURLOPT_PUT, put);
}

static inline CURLcode curl_set_post(CURL *handle, long post) {
    return curl_easy_setopt(handle, CURLOPT_POST, post);
}

static inline CURLcode curl_set_postfields(CURL *handle, char *postdata) {
    return curl_easy_setopt(handle, CURLOPT_POSTFIELDS, postdata);
}

static inline CURLcode curl_set_postfieldsize(CURL *handle, long size) {
    return curl_easy_setopt(handle, CURLOPT_POSTFIELDSIZE, size);
}

static inline CURLcode curl_set_postfieldsize_large(CURL *handle, curl_off_t size) {
    return curl_easy_setopt(handle, CURLOPT_POSTFIELDSIZE_LARGE, size);
}

static inline CURLcode curl_set_copypostfields(CURL *handle, char *data) {
    return curl_easy_setopt(handle, CURLOPT_COPYPOSTFIELDS, data);
}

static inline CURLcode curl_set_httppost(CURL *handle, struct curl_httppost *formpost) {
    return curl_easy_setopt(handle, CURLOPT_HTTPPOST, formpost);
}

static inline CURLcode curl_set_referer(CURL *handle, char *where) {
    return curl_easy_setopt(handle, CURLOPT_REFERER, where);
}

static inline CURLcode curl_set_useragent(CURL *handle, char *ua) {
    return curl_easy_setopt(handle, CURLOPT_USERAGENT, ua);
}

static inline CURLcode curl_set_httpheader(CURL *handle, struct curl_slist *headers) {
    return curl_easy_setopt(handle, CURLOPT_HTTPHEADER, headers);
}

static inline CURLcode curl_set_headeropt(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_HEADEROPT, bitmask);
}

static inline CURLcode curl_set_proxyheader(CURL *handle, struct curl_slist *headers) {
    return curl_easy_setopt(handle, CURLOPT_PROXYHEADER, headers);
}

static inline CURLcode curl_set_http200aliases(CURL *handle, struct curl_slist *aliases) {
    return curl_easy_setopt(handle, CURLOPT_HTTP200ALIASES, aliases);
}

static inline CURLcode curl_set_cookie(CURL *handle, char *cookie) {
    return curl_easy_setopt(handle, CURLOPT_COOKIE, cookie);
}

static inline CURLcode curl_set_cookiefile(CURL *handle, char *filename) {
    return curl_easy_setopt(handle, CURLOPT_COOKIEFILE, filename);
}

static inline CURLcode curl_set_cookiejar(CURL *handle, char *filename) {
    return curl_easy_setopt(handle, CURLOPT_COOKIEJAR, filename);
}

static inline CURLcode curl_set_cookiesession(CURL *handle, long init) {
    return curl_easy_setopt(handle, CURLOPT_COOKIESESSION, init);
}

static inline CURLcode curl_set_cookielist(CURL *handle, char *cookie) {
    return curl_easy_setopt(handle, CURLOPT_COOKIELIST, cookie);
}

static inline CURLcode curl_set_httpget(CURL *handle, long useget) {
    return curl_easy_setopt(handle, CURLOPT_HTTPGET, useget);
}

//7.5.1
/*
static inline CURLcode curl_set_request_target(CURL *handle, char *target) {
    return curl_easy_setopt(handle, CURLOPT_REQUEST_TARGET, target);
}
*/

static inline CURLcode curl_set_http_version(CURL *handle, long version) {
    return curl_easy_setopt(handle, CURLOPT_HTTP_VERSION, version);
}

static inline CURLcode curl_set_ignore_content_length(CURL *handle, long ignore) {
    return curl_easy_setopt(handle, CURLOPT_IGNORE_CONTENT_LENGTH, ignore);
}

static inline CURLcode curl_set_http_content_decoding(CURL *handle, long enabled) {
    return curl_easy_setopt(handle, CURLOPT_HTTP_CONTENT_DECODING , enabled);
}

static inline CURLcode curl_set_http_transfer_decoding(CURL *handle, long enabled) {
    return curl_easy_setopt(handle, CURLOPT_HTTP_TRANSFER_DECODING, enabled);
}

static inline CURLcode curl_set_expect_100_timeout_ms(CURL *handle, long milliseconds) {
    return curl_easy_setopt(handle, CURLOPT_EXPECT_100_TIMEOUT_MS, milliseconds);
}

static inline CURLcode curl_set_pipewait(CURL *handle, long wait) {
    return curl_easy_setopt(handle, CURLOPT_PIPEWAIT, wait);
}

static inline CURLcode curl_set_stream_depends(CURL *handle, CURL *dephandle) {
    return curl_easy_setopt(handle, CURLOPT_STREAM_DEPENDS, dephandle);
}

static inline CURLcode curl_set_stream_depends_e(CURL *handle, CURL *dephandle) {
    return curl_easy_setopt(handle, CURLOPT_STREAM_DEPENDS_E, dephandle);
}

static inline CURLcode curl_set_stream_weight(CURL *handle, long weight) {
    return curl_easy_setopt(handle, CURLOPT_STREAM_WEIGHT, weight);
}

//SMTP OPTIONS
static inline CURLcode curl_set_mail_from(CURL *handle, char *from) {
    return curl_easy_setopt(handle, CURLOPT_MAIL_FROM, from);
}

static inline CURLcode curl_set_mail_rcpt(CURL *handle, struct curl_slist *rcpts) {
    return curl_easy_setopt(handle, CURLOPT_MAIL_RCPT, rcpts);
}

static inline CURLcode curl_set_mail_auth(CURL *handle, char *auth) {
    return curl_easy_setopt(handle, CURLOPT_MAIL_AUTH, auth);
}

//TFTP OPTIONS
//7.5.1
/*
static inline CURLcode curl_set_tftp_no_options(CURL *handle, long onoff) {
    return curl_easy_setopt(handle, CURLOPT_TFTP_NO_OPTIONS, onoff);
}
*/

static inline CURLcode curl_set_tftp_blksize(CURL *handle, long blocksize) {
    return curl_easy_setopt(handle, CURLOPT_TFTP_BLKSIZE, blocksize);
}

//FTP OPTIONS
static inline CURLcode curl_set_ftpport(CURL *handle, char *spec) {
    return curl_easy_setopt(handle, CURLOPT_FTPPORT, spec);
}

static inline CURLcode curl_set_quote(CURL *handle, struct curl_slist *cmds) {
    return curl_easy_setopt(handle, CURLOPT_QUOTE, cmds);
}

static inline CURLcode curl_set_postquote(CURL *handle, struct curl_slist *cmds) {
    return curl_easy_setopt(handle, CURLOPT_POSTQUOTE, cmds);
}

static inline CURLcode curl_set_prequote(CURL *handle, struct curl_slist *cmds) {
    return curl_easy_setopt(handle, CURLOPT_PREQUOTE, cmds);
}

static inline CURLcode curl_set_append(CURL *handle, long append) {
    return curl_easy_setopt(handle, CURLOPT_APPEND, append);
}

static inline CURLcode curl_set_ftp_use_eprt(CURL *handle, long enabled) {
    return curl_easy_setopt(handle, CURLOPT_FTP_USE_EPRT, enabled);
}

static inline CURLcode curl_set_ftp_use_epsv(CURL *handle, long epsv) {
    return curl_easy_setopt(handle, CURLOPT_FTP_USE_EPSV, epsv);
}

static inline CURLcode curl_set_ftp_use_pret(CURL *handle, long enable) {
    return curl_easy_setopt(handle, CURLOPT_FTP_USE_PRET, enable);
}

static inline CURLcode curl_set_ftp_create_missing_dirs(CURL *handle, long create) {
    return curl_easy_setopt(handle, CURLOPT_FTP_CREATE_MISSING_DIRS, create);
}

static inline CURLcode curl_set_ftp_response_timeout(CURL *handle, long timeout) {
    return curl_easy_setopt(handle, CURLOPT_FTP_RESPONSE_TIMEOUT, timeout);
}

static inline CURLcode curl_set_ftp_alternative_to_user(CURL *handle, char *cmd) {
    return curl_easy_setopt(handle, CURLOPT_FTP_ALTERNATIVE_TO_USER, cmd);
}

static inline CURLcode curl_set_ftp_skip_pasv_ip(CURL *handle,  long skip) {
    return curl_easy_setopt(handle, CURLOPT_FTP_SKIP_PASV_IP, skip);
}

static inline CURLcode curl_set_ftpsslauth(CURL *handle, long order) {
    return curl_easy_setopt(handle, CURLOPT_FTPSSLAUTH, order);
}

static inline CURLcode curl_set_ftp_ssl_ccc(CURL *handle, long how) {
    return curl_easy_setopt(handle, CURLOPT_FTP_SSL_CCC, how);
}

static inline CURLcode curl_set_ftp_account(CURL *handle, char *account) {
    return curl_easy_setopt(handle, CURLOPT_FTP_ACCOUNT, account);
}

static inline CURLcode curl_set_ftp_filemethod(CURL *handle, long method) {
    return curl_easy_setopt(handle, CURLOPT_FTP_FILEMETHOD, method);
}

//RTSP OPTIONS

/*
    desc: https://curl.haxx.se/libcurl/c/CURLOPT_RTSP_REQUEST.html
*/
static inline CURLcode curl_set_rtsp_request(CURL *handle, long request) {
    return curl_easy_setopt(handle, CURLOPT_RTSP_REQUEST, request);
}

static inline CURLcode curl_set_rtsp_session_id(CURL *handle, char *id) {
    return curl_easy_setopt(handle, CURLOPT_RTSP_SESSION_ID, id);
}

static inline CURLcode curl_set_rtsp_stream_uri(CURL *handle, char *URI) {
    return curl_easy_setopt(handle, CURLOPT_RTSP_STREAM_URI, URI);
}

static inline CURLcode curl_set_rtsp_transport(CURL *handle, char *transport) {
    return curl_easy_setopt(handle, CURLOPT_RTSP_TRANSPORT, transport);
}

static inline CURLcode curl_set_rtsp_client_cseq(CURL *handle, long cseq) {
    return curl_easy_setopt(handle, CURLOPT_RTSP_CLIENT_CSEQ, cseq);
}


//PROTOCOL OPTIONS
static inline CURLcode curl_set_transfertext(CURL *handle, long text) {
    return curl_easy_setopt(handle, CURLOPT_TRANSFERTEXT, text);
}

static inline CURLcode curl_set_proxy_transfer_mode(CURL *handle, long enabled) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_TRANSFER_MODE, enabled);
}

static inline CURLcode curl_set_crlf(CURL *handle, long conv) {
    return curl_easy_setopt(handle, CURLOPT_CRLF, conv);
}

static inline CURLcode curl_set_range(CURL *handle, char *range) {
    return curl_easy_setopt(handle, CURLOPT_RANGE, range);
}

static inline CURLcode curl_set_resume_from(CURL *handle, long from) {
    return curl_easy_setopt(handle, CURLOPT_RESUME_FROM, from);
}

static inline CURLcode curl_set_resume_from_large(CURL *handle, curl_off_t from) {
    return curl_easy_setopt(handle, CURLOPT_RESUME_FROM_LARGE, from);
}

static inline CURLcode curl_set_customrequest(CURL *handle,  char *request) {
    return curl_easy_setopt(handle, CURLOPT_CUSTOMREQUEST, request);
}

static inline CURLcode curl_set_filetime(CURL *handle, long gettime) {
    return curl_easy_setopt(handle, CURLOPT_FILETIME, gettime);
}

static inline CURLcode curl_set_dirlistonly(CURL *handle, long listonly) {
    return curl_easy_setopt(handle, CURLOPT_DIRLISTONLY, listonly);
}

static inline CURLcode curl_set_nobody(CURL *handle,  long opt) {
    return curl_easy_setopt(handle, CURLOPT_NOBODY, opt);
}

static inline CURLcode curl_set_infilesize(CURL *handle, long filesize) {
    return curl_easy_setopt(handle, CURLOPT_INFILESIZE, filesize);
}

static inline CURLcode curl_set_upload(CURL *handle, long upload) {
    return curl_easy_setopt(handle, CURLOPT_UPLOAD, upload);
}

//7.5.1
/*
static inline CURLcode curl_set_mimepost(CURL *handle, curl_mime *mime) {
    return curl_easy_setopt(handle, CURLOPT_MIMEPOST, mime);
}
*/

static inline CURLcode curl_set_maxfilesize(CURL *handle, long size) {
    return curl_easy_setopt(handle, CURLOPT_MAXFILESIZE, size);
}

static inline CURLcode curl_set_maxfilesize_large(CURL *handle, curl_off_t size) {
    return curl_easy_setopt(handle, CURLOPT_MAXFILESIZE_LARGE, size);
}

static inline CURLcode curl_set_timecondition(CURL *handle, long cond) {
    return curl_easy_setopt(handle, CURLOPT_TIMECONDITION, cond);
}

static inline CURLcode curl_set_timevalue(CURL *handle, long val) {
    return curl_easy_setopt(handle, CURLOPT_TIMEVALUE, val);
}

//CONNECTION OPTIONS
static inline CURLcode curl_set_timeout(CURL *handle, long timeout) {
    return curl_easy_setopt(handle, CURLOPT_TIMEOUT, timeout);
}

static inline CURLcode curl_set_timeout_ms(CURL *handle, long timeout) {
    return curl_easy_setopt(handle, CURLOPT_TIMEOUT_MS, timeout);
}

static inline CURLcode curl_set_low_speed_limit(CURL *handle, long speedlimit) {
    return curl_easy_setopt(handle, CURLOPT_LOW_SPEED_LIMIT, speedlimit);
}

static inline CURLcode curl_set_low_speed_time(CURL *handle, long speedtime) {
    return curl_easy_setopt(handle, CURLOPT_LOW_SPEED_TIME, speedtime);
}

static inline CURLcode curl_set_max_send_speed_large(CURL *handle, curl_off_t maxspeed) {
    return curl_easy_setopt(handle, CURLOPT_MAX_SEND_SPEED_LARGE, maxspeed);
}

static inline CURLcode curl_set_max_recv_speed_large(CURL *handle, curl_off_t speed) {
    return curl_easy_setopt(handle, CURLOPT_MAX_RECV_SPEED_LARGE, speed);
}

static inline CURLcode curl_set_maxconnects(CURL *handle, long amount) {
    return curl_easy_setopt(handle, CURLOPT_MAXCONNECTS, amount);
}

static inline CURLcode curl_set_fresh_connect(CURL *handle, long fresh) {
    return curl_easy_setopt(handle, CURLOPT_FRESH_CONNECT, fresh);
}

static inline CURLcode curl_set_forbid_reuse(CURL *handle, long close) {
    return curl_easy_setopt(handle, CURLOPT_FORBID_REUSE, close);
}

static inline CURLcode curl_set_connecttimeout(CURL *handle, long timeout) {
    return curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT, timeout);
}

static inline CURLcode curl_set_connecttimeout_ms(CURL *handle, long timeout) {
    return curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT_MS, timeout);
}

static inline CURLcode curl_set_ipresolve(CURL *handle, long resolve) {
    return curl_easy_setopt(handle, CURLOPT_IPRESOLVE, resolve);
}

static inline CURLcode curl_set_connect_only(CURL *handle, long only) {
    return curl_easy_setopt(handle, CURLOPT_CONNECT_ONLY, only);
}

static inline CURLcode curl_set_use_ssl(CURL *handle, long level) {
    return curl_easy_setopt(handle, CURLOPT_USE_SSL, level);
}

static inline CURLcode curl_set_resolve(CURL *handle, struct curl_slist *hosts) {
    return curl_easy_setopt(handle, CURLOPT_RESOLVE, hosts);
}

static inline CURLcode curl_set_dns_interface(CURL *handle,  char *ifname) {
    return curl_easy_setopt(handle, CURLOPT_DNS_INTERFACE, ifname);
}

static inline CURLcode curl_set_dns_local_ip4(CURL *handle, char *address) {
    return curl_easy_setopt(handle, CURLOPT_DNS_LOCAL_IP4, address);
}

static inline CURLcode curl_set_dns_local_ip6(CURL *handle, char *address) {
    return curl_easy_setopt(handle, CURLOPT_DNS_LOCAL_IP6, address);
}

static inline CURLcode curl_set_dns_servers(CURL *handle, char *servers) {
    return curl_easy_setopt(handle, CURLOPT_DNS_SERVERS, servers);
}

static inline CURLcode curl_set_accepttimeout_ms(CURL *handle,  long ms) {
    return curl_easy_setopt(handle, CURLOPT_ACCEPTTIMEOUT_MS, ms);
}

//SSL and SECURITY OPTIONS
static inline CURLcode curl_set_sslcert(CURL *handle, char *cert) {
    return curl_easy_setopt(handle, CURLOPT_SSLCERT, cert);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_sslcert(CURL *handle, char *cert) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSLCERT, cert);
}
*/

//TODO: 7.5.1
/*
static inline CURLcode curl_set_sslcerttype(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_SSLCERTTYPE, type);
}
*/

//TODO: 7.5.1
/*
static inline CURLcode curl_set_proxy_sslcerttype(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSLCERTTYPE, type);
}
*/

static inline CURLcode curl_set_sslkey(CURL *handle, char *keyfile) {
    return curl_easy_setopt(handle, CURLOPT_SSLKEY, keyfile);
}

//TODO: 7.5.1
/*
static inline CURLcode curl_set_proxy_sslkey(CURL *handle, char *keyfile) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSLKEY, keyfile);
}
*/

static inline CURLcode curl_set_sslkeytype(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_SSLKEYTYPE, type);
}

//TODO: 7.5.1
/*
static inline CURLcode curl_set_proxy_sslkeytype(CURL *handle, char *type) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSLKEYTYPE, type);
}
*/

static inline CURLcode curl_set_keypasswd(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_KEYPASSWD, pwd);
}

//TODO: 7.5.1
/*
static inline CURLcode curl_set_proxy_keypasswd(CURL *handle, char *pwd) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_KEYPASSWD, pwd);
}
*/

static inline CURLcode curl_set_ssl_enable_alpn(CURL *handle, long npn) {
    return curl_easy_setopt(handle, CURLOPT_SSL_ENABLE_ALPN, npn);
}

static inline CURLcode curl_set_ssl_enable_npn(CURL *handle, long npn) {
    return curl_easy_setopt(handle, CURLOPT_SSL_ENABLE_NPN, npn);
}

static inline CURLcode curl_set_sslengine(CURL *handle, char *id) {
    return curl_easy_setopt(handle, CURLOPT_SSLENGINE, id);
}

static inline CURLcode curl_set_sslengine_default(CURL *handle, long val) {
    return curl_easy_setopt(handle, CURLOPT_SSLENGINE_DEFAULT, val);
}

static inline CURLcode curl_set_ssl_falsestart(CURL *handle, long enable) {
    return curl_easy_setopt(handle, CURLOPT_SSL_FALSESTART, enable);
}

static inline CURLcode curl_set_sslversion(CURL *handle, long version) {
    return curl_easy_setopt(handle, CURLOPT_SSLVERSION, version);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_sslversion(CURL *handle, long version) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSLVERSION, version);
}
*/

//7.5.1
/*
static inline CURLcode curl_set_ssl_verifyhost(CURL *handle, long verify) {
    return curl_easy_setopt(handle, CURLOPT_SSL_VERIFYHOST, verify);
}

static inline CURLcode curl_set_proxy_ssl_verifyhost(CURL *handle, long verify) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSL_VERIFYHOST, verify);
}

static inline CURLcode curl_set_ssl_verifypeer(CURL *handle, long verify) {
    return curl_easy_setopt(handle, CURLOPT_SSL_VERIFYPEER, verify);
}

static inline CURLcode curl_set_proxy_ssl_verifypeer(CURL *handle, long verify) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSL_VERIFYPEER, verify);
}

static inline CURLcode curl_set_ssl_verifystatus(CURL *handle, long verify) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSL_VERIFYSTATUS, verify);
}
*/

static inline CURLcode curl_set_cainfo(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_CAINFO, path);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_cainfo(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_CAINFO, path);
}


static inline CURLcode curl_set_issuercert(CURL *handle, char *file) {
    return curl_easy_setopt(handle, CURLOPT_ISSUERCERT, file);
}

static inline CURLcode curl_set_capath(CURL *handle, char *capath) {
    return curl_easy_setopt(handle, CURLOPT_CAPATH, capath);
}


static inline CURLcode curl_set_proxy_capath(CURL *handle, char *capath) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_CAPATH, capath);
}
*/

static inline CURLcode curl_set_crlfile(CURL *handle, char *file) {
    return curl_easy_setopt(handle, CURLOPT_CRLFILE, file);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_crlfile(CURL *handle, char *file) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_CRLFILE, file);
}
*/

static inline CURLcode curl_set_certinfo(CURL *handle, long certinfo) {
    return curl_easy_setopt(handle, CURLOPT_CERTINFO, certinfo);
}

static inline CURLcode curl_set_pinnedpublickey(CURL *handle, char *pinnedpubkey) {
    return curl_easy_setopt(handle, CURLOPT_PINNEDPUBLICKEY, pinnedpubkey);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_pinnedpublickey(CURL *handle, char *pinnedpubkey) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_PINNEDPUBLICKEY, pinnedpubkey);
}
*/

static inline CURLcode curl_set_random_file(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_RANDOM_FILE, path);
}

static inline CURLcode curl_set_egdsocket(CURL *handle, char *path) {
    return curl_easy_setopt(handle, CURLOPT_EGDSOCKET, path);
}

static inline CURLcode curl_set_ssl_cipher_list(CURL *handle, char *list) {
    return curl_easy_setopt(handle, CURLOPT_SSL_CIPHER_LIST, list);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_ssl_cipher_list(CURL *handle, char *list) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSL_CIPHER_LIST, list);
}
*/

static inline CURLcode curl_set_ssl_sessionid_cache(CURL *handle, long enabled) {
    return curl_easy_setopt(handle, CURLOPT_SSL_SESSIONID_CACHE, enabled);
}

static inline CURLcode curl_set_ssl_options(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_SSL_OPTIONS, bitmask);
}

//7.5.1
/*
static inline CURLcode curl_set_proxy_ssl_options(CURL *handle, long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSL_OPTIONS, bitmask);
}
*/

static inline CURLcode curl_set_krblevel(CURL *handle, char *level) {
    return curl_easy_setopt(handle, CURLOPT_KRBLEVEL, level);
}

static inline CURLcode curl_set_gssapi_delegation(CURL *handle,  long level) {
    return curl_easy_setopt(handle, CURLOPT_GSSAPI_DELEGATION, level);
}

//SSH OPTIONS
static inline CURLcode curl_set_ssh_auth_types(CURL *handle,  long bitmask) {
    return curl_easy_setopt(handle, CURLOPT_SSH_AUTH_TYPES, bitmask);
}

/*
static inline CURLcode curl_set_ssh_compression(CURL *handle,  long enable) {
    return curl_easy_setopt(handle, CURLOPT_SSH_COMPRESSION, enable);
}
*/

static inline CURLcode curl_set_ssh_host_public_key_md5(CURL *handle, char *md5) {
    return curl_easy_setopt(handle, CURLOPT_SSH_HOST_PUBLIC_KEY_MD5, md5);
}

static inline CURLcode curl_set_ssh_public_keyfile(CURL *handle, char *filename) {
    return curl_easy_setopt(handle, CURLOPT_SSH_PUBLIC_KEYFILE, filename);
}

static inline CURLcode curl_set_ssh_private_keyfile(CURL *handle, char *filename) {
    return curl_easy_setopt(handle, CURLOPT_SSH_PRIVATE_KEYFILE, filename);
}

static inline CURLcode curl_set_ssh_knownhosts(CURL *handle, char *fname) {
    return curl_easy_setopt(handle, CURLOPT_SSH_KNOWNHOSTS, fname);
}

typedef int (*ssh_keycallback)(CURL *easy,
                    const struct curl_khkey *knownkey,
                    const struct curl_khkey *foundkey,
                    enum curl_khmatch,
                    void *clientp);

static inline CURLcode curl_set_ssh_keyfunction(CURL *handle, ssh_keycallback *callback) {
    return curl_easy_setopt(handle, CURLOPT_SSH_KEYFUNCTION, callback);
}

static inline CURLcode curl_set_ssh_keydata(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_SSH_KEYDATA, pointer);
}

//OTHER OPTIONS
static inline CURLcode curl_set_private(CURL *handle, void *pointer) {
    return curl_easy_setopt(handle, CURLOPT_PRIVATE, pointer);
}

static inline CURLcode curl_set_share(CURL *handle, CURLSH *share) {
    return curl_easy_setopt(handle, CURLOPT_SHARE, share);
}

static inline CURLcode curl_set_new_file_perms(CURL *handle, long mode) {
    return curl_easy_setopt(handle, CURLOPT_NEW_FILE_PERMS, mode);
}

static inline CURLcode curl_set_new_directory_perms(CURL *handle, long mode) {
    return curl_easy_setopt(handle, CURLOPT_NEW_DIRECTORY_PERMS, mode);
}


static inline CURLcode curl_set_telnetoptions(CURL *handle, struct curl_slist *cmds) {
    return curl_easy_setopt(handle, CURLOPT_TELNETOPTIONS, cmds);
}

///curl_easy_getinfo - extract information from a curl handle 
/*
CURLcode curl_easy_get_effective_url(CURL *handle, char **urlp) {
    return curl_easy_getinfo(handle, CURLINFO_TELNETOPTIONS, urlp);
}fvf
*/

CURLcode curl_easy_get_response_code(CURL *handle,  long *codep) {
    return curl_easy_getinfo(handle, CURLINFO_RESPONSE_CODE, codep);
}

CURLcode curl_easy_get_http_connectcode(CURL *handle,  long *p) {
    return curl_easy_getinfo(handle, CURLINFO_HTTP_CONNECTCODE, p);
}


CURLcode curl_easy_get_http_version(CURL *handle,  long *p) {
    return curl_easy_getinfo(handle, CURLOPT_HTTP_VERSION, p);
}

CURLcode curl_easy_get_filetime(CURL *handle,  long *p) {
    return curl_easy_getinfo(handle, CURLINFO_FILETIME, p);
}

CURLcode curl_easy_get_total_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_TOTAL_TIME, timep);
}

CURLcode curl_easy_get_namelookup_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_NAMELOOKUP_TIME, timep);
}


CURLcode curl_easy_get_connect_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_CONNECT_TIME, timep);
}


CURLcode curl_easy_get_appconnect_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_APPCONNECT_TIME, timep);
}

CURLcode curl_easy_get_pretransfer_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_PRETRANSFER_TIME, timep);
}

CURLcode curl_easy_get_starttransfer_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_STARTTRANSFER_TIME, timep);
}

CURLcode curl_easy_get_redirect_time(CURL *handle,  double *timep) {
    return curl_easy_getinfo(handle, CURLINFO_REDIRECT_TIME, timep);
}

CURLcode curl_easy_get_redirect_count(CURL *handle,  long *countp) {
    return curl_easy_getinfo(handle, CURLINFO_REDIRECT_COUNT, countp);
}

CURLcode curl_easy_get_redirect_url(CURL *handle,   char **urlp) {
    return curl_easy_getinfo(handle, CURLINFO_REDIRECT_URL, urlp);
}

CURLcode curl_easy_get_size_upload(CURL *handle, double *uploadp) {
    return curl_easy_getinfo(handle, CURLINFO_SIZE_UPLOAD, uploadp);
}

// CURLcode curl_easy_get_size_upload_t(CURL *handle, curl_off_t *uploadp) {
//     return curl_easy_getinfo(handle, CURLINFO_SIZE_UPLOAD_T, uploadp);
// }

// CURLcode curl_easy_get_size_download_t(CURL *handle, curl_off_t *dlp) {
//     return curl_easy_getinfo(handle, CURLINFO_SIZE_DOWNLOAD_T, dlp);
// }

// CURLcode curl_easy_get_speed_download_t(CURL *handle, curl_off_t *speed) {
//     return curl_easy_getinfo(handle, CURLINFO_SPEED_DOWNLOAD_T, speed);
// }

// CURLcode curl_easy_get_speed_upload_t(CURL *handle, curl_off_t *speed) {
//     return curl_easy_getinfo(handle, CURLINFO_SPEED_UPLOAD_T, speed);
// }

CURLcode curl_easy_get_header_size(CURL *handle, long *sizep) {
    return curl_easy_getinfo(handle, CURLINFO_HEADER_SIZE, sizep);
}

CURLcode curl_easy_get_request_size(CURL *handle, long *sizep) {
    return curl_easy_getinfo(handle, CURLINFO_REQUEST_SIZE, sizep);
}

CURLcode curl_easy_get_ssl_verifyresult(CURL *handle, long *result) {
    return curl_easy_getinfo(handle, CURLINFO_SSL_VERIFYRESULT, result);
}

/*
CURLcode curl_easy_get_proxy_ssl_verifyresult(CURL *handle, long *result) {
    return curl_easy_getinfo(handle, CURLINFO_PROXY_SSL_VERIFYRESULT, result);
}
*/

CURLcode curl_easy_get_ssl_engines(CURL *handle, struct curl_slist **engine_list) {
    return curl_easy_getinfo(handle, CURLINFO_SSL_ENGINES, engine_list);
}

// CURLcode curl_easy_get_content_length_download_t(CURL *handle, curl_off_t *content_length) {
//     return curl_easy_getinfo(handle, CURLINFO_CONTENT_LENGTH_DOWNLOAD_T, content_length);
// }

// CURLcode curl_easy_get_content_length_upload_t(CURL *handle, curl_off_t *content_length) {
//     return curl_easy_getinfo(handle, CURLINFO_CONTENT_LENGTH_UPLOAD_T, content_length);
// }

CURLcode curl_easy_get_content_type(CURL *handle, char **ct) {
    return curl_easy_getinfo(handle, CURLINFO_CONTENT_TYPE, ct);
}

CURLcode curl_easy_get_private(CURL *handle, char **private) {
    return curl_easy_getinfo(handle, CURLINFO_PRIVATE, private);
}

CURLcode curl_easy_get_httpauth_avail(CURL *handle, long *authp) {
    return curl_easy_getinfo(handle, CURLINFO_HTTPAUTH_AVAIL, authp);
}

CURLcode curl_easy_get_proxyauth_avail(CURL *handle, long *authp) {
    return curl_easy_getinfo(handle, CURLINFO_PROXYAUTH_AVAIL, authp);
}

CURLcode curl_easy_get_os_errno(CURL *handle, long *errnop) {
    return curl_easy_getinfo(handle, CURLINFO_OS_ERRNO, errnop);
}

CURLcode curl_easy_get_num_connects(CURL *handle, long *nump) {
    return curl_easy_getinfo(handle, CURLINFO_NUM_CONNECTS, nump);
}

CURLcode curl_easy_get_primary_ip(CURL *handle, char **ip) {
    return curl_easy_getinfo(handle, CURLINFO_PRIMARY_IP, ip);
}

CURLcode curl_easy_get_primary_port(CURL *handle, long* portp) {
    return curl_easy_getinfo(handle, CURLINFO_PRIMARY_PORT, portp);
}

CURLcode curl_easy_get_local_ip(CURL *handle, char **ip) {
    return curl_easy_getinfo(handle, CURLINFO_LOCAL_IP, ip);
}

CURLcode curl_easy_get_local_port(CURL *handle, long *portp) {
    return curl_easy_getinfo(handle, CURLINFO_LOCAL_PORT, portp);
}

CURLcode curl_easy_get_cookielist(CURL *handle,  struct curl_slist **cookies) {
    return curl_easy_getinfo(handle, CURLINFO_COOKIELIST, cookies);
}

CURLcode curl_easy_get_lastsocket(CURL *handle, long *socket) {
    return curl_easy_getinfo(handle, CURLINFO_LASTSOCKET, socket);
}

CURLcode curl_easy_get_activesocket(CURL *handle, curl_socket_t *socket) {
    return curl_easy_getinfo(handle, CURLINFO_ACTIVESOCKET, socket);
}


CURLcode curl_easy_get_ftp_entry_path(CURL *handle, char **path) {
    return curl_easy_getinfo(handle, CURLINFO_FTP_ENTRY_PATH, path);
}

// CURLcode curl_easy_get_tls_ssl_ptr(CURL *handle,  struct curl_tlssessioninfo **session) {
//     return curl_easy_getinfo(handle, CURLINFO_TLS_SSL_PTR, session);
// }

CURLcode curl_easy_get_condition_unmet(CURL *handle, long *unmet) {
    return curl_easy_getinfo(handle, CURLINFO_CONDITION_UNMET, unmet);
}

CURLcode curl_easy_get_rtsp_session_id(CURL *handle, char **id) {
    return curl_easy_getinfo(handle, CURLINFO_RTSP_SESSION_ID, id);
}

CURLcode curl_easy_get_rtsp_client_cseq(CURL *handle, long *cseq) {
    return curl_easy_getinfo(handle, CURLINFO_RTSP_CLIENT_CSEQ, cseq);
}

CURLcode curl_easy_get_rtsp_server_cseq(CURL *handle, long *cseq) {
    return curl_easy_getinfo(handle, CURLINFO_RTSP_CLIENT_CSEQ, cseq);
}

CURLcode curl_easy_get_rtsp_cseq_recv(CURL *handle, long *cseq) {
    return curl_easy_getinfo(handle, CURLINFO_RTSP_CSEQ_RECV, cseq);
}

// CURLcode curl_easy_get_protocol(CURL *handle, long *p) {
//     return curl_easy_getinfo(handle, CURLINFO_PROTOCOL, p);
// }

// CURLcode curl_easy_get_scheme(CURL *handle, char **scheme) {
//     return curl_easy_getinfo(handle, CURLINFO_SCHEME, scheme);
// }

//TIMES




#endif /* CurlHelpers_h */
