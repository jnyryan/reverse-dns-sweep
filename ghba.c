/*
 * k0pyR1ght (c) 1994 [l0ck] The l3g3ntz 0f c0de k1dZZzz
 * aWl rYt3z r3-z3rvd!!@#!@#!@#!@#$!@
 * aWL b3l0w k0mp0zed bY gw33d0 s4nch3z wh0z3 3g0 d1ktAytEz d1z kr3d1t.
 *
 * 411 k0de 1z d-rYv3d 4n 0bt41nD fr0m d4 m0thah-luV1n 4ur4 0f e1ytneZz
 * th4t s00r0undZZz d4 h0ly l0ck cHyld 0f d4 v1rg1n 4k4shA E.I.
 *
 * r3-d1sTriby00shUn 4n y00ze 4n sh1t 1n s0urce, b1n4ry, 4n pGp'd ph0rmz,
 * w1t 0 w1t0ut m0d1f1-k-shUnz n sh1t, r p3r-m1ttd pr0-vYd3d d4t d4
 * ph0ll0w1n k0nd1shUnz 1z m3t n sh1t:
 * 1. y00 muZt re-tAyn d1s h3r3 k0pyR1gh gn0t1c3. 1f y00 r3m00v3 1t,
 *    w3 w1ll hunt d0wn y0 m0mma, ty3 h3r 2 d4 n0rth w4ll (rWa[1]1) 0f
 *    d4 l0ck-hauz 4n r33ch n 4n r1p 0ut h3r y00terUz 2 sp4r3 fy00tUre
 *    g3n3rashUnz fr0m th3 un-3lytn3zZZz 0f n-e-m0r3 0f h3r d3m0nSp4wn.
 *    0h yah. w3'll kall da sp4 n sh1t t00.
 * 2. aWl adv3rt1z1ng m4t3r1alz m3nShun1n ph33ty00rez 0r y00ze 0f d1z
 *    h3r3 s0phtw4r3 mUzt d1spl4y d4 f0ll0w1ng ak47n0wl3dgem3nt:
 *
 *  gn0t1c3:
 *  th1s h3r3 pr0dUkt 1z s00p33r10r 2 n-3 p33c3 0f sh1t y00 k0uld 3v4h
 *  kr4nk 0ut w1t y0 4-b1t l0g0 k0mpYl3r. Ph33r, laYm00rzZz!!@#!@#$
 *
 * 3. y00 mUzt nAym3 y0' f1rstb0rn K4rl 0r n-3 4n4gr4m th3r30f.
 * 4. th3 1mag3 0f l4rry l0ck, d3 l0ck l0g0, 4n 1nd33d d4 l3tt3rz l, c,
 *    k m4y gn0t b3 y00zed 2 3nd0rz3 0r pr0m0t3 pr0dux d-rYv3d fr0m d1s
 *    h3r3 3lyt ph33t 0f pr0gr4mm1ng w1t0ut g1v1n s4rl0 h3d.
 *
 * d1s s0phTw4r3 1z pr0vYd3d "az 1z" fr0m d4 k0ll3kt1v3 l3g10nz d4t maYk3
 * uP l0ck. y00 0wn d1s s0fwAYre 4 a r33z0n. d0n't th1nk y00 h4qd 0n3 0f
 * 0ur akk0untz n sNaYtch3d a pr1m0 0-d4y l0ckw4r3; w3 pl4nt3d d1z 4Wn
 * pUrp0z3 b-kuz w3 g0t p1ty f0 y0 layme a$$. 1n gn0 3v3nt sh4ll w3, l0ck,
 * b3 h3ld l1abl3 f0r da L4yMen3zz 0f th3 sh1t y00 h4q 0ut 0f th1z fUx1n
 * 3lyt k0de. d0n't ch4Yng3 1t kUz 1tz aWlr3dY b3ttah th3n y00 k00d 3vah
 * wr1t3, j00. bUt 1f y00 d0, d0n't kUm kry1n 2 Uz 2 g1v3 y00 d4 0r1g1n4l
 * kUz y00 w3nt n 4dd3d 4n 0n-skr33n kl0k r sUm laYme sh1t n 1t fuxd Up
 * d n-tYr3 pr0gr4m. 1ph d1z h4pp3nz, w3, d4 p4rt33z m3nshUnned ab0ve,
 * k0ns1gn y00 t0 l0k4l layMur h3ll; 4n e-tUrn1t33 0f k4ll1ng WW1v Ad00lt
 * p0rn0gr4ffy SiTEzZzz n sh1t. w3 gair-N-t33 gn0th1ng bUt 0ur 3lytn3zz
 * 4n y0' laYmen3zz. l3t d4 k0dezZz b3g1n, j00d3n!@#!@#$!@$!@#$!@#$
 */

#ifndef lint
char copyright[] =
"@(#) Copyright (c) 1994, 1992 L3gi0n 0F c0d3 Kid3zz.\n\
 All rights reserved.\n";
static char sccsid[] = "@(#)ghba.c   3.0 8/25/94 (l0ck)";
static char rcsid[]  = "$Id: ghba.c,v 1.1 2011/02/28 17:31:38 dobrien Exp $";
#endif  /* not lint */

/*
 *   no time for sarcasm...  the kideez would take it seriously, anyway.
 * you don't need to supply a switch for an address type...  either the
 * full address or a netmask will work just fine.
 *
 * the only switches left are:
 *  x - address provided is in hexadecimal
 *  a - show hostname aliases also
 *  f - output to a file and background the process
 *
 *          max-q
 */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include "netdb.h"

#define S_HEX   "%x.%x.%x.%x"
#define S_DEC   "%d.%d.%d.%d"

void
bad_addr(addr)
  int   addr;
{
  fprintf(stderr, "Value %d is not valid.\n", addr);
  exit(-1);
}

void
check_addr(addr)
  int   addr[];
{
  register int  i;
  for(i=0;i<4;i++)
    if(addr[i]<0||addr[i]>255)
      bad_addr(addr[i]);
}

void
usage(name)
  int   *name;
{
  fprintf(stderr,
   "usage: %s [-x] [-a] [-f <outfile>] aaa.bbb.[ccc||0].[ddd||0]\n",
   name);
  exit(-1);
}


void
main(argc, argv)
  int   argc;
  char  *argv[];
{
  char                  addr[4], **ptr,
                        *progname = argv[0];
  register int          s;
  int                   a[4], arg, c, d,
                        classB, classC, single,
                        alias, hex, file;
  extern char           *optarg;
  struct hostent        *host,
                        *gethostbyaddr();
  FILE                  *outfd = stdout;

  classB = classC = single = alias = hex = file = 0;
  c = d = 0;

  while((arg = getopt(argc, argv, "xaf:")) != EOF) {
    switch(arg) {
    case 'x':
      hex++;
      break;
    case 'a':
      alias++;
      break;
    case 'f':
      file++;
      if((outfd=fopen(optarg, "a"))==NULL) {
        perror("open");
        exit(-1);
      }
      break;
    default:
      usage(progname);
    }
  }

  argv += ((file)?2:0)+((alias)?1:0)+((hex)?1:0);
  argc -= ((file)?2:0)+((alias)?1:0)+((hex)?1:0);

  if(argc!=2)
    usage(progname);

  sscanf(argv[1], (hex)?S_HEX:S_DEC, &a[0], &a[1], &a[2], &a[3]);

  check_addr(a);

  if(!a[3]) {
    if(!a[2])
      classB++;
    else
      classC++;
  } else
    single++;

  if(!classB && !classC && !single)
    usage(progname);

  if(file) {
    if((s=fork()) >0) {
      fprintf(stderr, "[%s - pid %d]\n", progname, s);
      exit(0);
    } else if(s<0) {
      perror("fork");
      exit(-1);
    }

    if((s=open("/dev/tty", O_RDWR)) >0) {
       ioctl(s, TIOCNOTTY, (char *) NULL);
       close(s);
    }
  }

  addr[0] = (unsigned char) a[0];
  addr[1] = (unsigned char) a[1];

  if(classC)
    goto jmpC;
  else if(single)
    goto jmpS;

  fprintf(((file)?outfd:stderr), "Scanning Class B network %d.%d...\n",
   a[0], a[1]);

  while(c<256) {
    a[2] = c++;
    d = 0;
jmpC:
    fprintf(((file)?outfd:stderr), "Scanning Class C network %d.%d.%d...\n",
     a[0], a[1], a[2]);

    while(d<256) {
      a[3] = d++;
jmpS:
      addr[2] = (unsigned char) a[2];
      addr[3] = (unsigned char) a[3];

      if((host = gethostbyaddr(addr, 4, AF_INET)) != NULL) {
        fprintf(outfd, "%d.%d.%d.%d => %s\n", a[0], a[1], a[2], a[3], host->h_name);

        ptr = host->h_aliases;
        if(alias)
          while(*ptr != NULL) {
            fprintf(outfd, "%d.%d.%d.%d => %s (alias)\n",
             a[0], a[1], a[2], a[3], *ptr);
            ptr++;
          }

        fflush(outfd);
        if(single) exit(0);
      } else if(single) {
        fprintf(stderr, "Cannot resolve %d.%d.%d.%d\n", a[0], a[1], a[2], a[3]);        exit(0);
      }
    }
    if(classC) exit(0);
  }
}
