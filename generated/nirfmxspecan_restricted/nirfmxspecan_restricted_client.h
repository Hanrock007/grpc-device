
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFMXSPECAN-RESTRICTED.
//---------------------------------------------------------------------
#ifndef NIRFMXSPECAN_RESTRICTED_GRPC_CLIENT_H
#define NIRFMXSPECAN_RESTRICTED_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nirfmxspecan_restricted.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nirfmxspecan_restricted_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiRFmxSpecAnRestricted::Stub>;
using namespace nidevice_grpc::experimental::client;


CacheResultResponse cache_result(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::int32& selector_string_out_size);
IQFetchDataOverrideBehaviorResponse iq_fetch_data_override_behavior(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout, const pb::int32& record_to_fetch, const pb::int64& samples_to_read, const pb::int32& delete_on_fetch);

} // namespace nirfmxspecan_restricted_grpc::experimental::client

#endif /* NIRFMXSPECAN_RESTRICTED_GRPC_CLIENT_H */