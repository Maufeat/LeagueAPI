#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherP2PStatus.hpp>
namespace lol {
  inline Result<PatcherP2PStatus> GetPatcherV1P2pStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PatcherP2PStatus> {
        _client_.request("get", "/patcher/v1/p2p/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PatcherP2PStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}