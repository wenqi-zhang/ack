/* $Header$ */
/*	 A S S E R T I O N    M A C R O   D E F I N I T I O N		*/

#ifndef	NDEBUG
/*	Note: this macro uses parameter substitution inside strings */
#define	assert(exp)	(exp || (fprintf(stderr,"Assertion \"%s\" failed: file %s, line %d\n", "exp", __FILE__, __LINE__), exit(1)))
#define	_assert(exp)	(exp || (fprintf(stderr,"Assertion \"%s\" failed: file %s, line %d\n", "exp", __FILE__, __LINE__), exit(1)))
#else
#define	assert(exp)	(1)
#define _assert(exp)	(1)
#endif	NDEBUG
