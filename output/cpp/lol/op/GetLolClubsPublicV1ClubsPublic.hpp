#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClubsPublicClubsPublicData.hpp"
namespace lol {
  inline Result<std::vector<LolClubsPublicClubsPublicData>> GetLolClubsPublicV1ClubsPublic(LeagueClient& _client, const std::string& summonerNames)
  {
    try {
      return Result<std::vector<LolClubsPublicClubsPublicData>> {
        _client.https.request("get", "/lol-clubs-public/v1/clubs/public?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerNames", to_string(summonerNames) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClubsPublicClubsPublicData>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClubsPublicV1ClubsPublic(LeagueClient& _client, const std::string& summonerNames, std::function<void(LeagueClient&,const Result<std::vector<LolClubsPublicClubsPublicData>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs-public/v1/clubs/public?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerNames", to_string(summonerNames) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolClubsPublicClubsPublicData>> { response });
          else
            cb(_client,Result<std::vector<LolClubsPublicClubsPublicData>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}