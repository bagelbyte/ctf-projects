# Are You Root?

## Description

> Can you get root access through this service and get the flag?

## Included Files

* `auth` - an amd64 executable.
* `flag.txt` - contains the flag you need to recover.
* `ld-2.27.so` - the loader you should use.
* `libc.so.6` - the libc you should use.

## Information Gathering

### Hint #1

> How large is your user?

## Deliverable

Recover the flag using a `pwntools` script. Discuss why you were able to perform
this attack. Discuss how you could take advantage of this if, instead of
checking an integer value, it directly called a function pointer inside of the
`user` structure to get the flag.
