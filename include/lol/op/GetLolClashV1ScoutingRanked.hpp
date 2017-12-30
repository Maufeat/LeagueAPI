#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRankedScoutingMember.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolClashRankedScoutingMember>> GetLolClashV1ScoutingRanked(T& _client, const std::vector<uint64_t>& summonerIds)
  {
    try {
      return ToResult<std::vector<LolClashRankedScoutingMember>>(_client.https.request("get", "/lol-clash/v1/scouting/ranked?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerIds", to_string(summonerIds) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashRankedScoutingMember>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1ScoutingRanked(T& _client, const std::vector<uint64_t>& summonerIds, std::function<void(T&, const Result<std::vector<LolClashRankedScoutingMember>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/scouting/ranked?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerIds", to_string(summonerIds) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashRankedScoutingMember>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashRankedScoutingMember>>(response));
        });
  }
}