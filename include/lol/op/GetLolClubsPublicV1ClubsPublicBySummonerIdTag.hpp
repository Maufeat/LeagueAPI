#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClubsPublicClubTag.hpp"
namespace lol {
  inline Result<LolClubsPublicClubTag> GetLolClubsPublicV1ClubsPublicBySummonerIdTag(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolClubsPublicClubTag>(_client.https.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"/tag?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClubsPublicClubTag>(e.code());
    }
  }
  inline void GetLolClubsPublicV1ClubsPublicBySummonerIdTag(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<LolClubsPublicClubTag>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"/tag?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClubsPublicClubTag>(e));
            else
              cb(_client, ToResult<LolClubsPublicClubTag>(response));
        });
  }
}