/* conf.c (GENERATED FILE; DO NOT EDIT) */

#include <xinu.h>


extern	devcall	ioerr(void);
extern	devcall	ionull(void);

/* Device independent I/O switch */

struct	dentry	devtab[NDEVS] =
{
/**
 * Format of entries is:
 * dev-number, minor-number, dev-name,
 * init, open, close,
 * read, write, seek,
 * getc, putc, control,
 * dev-csr-address, intr-handler, irq
 */

/* CONSOLE is tty */
	{ 0, 0, "CONSOLE",
	  (void *)ttyinit, (void *)ionull, (void *)ionull,
	  (void *)ttyread, (void *)ttywrite, (void *)ioerr,
	  (void *)ttygetc, (void *)ttyputc, (void *)ttycontrol,
	  (void *)0x3f8, (void *)ttydispatch, 36 },

/* NULLDEV is null */
	{ 1, 0, "NULLDEV",
	  (void *)ionull, (void *)ionull, (void *)ionull,
	  (void *)ionull, (void *)ionull, (void *)ioerr,
	  (void *)ionull, (void *)ionull, (void *)ioerr,
	  (void *)0x0, (void *)ioerr, 0 },

/* NAMESPACE is nam */
	{ 2, 0, "NAMESPACE",
	  (void *)naminit, (void *)namopen, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)0x0, (void *)ioerr, 0 },

/* RDISK is rds */
	{ 3, 0, "RDISK",
	  (void *)rdsinit, (void *)rdsopen, (void *)ioerr,
	  (void *)rdsread, (void *)rdswrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)rdscontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* RAM0 is ram */
	{ 4, 0, "RAM0",
	  (void *)raminit, (void *)ramopen, (void *)ramclose,
	  (void *)ramread, (void *)ramwrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILESYS is rfs */
	{ 5, 0, "RFILESYS",
	  (void *)rfsinit, (void *)rfsopen, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)rfscontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE0 is rfl */
	{ 6, 0, "RFILE0",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE1 is rfl */
	{ 7, 1, "RFILE1",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE2 is rfl */
	{ 8, 2, "RFILE2",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE3 is rfl */
	{ 9, 3, "RFILE3",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE4 is rfl */
	{ 10, 4, "RFILE4",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE5 is rfl */
	{ 11, 5, "RFILE5",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE6 is rfl */
	{ 12, 6, "RFILE6",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE7 is rfl */
	{ 13, 7, "RFILE7",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE8 is rfl */
	{ 14, 8, "RFILE8",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* RFILE9 is rfl */
	{ 15, 9, "RFILE9",
	  (void *)rflinit, (void *)ioerr, (void *)rflclose,
	  (void *)rflread, (void *)rflwrite, (void *)rflseek,
	  (void *)rflgetc, (void *)rflputc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILESYS is lfs */
	{ 16, 0, "LFILESYS",
	  (void *)lfsinit, (void *)lfsopen, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILE0 is lfl */
	{ 17, 0, "LFILE0",
	  (void *)lflinit, (void *)ioerr, (void *)lflclose,
	  (void *)lflread, (void *)lflwrite, (void *)lflseek,
	  (void *)lflgetc, (void *)lflputc, (void *)lflcontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILE1 is lfl */
	{ 18, 1, "LFILE1",
	  (void *)lflinit, (void *)ioerr, (void *)lflclose,
	  (void *)lflread, (void *)lflwrite, (void *)lflseek,
	  (void *)lflgetc, (void *)lflputc, (void *)lflcontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILE2 is lfl */
	{ 19, 2, "LFILE2",
	  (void *)lflinit, (void *)ioerr, (void *)lflclose,
	  (void *)lflread, (void *)lflwrite, (void *)lflseek,
	  (void *)lflgetc, (void *)lflputc, (void *)lflcontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILE3 is lfl */
	{ 20, 3, "LFILE3",
	  (void *)lflinit, (void *)ioerr, (void *)lflclose,
	  (void *)lflread, (void *)lflwrite, (void *)lflseek,
	  (void *)lflgetc, (void *)lflputc, (void *)lflcontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILE4 is lfl */
	{ 21, 4, "LFILE4",
	  (void *)lflinit, (void *)ioerr, (void *)lflclose,
	  (void *)lflread, (void *)lflwrite, (void *)lflseek,
	  (void *)lflgetc, (void *)lflputc, (void *)lflcontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* LFILE5 is lfl */
	{ 22, 5, "LFILE5",
	  (void *)lflinit, (void *)ioerr, (void *)lflclose,
	  (void *)lflread, (void *)lflwrite, (void *)lflseek,
	  (void *)lflgetc, (void *)lflputc, (void *)lflcontrol,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE is pipem */
	{ 23, 0, "PIPE",
	  (void *)ionull, (void *)pipe_open, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE0 is pip */
	{ 24, 0, "PIPE0",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE1 is pip */
	{ 25, 1, "PIPE1",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE2 is pip */
	{ 26, 2, "PIPE2",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE3 is pip */
	{ 27, 3, "PIPE3",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE4 is pip */
	{ 28, 4, "PIPE4",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE5 is pip */
	{ 29, 5, "PIPE5",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE6 is pip */
	{ 30, 6, "PIPE6",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE7 is pip */
	{ 31, 7, "PIPE7",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE8 is pip */
	{ 32, 8, "PIPE8",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 },

/* PIPE9 is pip */
	{ 33, 9, "PIPE9",
	  (void *)pipe_init, (void *)ioerr, (void *)pipe_close,
	  (void *)pipe_read, (void *)pipe_write, (void *)ioerr,
	  (void *)pipe_getc, (void *)pipe_putc, (void *)ioerr,
	  (void *)0x0, (void *)ionull, 0 }
};
