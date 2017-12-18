#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ClubMemberLists.hpp"
namespace lol {
  inline Result<ClubMemberLists> DeleteLolClubsV1ClubsByClubKeyInvitationsBySummonerId(LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId)
  {
    try {
      return Result<ClubMemberLists> {
        _client.https.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/invitations/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ClubMemberLists> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void DeleteLolClubsV1ClubsByClubKeyInvitationsBySummonerId(LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<ClubMemberLists>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/invitations/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<ClubMemberLists> { response });
          else
            cb(_client,Result<ClubMemberLists> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}