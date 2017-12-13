#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<uint64_t> PostLolLobbyV2LobbyMembersBySummonerIdKick(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v2/lobby/members/"+to_string(summonerId)+"/kick?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}