#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLoot.hpp"
namespace lol {
  inline Result<std::vector<LolLootPlayerLoot>> GetLolLootV1PlayerLoot(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLootPlayerLoot>> {
        _client.https.request("get", "/lol-loot/v1/player-loot?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootPlayerLoot>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLootV1PlayerLoot(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLootPlayerLoot>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/player-loot?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLootPlayerLoot>> { response });
          else
            cb(_client,Result<std::vector<LolLootPlayerLoot>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}