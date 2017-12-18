#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherP2PStatusUpdate.hpp"
namespace lol {
  inline Result<json> PatchPatcherV1P2pStatus(LeagueClient& _client, const PatcherP2PStatusUpdate& data)
  {
    try {
      return Result<json> {
        _client.https.request("patch", "/patcher/v1/p2p/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PatchPatcherV1P2pStatus(LeagueClient& _client, const PatcherP2PStatusUpdate& data, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/patcher/v1/p2p/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}