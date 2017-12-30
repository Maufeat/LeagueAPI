#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SummonerOrTeamAvailabilty.hpp"
namespace lol {
  template<typename T>
  inline Result<SummonerOrTeamAvailabilty> PostLolSpectatorV1BuddySpectate(T& _client, const std::vector<std::string>& summonerOrTeamNames)
  {
    try {
      return ToResult<SummonerOrTeamAvailabilty>(_client.https.request("post", "/lol-spectator/v1/buddy/spectate?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(summonerOrTeamNames).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<SummonerOrTeamAvailabilty>(e.code());
    }
  }
  template<typename T>
  inline void PostLolSpectatorV1BuddySpectate(T& _client, const std::vector<std::string>& summonerOrTeamNames, std::function<void(T&, const Result<SummonerOrTeamAvailabilty>&)> cb)
  {
    _client.httpsa.request("post", "/lol-spectator/v1/buddy/spectate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(summonerOrTeamNames).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<SummonerOrTeamAvailabilty>(e));
            else
              cb(_client, ToResult<SummonerOrTeamAvailabilty>(response));
        });
  }
}