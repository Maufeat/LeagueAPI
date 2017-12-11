#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyPremadePartyDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyPremadePartyDto> GetLolLobbyV2CommsMembers (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/comms/members?", { 
    }, { 
    },"") };
  }
} 