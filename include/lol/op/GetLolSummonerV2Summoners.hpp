#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolSummonerSummoner>> GetLolSummonerV2Summoners(T& _client, const std::optional<std::string>& name = std::nullopt, const std::optional<std::vector<uint64_t>>& ids = std::nullopt)
  {
    try {
      return ToResult<std::vector<LolSummonerSummoner>>(_client.https.request("get", "/lol-summoner/v2/summoners?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "name", to_string(name) },
          { "ids", to_string(ids) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolSummonerSummoner>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolSummonerV2Summoners(T& _client, const std::optional<std::string>& name = std::nullopt, const std::optional<std::vector<uint64_t>>& ids = std::nullopt, std::function<void(T&, const Result<std::vector<LolSummonerSummoner>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v2/summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "name", to_string(name) },
          { "ids", to_string(ids) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolSummonerSummoner>>(e));
            else
              cb(_client, ToResult<std::vector<LolSummonerSummoner>>(response));
        });
  }
}