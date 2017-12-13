#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyPremadePartyDto.hpp>
namespace lol {
  Result<LolLobbyPremadePartyDto> GetLolLobbyV2CommsMembers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyPremadePartyDto> {
        _client_.request("get", "/lol-lobby/v2/comms/members?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyPremadePartyDto> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}