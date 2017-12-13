#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherP2PStatus.hpp>
namespace lol {
  Result<PatcherP2PStatus> GetPatcherV1P2pStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/patcher/v1/p2p/status?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}