```bash
cse@ubuntu:~$ cat > test
olleh raed yob 
cse@ubuntu:~$ ls -l
total 48
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Desktop
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Documents
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Downloads
-rw-r--r-- 1 cse cse 8980 Mar 27  2019 examples.desktop
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Music
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Pictures
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Public
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Templates
-rw-rw-r-- 1 cse cse   15 Oct 29 01:50 test
drwxr-xr-x 2 cse cse 4096 Mar 27  2019 Videos
cse@ubuntu:~$ chmod 764 test
cse@ubuntu:~$ ls -l test
-rwxrw-r-- 1 cse cse 15 Oct 29 01:50 test
cse@ubuntu:~$ chmod g = rwx
chmod: invalid mode: ‘g’
Try 'chmod --help' for more information.
cse@ubuntu:~$ chmod g=rwx
chmod: missing operand after ‘g=rwx’
Try 'chmod --help' for more information.
cse@ubuntu:~$ chmod g = rwx test
chmod: invalid mode: ‘g’
Try 'chmod --help' for more information.
cse@ubuntu:~$ chmod g=rwx test
cse@ubuntu:~$ ls -l test
-rwxrwxr-- 1 cse cse 15 Oct 29 01:50 test
cse@ubuntu:~$ cat < test
olleh raed yob
cse@ubuntu:~$ 

```

