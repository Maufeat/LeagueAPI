#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolLobbyV1PartiesByPartyIdMembersByPuuidRole (const https::Info& _info_,
      const std::string& partyId /**/,
      const std::string& puuid /**/,
      const std::string& role /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-lobby/v1/parties/"+to_string(partyId)+"/members/"+to_string(puuid)+"/role?", { 
    }, { 
    },role) };
  }
} 