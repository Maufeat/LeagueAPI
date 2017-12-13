#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolReplaysReplaysConfiguration.hpp>
namespace lol {
  Result<LolReplaysReplaysConfiguration> GetLolReplaysV1Configuration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-replays/v1/configuration?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}