#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRosterStats.hpp>
namespace lol {
  Result<std::vector<LolClashRosterStats>> GetLolClashV1PlayerHistory(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/player/history?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}