//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SYNC
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_LIBRARY_H
#define NISYNC_GRPC_LIBRARY_H

#include "nisync_library_interface.h"

#include <server/shared_library.h>

namespace nisync_grpc {

class NiSyncLibrary : public nisync_grpc::NiSyncLibraryInterface {
 public:
  NiSyncLibrary();
  virtual ~NiSyncLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus close(ViSession vi);
  ViStatus SendSoftwareTrigger(ViSession vi, ViConstString srcTerminal);
  ViStatus ConnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus DisconnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus ConnectSWTrigToTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay);
  ViStatus DisconnectSWTrigFromTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus ConnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge);
  ViStatus DisconnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);

 private:
  using initPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  using closePtr = ViStatus (*)(ViSession vi);
  using SendSoftwareTriggerPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal);
  using ConnectClkTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using DisconnectClkTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using ConnectSWTrigToTerminalPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay);
  using DisconnectSWTrigFromTerminalPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using ConnectTrigTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge);
  using DisconnectTrigTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);

  typedef struct FunctionPointers {
    initPtr init;
    closePtr close;
    SendSoftwareTriggerPtr SendSoftwareTrigger;
    ConnectClkTerminalsPtr ConnectClkTerminals;
    DisconnectClkTerminalsPtr DisconnectClkTerminals;
    ConnectSWTrigToTerminalPtr ConnectSWTrigToTerminal;
    DisconnectSWTrigFromTerminalPtr DisconnectSWTrigFromTerminal;
    ConnectTrigTerminalsPtr ConnectTrigTerminals;
    DisconnectTrigTerminalsPtr DisconnectTrigTerminals;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nisync_grpc

#endif  // NISYNC_GRPC_LIBRARY_H