#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClubsPublicClubsPublicData.hpp"
namespace lol {
  inline Result<std::vector<LolClubsPublicClubsPublicData>> GetLolClubsPublicV1ClubsPublic(LeagueClient& _client, const std::string& summonerNames)
  {
    try {
      return ToResult<std::vector<LolClubsPublicClubsPublicData>>(_client.https.request("get", "/lol-clubs-public/v1/clubs/public?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerNames", to_string(summonerNames) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClubsPublicClubsPublicData>>(e.code());
    }
  }
  inline void GetLolClubsPublicV1ClubsPublic(LeagueClient& _client, const std::string& summonerNames, std::function<void(LeagueClient&, const Result<std::vector<LolClubsPublicClubsPublicData>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs-public/v1/clubs/public?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerNames", to_string(summonerNames) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClubsPublicClubsPublicData>>(e));
            else
              cb(_client, ToResult<std::vector<LolClubsPublicClubsPublicData>>(response));
        });
  }
}