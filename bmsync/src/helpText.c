#include "common.h"
char* helpTxt=
"bmsync -v|-h|[-p <port>] [-a <alias>] <host1> <host2> ..." EOL
" " EOL
"Imports data from one or more remote BitMeter OS databases into the local database. The utility works by calling the '/sync' method of the web interface of the remote BitMeter installation, so the web interface in question must be accessible remotely and not blocked by a firewall. If the remote web interface is running on a non-standard port (i.e. not port 2605) then the port number must be specified using the '-p' flag. " EOL
" " EOL
"The utility may be run as often as required, only new data received since the previous sync will be added to the local database." EOL
" " EOL
"If no 'alias' value is specified, then the hostname/IP address used with the command will be stored in the local database and used to identify the host in future. If an alias value is specified then this will be stored instead. Note that performing 2 sync operations against the same host using different host identifiers (eg one time using its hostname and another time its IP address) will result in the data from that host being duplicated in the database - if there is more than 1 way to refer to a given host on your network then it is recommended that you decide on an appropriate alias value for that host, and then use it consistently for all sync operations." EOL
" " EOL
"Example" EOL
"Sync with a host that has an IP address of 192.168.1.2, and a hostname of 'linuxserver':" EOL
" " EOL
"Data will be duplicated" EOL
"    bmsync 192.168.1.2" EOL
"    bmsync linuxserver" EOL
" " EOL
"Data will not be duplicated" EOL
"    bmsync -a ubuntu 192.168.1.2" EOL
"    bmsync -a ubuntu linuxserver" EOL
" " EOL
"Multiple hosts may be specified in a single invocation, the utility will sync with each one in turn. If you attempt to use an alias value when syncing with multiple hosts, then the utility will assume this is a mistake and will not proceed - the data collected from all the hosts would be treated as if it originated from a single host (identified by the alias) after being stored in the database." EOL
" " EOL
"Display version information" EOL
"bmsync -v" EOL
" " EOL
"Display help" EOL
"bmsync -h" EOL
" " EOL
"Email: rob@codebox.org.uk" EOL
"Web:   http://codebox.org.uk/bitmeteros" EOL
" " EOL;
