all programs are optimized, stripped and packed.
compiler flags g++ -Ofast -flto -frename-registers -Wl,-z,relro -Wl,--strip-all -Wl,-z,noexecstack -Wl,--no-undefined
packer is just upx --ultra-brute

all key programs and behavior2 make use of keycommon.h, key1.h has most of its functionality in key1stuff.h 
keys:
1 key is 8.19AabecklsdhtLSg7p*j checked via a recursive switch statement
2 first returned current ip address for google.com is the key, needs internet connection
3 key is a numeric sequence that fulfills the following requirements -starts with the number of threads the host supports, then must contain the number for the total ram and hdd space on host

behaviors:
1 describes a randomly named tree of folders of 1-100 depth and 1-100 width at users home directory, doesn't actually create them to spare the user the mess
2 asks for a string, then give a thumbs up if the string is a url that resolves to an ip address
3 generates a random number at runtime,  plays hotter/colder with itself until in homes in on the value
