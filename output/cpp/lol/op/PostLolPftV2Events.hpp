#pragma once
#include "../base_op.hpp" 
#include "../def/LolPftPFTEvent.hpp"
namespace lol {
  inline Result<json> PostLolPftV2Events(const LeagueClient& _client, const LolPftPFTEvent& pftEvent)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-pft/v2/events?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(pftEvent).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}