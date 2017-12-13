#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<uint64_t> PostLolLobbyV2LobbyMembersBySummonerIdPromote(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<uint64_t> {
        _client_.request("post", "/lol-lobby/v2/lobby/members/"+to_string(summonerId)+"/promote?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<uint64_t> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}