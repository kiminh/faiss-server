// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: faiss.proto

#include "faiss.pb.h"
#include "faiss.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace faiss {

static const char* FaissService_method_names[] = {
  "/faiss.FaissService/Heartbeat",
  "/faiss.FaissService/Search",
  "/faiss.FaissService/SearchById",
  "/faiss.FaissService/Add",
};

std::unique_ptr< FaissService::Stub> FaissService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FaissService::Stub> stub(new FaissService::Stub(channel));
  return stub;
}

FaissService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Heartbeat_(FaissService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Search_(FaissService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchById_(FaissService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Add_(FaissService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FaissService::Stub::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::faiss::HeartbeatResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Heartbeat_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::faiss::HeartbeatResponse>* FaissService::Stub::AsyncHeartbeatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::faiss::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::HeartbeatResponse>* FaissService::Stub::PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::faiss::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, request, false);
}

::grpc::Status FaissService::Stub::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::faiss::SearchResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Search_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* FaissService::Stub::AsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchResponse>::Create(channel_.get(), cq, rpcmethod_Search_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* FaissService::Stub::PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchResponse>::Create(channel_.get(), cq, rpcmethod_Search_, context, request, false);
}

::grpc::Status FaissService::Stub::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::faiss::SearchByIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchById_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* FaissService::Stub::AsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchByIdResponse>::Create(channel_.get(), cq, rpcmethod_SearchById_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* FaissService::Stub::PrepareAsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchByIdResponse>::Create(channel_.get(), cq, rpcmethod_SearchById_, context, request, false);
}

::grpc::Status FaissService::Stub::Add(::grpc::ClientContext* context, const ::faiss::AddRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Add_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* FaissService::Stub::AsyncAddRaw(::grpc::ClientContext* context, const ::faiss::AddRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_Add_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* FaissService::Stub::PrepareAsyncAddRaw(::grpc::ClientContext* context, const ::faiss::AddRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_Add_, context, request, false);
}

FaissService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::google::protobuf::Empty, ::faiss::HeartbeatResponse>(
          std::mem_fn(&FaissService::Service::Heartbeat), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::SearchRequest, ::faiss::SearchResponse>(
          std::mem_fn(&FaissService::Service::Search), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::SearchByIdRequest, ::faiss::SearchByIdResponse>(
          std::mem_fn(&FaissService::Service::SearchById), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::AddRequest, ::google::protobuf::Empty>(
          std::mem_fn(&FaissService::Service::Add), this)));
}

FaissService::Service::~Service() {
}

::grpc::Status FaissService::Service::Heartbeat(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::Add(::grpc::ServerContext* context, const ::faiss::AddRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace faiss

