#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyPartyMemberMetadataDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolLobbyV1PartiesMetadata (const https::Info& _info_,
      const LolLobbyPartyMemberMetadataDto& metadata /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-lobby/v1/parties/metadata?", { 
    }, { 
    },metadata) };
  }
} 