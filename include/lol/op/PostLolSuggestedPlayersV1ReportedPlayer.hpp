#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSuggestedPlayersSuggestedPlayersReportedPlayer.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolSuggestedPlayersV1ReportedPlayer(LeagueClient& _client, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& resource)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-suggested-players/v1/reported-player?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolSuggestedPlayersV1ReportedPlayer(LeagueClient& _client, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& resource, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-suggested-players/v1/reported-player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}