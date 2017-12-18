#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<uint64_t> PostLolLobbyV2LobbyMembersBySummonerIdPromote(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<uint64_t> {
        _client.https.request("post", "/lol-lobby/v2/lobby/members/"+to_string(summonerId)+"/promote?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<uint64_t> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLobbyV2LobbyMembersBySummonerIdPromote(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<uint64_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/lobby/members/"+to_string(summonerId)+"/promote?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<uint64_t> { response });
          else
            cb(_client,Result<uint64_t> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}