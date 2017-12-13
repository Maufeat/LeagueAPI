#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolChatV1BlockedPlayersById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-chat/v1/blocked-players/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}