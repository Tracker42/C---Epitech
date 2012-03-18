/**
 *
 *
 *
 */

#ifndef __DLWRAPPER_HH__
#define	__DLWRAPPER_HH__

#include "../src/Common/DlWrapper/DLException.hh"
#include "../src/Common/DlWrapper/DLManager.hh"
#include "../src/Common/DlWrapper/DLHandler.hh"
#include "../src/Common/DlWrapper/DLSymbol.hh"

#define DLCAST(cast, sym) (reinterpret_cast<cast>(*sym))
#define DLSYM(lib, sym) (DLManager::getInstance()->get(lib)->symbol(sym))
#define DLCALL(cast, lib, sym) (DLCAST(cast, *(DLSYM(lib, sym))))

#endif
