#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerIdAndIcon.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolSummonerSummonerIdAndIcon>> GetLolSummonerV2SummonerIcons(T& _client, const std::vector<uint64_t>& ids)
  {
    try {
      return ToResult<std::vector<LolSummonerSummonerIdAndIcon>>(_client.https.request("get", "/lol-summoner/v2/summoner-icons?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "ids", to_string(ids) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolSummonerSummonerIdAndIcon>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolSummonerV2SummonerIcons(T& _client, const std::vector<uint64_t>& ids, std::function<void(T&, const Result<std::vector<LolSummonerSummonerIdAndIcon>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v2/summoner-icons?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "ids", to_string(ids) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolSummonerSummonerIdAndIcon>>(e));
            else
              cb(_client, ToResult<std::vector<LolSummonerSummonerIdAndIcon>>(response));
        });
  }
}