#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubMember.hpp>
namespace lol {
  inline Result<std::vector<ClubMember>> GetLolClubsV1ClubsByClubKeyMembers(const LeagueClient& _client, const std::string& clubKey)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<ClubMember>> {
        _client_.request("get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<ClubMember>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}