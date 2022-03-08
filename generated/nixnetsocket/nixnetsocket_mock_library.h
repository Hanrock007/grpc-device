//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-XNETSOCKET
//---------------------------------------------------------------------
#ifndef NIXNETSOCKET_GRPC_MOCK_LIBRARY_H
#define NIXNETSOCKET_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nixnetsocket_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiXnetSocketMockLibrary : public nixnetsocket_grpc::NiXnetSocketLibraryInterface {
 public:
  MOCK_METHOD(int32_t, Bind, (nxSOCKET socket, nxsockaddr* name, nxsocklen_t namelen), (override));
  MOCK_METHOD(int32_t, Close, (nxSOCKET socket), (override));
  MOCK_METHOD(int32_t, GetLastErrorNum, (), (override));
  MOCK_METHOD(char*, GetLastErrorStr, (char buf[], size_t bufLen), (override));
  MOCK_METHOD(nxSOCKET, Socket, (nxIpStackRef_t stack_ref, int32_t domain, int32_t type, int32_t prototcol), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIXNETSOCKET_GRPC_MOCK_LIBRARY_H