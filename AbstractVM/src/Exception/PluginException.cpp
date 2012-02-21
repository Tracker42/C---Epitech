
#include "PluginException.hh"

PluginException::PluginException(std::string message) throw()
: AbstractVMException(std::string("Plugin : ") + message) {

}

PluginException::~PluginException() throw() {

}
