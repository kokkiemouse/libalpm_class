#pragma once
#include <alpm.h>
class alpm_pkg_class{
    public:
        alpm_pkg_class(alpm_pkg_t* pkgkun);
        ~alpm_pkg_class();
        operator alpm_pkg_t*();
    private:
        alpm_pkg_t* pkgptr;
};