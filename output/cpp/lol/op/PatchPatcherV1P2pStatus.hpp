#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherP2PStatusUpdate.hpp>
namespace lol {
  Result<json> PatchPatcherV1P2pStatus(const LeagueClient& _client, const PatcherP2PStatusUpdate& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/patcher/v1/p2p/status?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}