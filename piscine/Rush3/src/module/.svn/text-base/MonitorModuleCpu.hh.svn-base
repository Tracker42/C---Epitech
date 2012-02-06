/**
 *
 *
 *
 */

#ifndef __MONITORMODULECPU_HH__
#define	__MONITORMODULECPU_HH__

#include <string>
#include <exception>

#include "IMonitorModule.hh"
#include "../common/ExecCommand.hh"
#include "../common/CpuCore.hh"

#define MCPU_MODULE_NAME "CPU"
#define MCPU_CLI_NBCORE "cat /proc/cpuinfo | grep processor | wc -l"
#define MCPU_CLI_CPUNAME "cat /proc/cpuinfo | grep \"model name\""

class MonitorModuleCpu : public IMonitorModule
{
protected:
  CpuCore ** _cores;
  int _nbCore;

public:
  MonitorModuleCpu();
  virtual ~MonitorModuleCpu();
  
  virtual bool initialize();
  
  virtual std::string getModuleName() const;
  int getNbCore() const;
  CpuCore & getCore(int id) const;
  
  CpuCore & operator[](int id) const;

};

#endif
