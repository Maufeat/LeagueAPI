#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutLolLobbyV1PartiesByPartyIdMembersByPuuidRole(const LeagueClient& _client, const std::string& partyId, const std::string& puuid, const std::string& role)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/lol-lobby/v1/parties/"+to_string(partyId)+"/members/"+to_string(puuid)+"/role?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(role).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}