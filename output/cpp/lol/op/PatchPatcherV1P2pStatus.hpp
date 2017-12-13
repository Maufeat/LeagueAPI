#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherP2PStatusUpdate.hpp>
namespace lol {
  Result<json> PatchPatcherV1P2pStatus(const LeagueClient& _client, const PatcherP2PStatusUpdate& data)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("patch", "/patcher/v1/p2p/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}