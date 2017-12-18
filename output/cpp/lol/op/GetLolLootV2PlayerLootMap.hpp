#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLootMap.hpp"
namespace lol {
  inline Result<LolLootPlayerLootMap> GetLolLootV2PlayerLootMap(LeagueClient& _client)
  {
    try {
      return Result<LolLootPlayerLootMap> {
        _client.https.request("get", "/lol-loot/v2/player-loot-map?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLootPlayerLootMap> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLootV2PlayerLootMap(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLootPlayerLootMap>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v2/player-loot-map?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLootPlayerLootMap> { response });
          else
            cb(_client,Result<LolLootPlayerLootMap> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}