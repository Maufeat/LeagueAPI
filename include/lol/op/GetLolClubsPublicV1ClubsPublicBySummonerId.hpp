#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClubsPublicClubsPublicData.hpp"
namespace lol {
  inline Result<LolClubsPublicClubsPublicData> GetLolClubsPublicV1ClubsPublicBySummonerId(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolClubsPublicClubsPublicData>(_client.https.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClubsPublicClubsPublicData>(e.code());
    }
  }
  inline void GetLolClubsPublicV1ClubsPublicBySummonerId(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<LolClubsPublicClubsPublicData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClubsPublicClubsPublicData>(e));
            else
              cb(_client, ToResult<LolClubsPublicClubsPublicData>(response));
        });
  }
}