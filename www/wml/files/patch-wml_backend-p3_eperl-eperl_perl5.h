--- wml_backend/p3_eperl/eperl_perl5.h.orig	2013-10-17 17:28:21.000000000 +0200
+++ wml_backend/p3_eperl/eperl_perl5.h	2013-10-17 17:29:09.000000000 +0200
@@ -72,10 +72,6 @@
 #  define PL_curstash curstash
 #endif
 
-#ifndef WITH_THR
-#  define PL_defoutgv defoutgv
-#endif
-
 /*  
   Initialization of locales when building a new Perl interpreter.
      Perl 5.003 calls perl_init_i18nl14n
