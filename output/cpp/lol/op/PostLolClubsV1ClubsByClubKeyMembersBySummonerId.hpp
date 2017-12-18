#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerClub.hpp"
namespace lol {
  inline Result<PlayerClub> PostLolClubsV1ClubsByClubKeyMembersBySummonerId(LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId)
  {
    try {
      return Result<PlayerClub> {
        _client.https.request("post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolClubsV1ClubsByClubKeyMembersBySummonerId(LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<PlayerClub>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlayerClub> { response });
          else
            cb(_client,Result<PlayerClub> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}